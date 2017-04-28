#pragma once


#include "renderSystem.h"


const int levelRows = screenRows;
const int levelColumns = screenColumns;

const float shipSpeed = 35.0;
const float shipFireCooldown = 0.2;

const float bulletSpeed = 40.0;

const unsigned char	CellSymbol_Ship = 'S';
const unsigned char	CellSymbol_Bullet = '|';

const unsigned char levelData0[levelRows][levelColumns + 1] =
{
	"                                                                                ",
	"       XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX       ",
	"         X  XXXX XX XXXXXXX  XXXXXXXXXXXXXXXXXXXXXX  XXXXXXX XX XXXX  X         ",
	"       XXXXXXXXX    X  X  X  X  XXX  XXXXXX  XXX  X  X  X  X    XXXXXXXXX       ",
	"            XXXX    X  X  X  XXXXXXX  XXXX  XXXXXXX  X  X  X    XXXX            ",
	"            XXXX             X   XXXXXXXXXXXXXX   X             XXXX            ",
	"            X  X                  XXXXXXXXXXXX                  X  X            ",
	"                                  XX  XXXX  XX                                  ",
	"                                  XX  X  X  XX                                  ",
	"                                  X          X                                  ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                       S                                        ",
};


unsigned char GetRenderCellSymbol(unsigned char cellSymbol)
{
	switch (cellSymbol)
	{
	case CellSymbol_Ship:			return 202;
	case CellSymbol_Bullet:			return 179;
	}
	return '?';
}

ConsoleColor GetRenderCellSymbolColor(unsigned char cellSymbol)
{
	switch (cellSymbol)
	{
	case CellSymbol_Ship:			return ConsoleColor_White;
	case CellSymbol_Bullet:			return ConsoleColor_Red;
	}
	return ConsoleColor_Gray;
}

ConsoleColor GetRenderCellSymbolBackgroundColor(unsigned char cellSymbol)
{
	switch (cellSymbol)
	{
	case CellSymbol_Ship:			return ConsoleColor_DarkGray;
	}

	return ConsoleColor_Black;
}