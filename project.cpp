#include <iostream>
#include <fstream>
#include<string>
using namespace std;
class Doctor
{
	int id;
	string spec,name;
	float sal;
	public:
		void getdata();
		void showdata();
		void getspec();
};
void Doctor::getdata()
{
	ofstream myfile;
	myfile.open("Doctor.txt");
	cout<<"Enter id name speciality salary\n";
	cin>>id>>name>>spec>>sal;
	cout<<endl;
	myfile<<id<<name<<spec<<sal;
}
int main () {
  Doctor d[10];
  ofstream myfile;
  int i;
  for(i=0;i<10;i++){
  d[i].getdata();
  }
  myfile.close();
  return 0;
}
