
#include<iostream>
using namespace std;
class Student
{
	public:
	int rollNo;
	string stdName;
	float perc;
};
int main()
{
	Student std;
	std.rollNo=05;
	std.stdName="Ann";
	std.perc=98.20f;
	cout<<"Student's RollNo.:"<<std.rollNo<<"\n";
	cout<<"Student's Name:"<<std.stdName<<"\n";
	cout<<"Student's percentage:"<<std.perc<<"\n";
	return 0;
}
