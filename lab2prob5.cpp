#include <iostream>
using namespace std;

int max(int x, int y){
	if (x > y)
		cout<<x;
	else
		cout<<y;
}

main() {
	double x, y;
	cout<<"Input First Number: ";
		cin>>x;
	cout<<"Input Second Number: ";
		cin>>y;
	cout<<endl<<"The Greater Number is: "<<max(x,y);
	
	return 0;	
}

