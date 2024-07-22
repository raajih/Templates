//Raajih Roland
//CIS 1202.5T1
//July 22,2024
#include <iostream>
using namespace std;

template <typename T>//For double and float
T half(T var)
{
	return var / 2;
}

int main()
{
	cout << half(2.0);
	
	
	return 0;
}