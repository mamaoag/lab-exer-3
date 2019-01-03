#include <iostream>

using namespace std;

int add(int x)
{
	return x;	
}

int add(int x, int y, int z)
{
	return x+y+z;
}

int main()
{
	int x = 10, y = 20;
	
	cout << add(x);		
}
