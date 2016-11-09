#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int arr[]={1,2,4,3};
	int j=0, i;
	int idx, idx2;
	ifstream f("input.txt");
	f >> idx >> idx2;
	
	for (i=idx; i<=idx2; i++){
		cout <<i--<<" ";
		i += arr[j%4];  
		j++;
	}
	return 0;
}
