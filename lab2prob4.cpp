#include <iostream>
#include <cmath>
using namespace std;


void call_by_value(){
	int n, result=1;
		cout<<"Get the factorial of the number: ";
		cin>>n;
			for(int x=1; x<n+1; x++) {
				if(n==0){
				cout<<" Result: 1\n";
				}
				else {	
				result=result*x;
				}
	}
		cout<<"The factorial of "<<n<<" is "<<result<<endl;
}
main() {
	call_by_value();
	
	return 0;
}
