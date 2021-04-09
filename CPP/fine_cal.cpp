#include <iostream>
using namespace std;

struct student
{
  int roll_no;
  string name;
  float fine;
};

int main(){

	struct student stud[3];
	float tot_fine=0;
  	int i;

	for(i=0; i<3; i++){
		cout << "\nEnter details for Student " << i + 1;
		cout << "\nEnter roll no: ";
		cin >> stud[i].roll_no;
		cout << "Enter name: ";
		cin >> stud[i].name;
		cout << "Enter fine: ";
		cin >> stud[i].fine;
		tot_fine=tot_fine+stud[i].fine;
	}

	for(i=0; i<3; i++){
		cout << "\nYour entered details for Student " << i + 1 << endl;
		cout << "Roll no : " << stud[i].roll_no << endl;
		cout << "Name : " << stud[i].name << endl;
		cout << "Fine : " << stud[i].fine << endl;
	}
	
	cout<<"\nTotal fine is: "<<tot_fine;
	cout<<"\n"<<endl;
	return 0;
}