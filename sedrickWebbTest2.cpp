#include <iostream>

using namespace std;

bool IsWithInBounds(int x, int y ,int screen_width,int screen_hight);

int x = 0;
int y = 0;
const int screen_Hight = 100;
const int screen_Width = 100;
bool validClick = false;

int main()
{
	cout << "choose a number for the X:";
	cin >> x;
	cout << endl << "Choose a number for Y:";
	cin >> y;

	validClick = IsWithInBounds(x,y,screen_Width,screen_Hight);
	if (validClick == true)
	{
		cout << "Inside of bounds.";
	}
	else if(validClick == false)
	{
		cout << "Outside of bounds.";
	}
}

bool IsWithInBounds(int x, int y, int screen_width, int screen_hight)
{
	if ((x >= 0 && x <= screen_width) && (y >= 0 && y <= screen_hight))
	{
		return true;
	}
	else
	{
		return false;
	}
}