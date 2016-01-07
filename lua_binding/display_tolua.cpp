/*
** Lua binding: display
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
TOLUA_API int tolua_display_open (lua_State* tolua_S);
LUALIB_API int luaopen_display (lua_State* tolua_S);

#include "base.hpp"
#include "image.hpp"
#include "text.hpp"
using namespace duli;

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"base");
 tolua_usertype(tolua_S,"text");
 tolua_usertype(tolua_S,"image");
}

/* method: set_position of class  base */
static int tolua_display_base_set_position00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"base",0,&tolua_err) || 
 !tolua_isnumber(tolua_S,2,0,&tolua_err) || 
 !tolua_isnumber(tolua_S,3,0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  base* self = (base*)  tolua_tousertype(tolua_S,1,0);
  const float x = ((const float)  tolua_tonumber(tolua_S,2,0));
  const float y = ((const float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_position'",NULL);
#endif
 {
  self->set_position(x,y);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_position'.",&tolua_err);
 return 0;
#endif
}

/* method: set_position_x of class  base */
static int tolua_display_base_set_position_x00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"base",0,&tolua_err) || 
 !tolua_isnumber(tolua_S,2,0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  base* self = (base*)  tolua_tousertype(tolua_S,1,0);
  const float x = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_position_x'",NULL);
#endif
 {
  self->set_position_x(x);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_position_x'.",&tolua_err);
 return 0;
#endif
}

/* method: set_position_y of class  base */
static int tolua_display_base_set_position_y00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"base",0,&tolua_err) || 
 !tolua_isnumber(tolua_S,2,0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  base* self = (base*)  tolua_tousertype(tolua_S,1,0);
  const float y = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_position_y'",NULL);
#endif
 {
  self->set_position_y(y);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_position_y'.",&tolua_err);
 return 0;
#endif
}

/* method: get_position_x of class  base */
static int tolua_display_base_get_position_x00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"base",0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  base* self = (base*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_position_x'",NULL);
#endif
 {
  float tolua_ret = (float)  self->get_position_x();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_position_x'.",&tolua_err);
 return 0;
#endif
}

/* method: get_position_y of class  base */
static int tolua_display_base_get_position_y00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"base",0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  base* self = (base*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_position_y'",NULL);
#endif
 {
  float tolua_ret = (float)  self->get_position_y();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_position_y'.",&tolua_err);
 return 0;
#endif
}

/* method: set_scale of class  base */
static int tolua_display_base_set_scale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"base",0,&tolua_err) || 
 !tolua_isnumber(tolua_S,2,0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  base* self = (base*)  tolua_tousertype(tolua_S,1,0);
  const float s = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_scale'",NULL);
#endif
 {
  self->set_scale(s);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_scale'.",&tolua_err);
 return 0;
#endif
}

/* method: set_scale_x of class  base */
static int tolua_display_base_set_scale_x00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"base",0,&tolua_err) || 
 !tolua_isnumber(tolua_S,2,0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  base* self = (base*)  tolua_tousertype(tolua_S,1,0);
  const float s = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_scale_x'",NULL);
#endif
 {
  self->set_scale_x(s);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_scale_x'.",&tolua_err);
 return 0;
#endif
}

/* method: set_scale_y of class  base */
static int tolua_display_base_set_scale_y00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"base",0,&tolua_err) || 
 !tolua_isnumber(tolua_S,2,0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  base* self = (base*)  tolua_tousertype(tolua_S,1,0);
  const float s = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_scale_y'",NULL);
#endif
 {
  self->set_scale_y(s);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_scale_y'.",&tolua_err);
 return 0;
#endif
}

/* method: get_scale_x of class  base */
static int tolua_display_base_get_scale_x00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"base",0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  base* self = (base*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_scale_x'",NULL);
#endif
 {
  float tolua_ret = (float)  self->get_scale_x();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_scale_x'.",&tolua_err);
 return 0;
#endif
}

/* method: get_scale_y of class  base */
static int tolua_display_base_get_scale_y00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"base",0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  base* self = (base*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_scale_y'",NULL);
#endif
 {
  float tolua_ret = (float)  self->get_scale_y();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_scale_y'.",&tolua_err);
 return 0;
#endif
}

/* method: get_scale of class  base */
static int tolua_display_base_get_scale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"base",0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  base* self = (base*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_scale'",NULL);
#endif
 {
  float tolua_ret = (float)  self->get_scale();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_scale'.",&tolua_err);
 return 0;
#endif
}

/* method: set_rotation of class  base */
static int tolua_display_base_set_rotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"base",0,&tolua_err) || 
 !tolua_isnumber(tolua_S,2,0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  base* self = (base*)  tolua_tousertype(tolua_S,1,0);
  const float r = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_rotation'",NULL);
#endif
 {
  self->set_rotation(r);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_rotation'.",&tolua_err);
 return 0;
#endif
}

/* method: get_rotation of class  base */
static int tolua_display_base_get_rotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"base",0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  base* self = (base*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_rotation'",NULL);
#endif
 {
  float tolua_ret = (float)  self->get_rotation();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_rotation'.",&tolua_err);
 return 0;
#endif
}

/* method: new of class  image */
static int tolua_display_image_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"image",0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  image* tolua_ret = (image*)  new image();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"image");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: set_file of class  image */
static int tolua_display_image_set_file00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"image",0,&tolua_err) || 
 !tolua_isstring(tolua_S,2,0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  image* self = (image*)  tolua_tousertype(tolua_S,1,0);
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_file'",NULL);
#endif
 {
  self->set_file(file);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_file'.",&tolua_err);
 return 0;
#endif
}

/* method: new of class  text */
static int tolua_display_text_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"text",0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  text* tolua_ret = (text*)  new text();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"text");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: set_string of class  text */
static int tolua_display_text_set_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"text",0,&tolua_err) || 
 !tolua_isstring(tolua_S,2,0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  text* self = (text*)  tolua_tousertype(tolua_S,1,0);
  const char* str = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_string'",NULL);
#endif
 {
  self->set_string(str);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_string'.",&tolua_err);
 return 0;
#endif
}

/* method: set_size of class  text */
static int tolua_display_text_set_size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"text",0,&tolua_err) || 
 !tolua_isnumber(tolua_S,2,0,&tolua_err) || 
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  text* self = (text*)  tolua_tousertype(tolua_S,1,0);
  const float s = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_size'",NULL);
#endif
 {
  self->set_size(s);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_size'.",&tolua_err);
 return 0;
#endif
}

/* Open lib function */
LUALIB_API int luaopen_display (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
 tolua_cclass(tolua_S,"base","base","",NULL);
 tolua_beginmodule(tolua_S,"base");
 tolua_function(tolua_S,"set_position",tolua_display_base_set_position00);
 tolua_function(tolua_S,"set_position_x",tolua_display_base_set_position_x00);
 tolua_function(tolua_S,"set_position_y",tolua_display_base_set_position_y00);
 tolua_function(tolua_S,"get_position_x",tolua_display_base_get_position_x00);
 tolua_function(tolua_S,"get_position_y",tolua_display_base_get_position_y00);
 tolua_function(tolua_S,"set_scale",tolua_display_base_set_scale00);
 tolua_function(tolua_S,"set_scale_x",tolua_display_base_set_scale_x00);
 tolua_function(tolua_S,"set_scale_y",tolua_display_base_set_scale_y00);
 tolua_function(tolua_S,"get_scale_x",tolua_display_base_get_scale_x00);
 tolua_function(tolua_S,"get_scale_y",tolua_display_base_get_scale_y00);
 tolua_function(tolua_S,"get_scale",tolua_display_base_get_scale00);
 tolua_function(tolua_S,"set_rotation",tolua_display_base_set_rotation00);
 tolua_function(tolua_S,"get_rotation",tolua_display_base_get_rotation00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"image","image","base",NULL);
 tolua_beginmodule(tolua_S,"image");
 tolua_function(tolua_S,"new",tolua_display_image_new00);
 tolua_function(tolua_S,"set_file",tolua_display_image_set_file00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"text","text","base",NULL);
 tolua_beginmodule(tolua_S,"text");
 tolua_function(tolua_S,"new",tolua_display_text_new00);
 tolua_function(tolua_S,"set_string",tolua_display_text_set_string00);
 tolua_function(tolua_S,"set_size",tolua_display_text_set_size00);
 tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}
/* Open tolua function */
TOLUA_API int tolua_display_open (lua_State* tolua_S)
{
 lua_pushcfunction(tolua_S, luaopen_display);
 lua_pushstring(tolua_S, "display");
 lua_call(tolua_S, 1, 0);
 return 1;
}
