#include <iostream>
#include <Windows.h>
using namespace std;

typedef struct tagPOINT
{
	long x;
	long y;
}POINT, * PPOINT;

int main()
{
	long x = POINT.x;
	long y = POINT.y;
	cout << "choose a number for the X: " << x;

	cout << endl << "Choose a number for Y: " << y;


	bool validClick = IsWithinBounds(x, y, screen_with, screen_hight);

	cout << validClick;
}

bool IsWithInBounds(int x, int y, int screen_width, int screen_hight)
{
	if (x >= 0 || x <= screen_width || y >= 0 || y <= screen_hight)
	{
		return true;
	}
	else
	{
		return false;
	}
}