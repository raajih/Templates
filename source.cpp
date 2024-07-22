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

template <>
int half<int>(int var)
{
	int result = round(static_cast<float>(var) / 2);
	return result;
}

int main()
{
	
	double dNum = 7.0;
	float fNum = 5.0f;
	int iNum = 3;

	cout << "Double " << dNum << " divided by 2: " << half(dNum);
	cout << "\nFloat " << fNum << " divided by 2: " << half(fNum);
	cout << "\nInt " << iNum << " divided by 2: " << half(iNum);
	
	
	return 0;
}