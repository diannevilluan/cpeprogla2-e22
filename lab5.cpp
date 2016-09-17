#include <iostream>
using namespace std;

struct Name{
   char lastName[30];
   char firstName[30];
};

struct Student{
   int id;
   Name name;
   double grade[3];       
};

void newLine();

int main(){
    Student stud;
   	float sum, Total;
		cout << "Enter student records: \n";
		cout << "ID: ";
			cin >> stud.id;
	newLine();
		cout << "First Name: ";
			cin.getline(stud.name.firstName, 29);
		cout << "Last Name: ";
			cin.getline(stud.name.lastName, 29);
    for(int i=1; i<4; i++){
        cout << "Grade "<< i << ": ";
        	cin >> stud.grade[i];        
    }
    
    cout << "\n\n";
    cout << "Student Record\n";
    cout << "ID: " << stud.id << endl;
	cout << "Name: Dianne Villuan \n";

    for(int i=1; i<4; i++){
		sum+=stud.grade[i];
    }
		Total= sum/3;
		cout << "Grade "<< ": " << Total << endl;  
    
    if (Total<74){
    	cout<<"Remark: Failed";
	}
	else{
		cout<<"Remark: Passed";
	}
    
    
    system("pause > 0");
    return 0;   
}
void newLine(){
    char s;
    do{cin.get(s);}while(s!='\n');     
}


