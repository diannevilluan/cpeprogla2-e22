#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <ctime>
using namespace std;

void problem2(){
	int num[20];   
	srand((unsigned)time(NULL));
	for (int x=0; x<20; x++){
		num[x] = x;
	}
		for (int x=0; x<(20-1); x++){
			int y = x + (rand() % (20-x));
			int temp = num[x];
			num[x] = num[y];
			num[y] = temp;
		}
		cout<<"The 10 unique numbers are: ";
		for (int z=0; z<10; z++){
			cout<<"  "<<num[z];
		}
}

main(){
	problem2();
	
	return 0;
}
