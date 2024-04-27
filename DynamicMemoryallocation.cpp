#include<iostream>
#include<String>
using namespace std;
int main(){
//dynamically allocated string
string* studentname=  new string;

//dynamically allocated integer
int* studentAge=new int;
//prompt user to enter studentname and studentage

cout<<"enter the student name"<<endl;
cin>> *studentname;
cout<<"enter the studentAge name"<<endl;
cin>> *studentAge;
//output the values of the integer and string
cout<<"The value of dynamically allocated string is"<<*studentname<<endl;
cout<<"The value of dynamically allocated integer is"<<*studentAge<<endl;
//Deallocate the memory
delete studentname;
delete studentAge;

return 0;
}
