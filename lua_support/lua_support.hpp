//
//  lua_support.hpp
//  duligame
//
//  Created by Liao on 16/1/5.
//
//

#ifndef lua_support_hpp
#define lua_support_hpp

extern "C" {
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

class lua_support
{
public:
    static lua_support* get_instance();
    void init();
    int do_file(const char* a_file_path);
    lua_State* get_state();
private:
    lua_support();
    ~lua_support();
    lua_State* m_state;
    static lua_support* m_instance;
};

#endif /* lua_support_hpp */
