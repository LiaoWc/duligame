//
//  lua_support.cpp
//  duligame
//
//  Created by Liao on 16/1/5.
//
//

#include "lua_support.hpp"
#include "cocos2d.h"
USING_NS_CC;
lua_support* lua_support::m_instance = nullptr;

int luaopen_main_loop (lua_State* tolua_S);
int luaopen_glview (lua_State* tolua_S);


lua_support::lua_support(){
    m_state = luaL_newstate();
    static const luaL_Reg lualibs[] = {
        { "base", luaopen_base },
        { "table", luaopen_table },
        { "math", luaopen_math },
        { "debug", luaopen_debug },
        {"package",luaopen_package},
        { "string",luaopen_string },
        { NULL, NULL }
    };
    
    const luaL_Reg *lib = lualibs;
    for (; lib->func != NULL; lib++)
    {
        luaL_requiref(m_state, lib->name, lib->func, 1);
        lua_pop(m_state, 1);
    }
    
    luaopen_glview(m_state);
    luaopen_main_loop(m_state);
    
    //
    std::string projectPath;
    std::string scriptPath;
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
    projectPath = "Resources";
#endif
#if (CC_TARGET_PLATFORM == CC_PLATFORM_MAC)
    projectPath = "/Users/liao/duligame/duligame/Resources";
#endif
    FileUtils::getInstance()->addSearchPath(projectPath);
    FileUtils::getInstance()->addSearchPath(projectPath + "/scripts");
    FileUtils::getInstance()->addSearchPath(projectPath + "/images");
}
lua_support::~lua_support(){
    
}
lua_support* lua_support::get_instance(){
    if (m_instance == nullptr) {
        m_instance = new lua_support();
    }
    return m_instance;
}
void lua_support::init(){
}
int lua_support::do_file(const char* a_file_path) {
    auto scriptPath = FileUtils::getInstance()->fullPathForFilename(a_file_path);
    return luaL_dofile(m_state, scriptPath.c_str());
}
lua_State* lua_support::get_state(){
    return m_state;
}