/*
Copyright (C) 1997-2001 Id Software, Inc.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
// sdl2quake.h: SDL-specific Quake header file

#pragma warning( disable : 4229 )  // mgraph gets this

#include <SDL.h>

#ifdef _WIN32
#include <windows.h>
#endif

#include <SDL_syswm.h>



extern SDL_Window *mainWindow;
extern uint32_t mainWindowID;
extern SDL_SysWMinfo mainWindowInfo;

extern SDL_bool		ActiveApp, Minimized, RelativeMouse;

void IN_Activate (qboolean active);
void IN_MouseEvent (int32_t mstate);

extern int32_t		window_center_x, window_center_y;
