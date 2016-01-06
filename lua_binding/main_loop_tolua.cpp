/*
** Lua binding: main_loop
*/

#include "tolua.h"

#ifndef __cplusplus
#include <stdlib.h>
#endif
#ifdef __cplusplus
 extern "C" int tolua_bnd_takeownership (lua_State* L); // from tolua_map.c
#else
 int tolua_bnd_takeownership (lua_State* L); /* from tolua_map.c */
#endif
#include <string.h>

/* Exported function */
TOLUA_API int tolua_main_loop_open (lua_State* tolua_S);
LUALIB_API int luaopen_main_loop (lua_State* tolua_S);

#include "main_loop.hpp"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"main_loop");
}

/* method: get_instance of class  main_loop */
static int tolua_main_loop_main_loop_get_instance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"main_loop",0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  main_loop* tolua_ret = (main_loop*)  main_loop::get_instance();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"main_loop");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_instance'.",&tolua_err);
 return 0;
#endif
}

/* method: set_callback of class  main_loop */
static int tolua_main_loop_main_loop_set_callback00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"main_loop",0,&tolua_err) || 
 !tolua_isfunction(tolua_S,2,0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  main_loop* self = (main_loop*)  tolua_tousertype(tolua_S,1,0);
  int cb = ((int)  tolua_tovalue(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_callback'",NULL);
#endif
 {
  int tolua_ret = (int)  self->set_callback(cb);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_callback'.",&tolua_err);
 return 0;
#endif
}

/* Open lib function */
LUALIB_API int luaopen_main_loop (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
 tolua_cclass(tolua_S,"main_loop","main_loop","",NULL);
 tolua_beginmodule(tolua_S,"main_loop");
 tolua_function(tolua_S,"get_instance",tolua_main_loop_main_loop_get_instance00);
 tolua_function(tolua_S,"set_callback",tolua_main_loop_main_loop_set_callback00);
 tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}
/* Open tolua function */
TOLUA_API int tolua_main_loop_open (lua_State* tolua_S)
{
 lua_pushcfunction(tolua_S, luaopen_main_loop);
 lua_pushstring(tolua_S, "main_loop");
 lua_call(tolua_S, 1, 0);
 return 1;
}
