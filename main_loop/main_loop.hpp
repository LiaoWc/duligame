//
//  main_loop.hpp
//  duligame
//
//  Created by Liao on 16/1/5.
//
//

#ifndef main_loop_hpp
#define main_loop_hpp
extern "C" {
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}
class main_loop
{
public:
    static main_loop* get_instance();
    int set_callback(int lua_function);
    void update(float delta);
private:
    main_loop();
    ~main_loop();
    int m_callback;
    static main_loop* m_instance;
};

#endif /* main_loop_hpp */
