//  $Id: NumPlayers.h,v 1.2 2004/08/10 16:22:32 grumbel Exp $
//
//  TuxKart - a fun racing game with go-kart
//  Copyright (C) 2004 Steve Baker <sjbaker1@airmail.net>
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef HEADER_NUMPLAYERS_H
#define HEADER_NUMPLAYERS_H

#include "../RaceSetup.h"
#include "BaseGUI.h"

class NumPlayers: public BaseGUI
{
private:
  RaceSetup& raceSetup;
public:
	NumPlayers(RaceSetup& raceSetup);
	~NumPlayers();
	
	void update(float dt);
	void select();
	void keybd(const SDL_keysym& key);
	void point(int x, int y);
	void stick(int x, int y);
	
private:
	int menu_id;
};

#endif
