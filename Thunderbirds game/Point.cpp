#include "Point.h"
#include "gameConfig.h"
#include "general.h"
#include <iostream>
#include <Windows.h>
using namespace std;


void Point::draw()
{
	gotoxy(x, y);
	cout << (char)this->type;
}