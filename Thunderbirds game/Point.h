#ifndef __POINT__
#define __POINT__
#include "gameConfig.h"

class Point
{

	int x;
	int y;	
	GameConfig::eGameObj type;
	int diff_x=0;
	int diff_y=0;

public:
	void init(int x, int y, GameConfig::eGameObj type ) { this->x = x; this->y = y; this->type = type;};
	void draw();
	/*void move(GameConfig::eKeys key);*/
	int getX() { return x; };
	int getY() { return y; };
	GameConfig::eGameObj getType() { return type; };

};

#endif
