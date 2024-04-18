#include <conio.h> // for kbhit+getch
#include <iostream>
#include <Windows.h> // for Sleep and colors
using namespace std;

#include "general.h" 
#include "gameConfig.h"
#include "board.h"

void main()
{
	Board Board;
	
	Board.init();
	Board.Draw_Board();
	gotoxy(0, GameConfig::GAME_HEIGHT + 5);
}

