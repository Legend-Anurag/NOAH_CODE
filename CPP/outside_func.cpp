#include <iostream>
using namespace std;

class student
{
  private:
    string name;
    int  rollNo;
    float math;
    float english;
    float physics;
    float avg;
    float perc;
  public:
    void getDetails(void);
    void putDetails(void);
};

void student::getDetails(void){
  cout << "Enter name: " ;
  cin >> name;
  cout << "Enter roll number: ";
  cin >> rollNo;
  cout << "Enter maths marks: ";
  cin >> math;
  cout << "Enter english marks: ";
  cin >> english;
  cout << "Enter physics marks: ";
  cin >> physics;
  perc=((math+english+physics)/300)*100;
  avg=(math+english+physics)/3;
}
 
void student::putDetails(void){
  cout << "Student details:\n";
  cout << "Name:"<< name << " , Roll Number:" << rollNo << " , Average:" << avg << ", Percentage:" << perc<<endl;
}

int main()
{
  int n,i;
  cout << "Enter total number of students: ";
  cin >> n;
  student stud[n];
   
  for(i=0;i< n; i++){
    cout<<"---------------------------------------------------"<<endl;
    cout << "Enter details of student " << i+1 << ":\n";
    stud[i].getDetails();
  }
  cout << endl;
  for(i=0;i< n; i++){
    cout<<"---------------------------------------------------"<<endl;
    cout << "Details of student " << (i+1) << ":\n";
    stud[i].putDetails();
  }
  return 0;

}