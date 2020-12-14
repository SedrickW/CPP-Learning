#include <iostream>
#include <string>

using namespace std;


class Player
{
public:
	void setName(string n);
	
	void setScore(int s);
	string getName() const;
	int getScore() const;
private:
	string  name = "Jeff";
	int score = 00;

};
void Player :: setName(string n)
{
	name = n;
	return;
}
void Player::setScore(int s)
{
	score = s;
	return;
}
string Player::getName() const
{
	return name;
}
int Player::getScore() const
{
	return score;
}
int main()
{
	Player player1;
	player1.setName("Jack");
	cout << "Player name is " << player1.getName();
	Player player2;
	player2.setName("Jill");
	cout << "The second players name is " << player2.getName();
	return 0;
}
