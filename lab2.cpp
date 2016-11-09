#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;

double getRound(double num)
{
	return round(num);
}

main()
{
	double num, result;
	cout<<"Enter a number to be round off: ";
	cin>>num;
	result = getRound(num);
	cout<<"Round off value: "<<result;
	
	return 0;
}
