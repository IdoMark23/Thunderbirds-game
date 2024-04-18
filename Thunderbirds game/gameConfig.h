#ifndef __GAME_CONFIG_H
#define __GAME_CONFIG_H

class GameConfig
{
public:
	enum class eKeys { LEFT = 'a', RIGHT = 's', UP = 'w', DOWN = 'z', ESC = 27 };
	enum class eGameObj { WALL='|', FLOOR = '&', SMALLBLOCK = '2', BIGBLOCK = '4', EMPTY = ' ' };

	static constexpr int GAME_WIDTH = 60;
	static constexpr int GAME_HEIGHT = 15;

	static constexpr int MIN_X = 30;
	static constexpr int MIN_Y = 2;
	//WALLS:
	static constexpr int WALL1_X = 83;
	static constexpr int WALL1_Y_START = 3;
	static constexpr int WALL1_Y_END = 5;
    
	static constexpr int WALL2_X = 75;
	static constexpr int WALL2_Y_START = 3;
	static constexpr int WALL2_Y_END = 4;

	static constexpr int WALL3_X = 40;
	static constexpr int WALL3_Y_START = 8;
	static constexpr int WALL3_Y_END = 13;

	static constexpr int WALL4_X = 50;
	static constexpr int WALL4_Y_START = 10;
	static constexpr int WALL4_Y_END = 13;

	static constexpr int WALL5_X = 55;
	static constexpr int WALL5_Y_START = 15;
	static constexpr int WALL5_Y_END = 16;

	//FLOORS:
	static constexpr int FLOOR1_X_START = 40;
	static constexpr int FLOOR1_X_END = 90;
	static constexpr int FLOOR1_Y = 8;

	static constexpr int FLOOR2_X_START = 40;
	static constexpr int FLOOR2_X_END = 50;
	static constexpr int FLOOR2_Y = 13;

	static constexpr int FLOOR3_X_START = 50;
	static constexpr int FLOOR3_X_END = 90;
	static constexpr int FLOOR3_Y = 10;

	static constexpr int FLOOR4_X_START = 55;
	static constexpr int FLOOR4_X_END = 80;
	static constexpr int FLOOR4_Y = 14;

	//COLORS:
	static const int COLORS[];
	static const int NUM_OF_COLORS;
};
#endif