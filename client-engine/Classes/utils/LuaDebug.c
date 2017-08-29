//
//  LuaDebug.c
//  goddess
//
//  Created by 孙少磊 on 13-11-6.
//
//
#include "LuaDebug.h"

static luaL_Reg luax_preload_list[] = {
    {"socket.core", luaopen_socket_core},
    {"mime.core", luaopen_mime_core},
    {NULL, NULL}
};

void start_lua_debug(lua_State* m_state){

    luaL_Reg* lib = luax_preload_list;
    luaL_findtable(m_state, LUA_GLOBALSINDEX, "package.preload", sizeof(luax_preload_list)/sizeof(luax_preload_list[0])-1);
    for (; lib->func; lib++) {
        lua_pushstring(m_state, lib->name);
        lua_pushcfunction(m_state, lib->func);
        lua_rawset(m_state, -3);
    }
    lua_pop(m_state, 1);
    
}