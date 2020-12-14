#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
///
// Not functioning right now.
///

using namespace std;

int NumberGen(int min, int max);

int main()
{
	int loops = 0;
	int vectorSize = 5;
	bool sorted = false;
	
	srand(time(0));

	vector<int> points(vectorSize+1);
	for (int i = 0; i < points.size() ; ++i)
	{
		
		points[i] = NumberGen(0, 100);
		cout << points[i] << endl;
	
	}
	cout << endl << endl;
	//sorting 
	do 
	{

		for (int i = 0; i < (points.size()-1); ++i)
		{
			if( points[i] > points[i+1])//moves the number to the end it it is bigger to 
			{
				points.push_back(points[i]);
				points.erase(points.begin() + i);
				
			}
			else if (i >= points.size())
			{
				sorted = true;
			}
			else
			{

			}
			loops++;
			cout << points[i] << endl;
		}
		cout<<endl  << endl;
		
	} while (sorted == false);
	
	cout << "The algorithm iterated " << loops << " times." << endl;
	for (int i = 0; i < points.size(); ++i)
	{
		cout << points[i] << endl;
		}
	return 0;
}

int NumberGen(int min, int max)
{
	int numOut;
	//srand(time(0));
	numOut = ((rand() % (max - min + 1)) + min);
	return numOut;
}