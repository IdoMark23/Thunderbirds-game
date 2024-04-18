#ifndef __BOARD_
#define __BOARD_

#include "gameConfig.h"
#include "Point.h"

class Board {
	
	 GameConfig::eGameObj board[GameConfig::GAME_HEIGHT][GameConfig::GAME_WIDTH];

public:
	/*
	bool add(Point p, GameConfig::eGameObj symbol);
	void erase(Point p);
	GameConfig::eGameObj checkPoint(Point p);
	bool isBlockCanMove(Point p, GameConfig::eKeys direction, int size);
	bool isBlockCanMove(Point p, Point p2, GameConfig::eKeys direction, int size);
	void moveBlock(Point p, GameConfig::eKeys direction);*/
	void init();
	void Update_Board_Matrix(Point &p);
	void Draw_Frame();

	void Draw_Wall(int wall_x, int wall_y_start, int wall_y_end);
	void Draw_Floor(int floor_x_start, int floor_x_end, int floor_y);
	void Draw_Board();
};



#endif // !1



