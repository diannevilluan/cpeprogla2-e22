#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int main(){
	int y, total;

	ifstream read("input.txt");
	read>>y;
	cout<<y<<endl;
		for(int z=0; z<y; z++){
			if(z % 3 == 0||z % 5 == 0){
				total += z;
			}
		}
	
	cout << total;
	return 0;
}

