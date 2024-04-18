#include "board.h"
#include "gameConfig.h"
#include "general.h"
#include <iostream>
#include "Point.h"
using namespace std;

void Board::init()
{
	for (int i = 0; i < GameConfig::GAME_HEIGHT; i++) {
		for (int j = 0; j < GameConfig::GAME_WIDTH; j++) {
			board[i][j] = (GameConfig::eGameObj::EMPTY);
		}
	}
}
void Board::Update_Board_Matrix(Point &p)
{
	this->board[(p.getY() - GameConfig::MIN_Y)][(p.getX() - GameConfig::MIN_X )] = p.getType();
}
void Board::Draw_Frame()
{
	Draw_Wall(GameConfig::MIN_X, GameConfig::MIN_Y ,GameConfig::MIN_Y + GameConfig::GAME_HEIGHT);
	Draw_Wall(GameConfig::MIN_X + GameConfig::GAME_WIDTH, GameConfig::MIN_Y, GameConfig::MIN_Y + GameConfig::GAME_HEIGHT);
	Draw_Floor(GameConfig::MIN_X, GameConfig::MIN_X + GameConfig::GAME_WIDTH, GameConfig::MIN_Y);
	Draw_Floor(GameConfig::MIN_X, GameConfig::MIN_X + GameConfig::GAME_WIDTH, GameConfig::MIN_Y+GameConfig::GAME_HEIGHT);
}
void Board::Draw_Wall(int wall_x, int wall_y_start, int wall_y_end)
{

	for (int row = wall_y_start; row <= wall_y_end ; row++)
	{
		Point p;
		p.init(wall_x, row , GameConfig::eGameObj::WALL);
		gotoxy(wall_x, row);
		p.draw();
		Update_Board_Matrix(p);
	}
}
void Board::Draw_Floor(int floor_x_start, int floor_x_end, int floor_y)
{

	for (int col = floor_x_start; col <= floor_x_end; col++)
	{
		Point p;
		p.init(col, floor_y, GameConfig::eGameObj::FLOOR);
		gotoxy(col,floor_y);
		p.draw();
		Update_Board_Matrix(p);
	}
}
void Board::Draw_Board()
{
	
	Draw_Frame();
	Draw_Wall(GameConfig::WALL1_X, GameConfig::WALL1_Y_START, GameConfig::WALL1_Y_END);
	Draw_Wall(GameConfig::WALL2_X, GameConfig::WALL2_Y_START, GameConfig::WALL2_Y_END);
	Draw_Wall(GameConfig::WALL3_X, GameConfig::WALL3_Y_START, GameConfig::WALL3_Y_END);
	Draw_Wall(GameConfig::WALL4_X, GameConfig::WALL4_Y_START, GameConfig::WALL4_Y_END);
	Draw_Wall(GameConfig::WALL5_X, GameConfig::WALL5_Y_START, GameConfig::WALL5_Y_END);

	Draw_Floor(GameConfig::FLOOR1_X_START, GameConfig::FLOOR1_X_END, GameConfig::FLOOR1_Y);
	Draw_Floor(GameConfig::FLOOR2_X_START, GameConfig::FLOOR2_X_END, GameConfig::FLOOR2_Y);
	Draw_Floor(GameConfig::FLOOR3_X_START, GameConfig::FLOOR3_X_END, GameConfig::FLOOR3_Y);
	Draw_Floor(GameConfig::FLOOR4_X_START, GameConfig::FLOOR4_X_END, GameConfig::FLOOR4_Y);
}