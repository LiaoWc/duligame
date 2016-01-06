//
//  main_loop.cpp
//  duligame
//
//  Created by Liao on 16/1/5.
//
//

#include "main_loop.hpp"
#include "lua_support.hpp"
#include "cocos2d.h"
USING_NS_CC;
main_loop* main_loop::m_instance = nullptr;

main_loop::main_loop(){
    m_callback = 0;
}
main_loop::~main_loop(){
    
}
main_loop* main_loop::get_instance(){
    if (m_instance == nullptr) {
        m_instance = new main_loop();
    }
    return m_instance;
}
void main_loop::update(float delta){
    if(m_callback){
        lua_support* ls = lua_support::get_instance();
        lua_State* state = ls->get_state();
        lua_rawgeti(state, LUA_REGISTRYINDEX, m_callback);
        lua_pushnumber(state, delta);
        lua_call(state, 1, 0);
    }
}

int main_loop::set_callback(int lua_function){
    lua_support* ls = lua_support::get_instance();
    lua_State* state = ls->get_state();
    if(m_callback){
        luaL_unref(state, LUA_REGISTRYINDEX, m_callback);
    }
    m_callback = luaL_ref(state, LUA_REGISTRYINDEX);
    return m_callback;
}