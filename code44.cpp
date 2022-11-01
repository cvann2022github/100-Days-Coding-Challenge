
#include<iostream>
using namespace std;
class Student
{
	private :
		char name[30];
		int rollNo;
		int total;
		float perc;
	public:
		void getDetails(void);
		void putDetails(void);
};
void Student:: getDetails(void)
{
	cout<<"Enter name:";
	cin>>name;
	cout<<"Enter Roll number:";
	cin>>rollNo;
	cout<<"Enter total:";
	cin>>total;
	perc=(float)total/500*100;
}
void Student:: putDetails(void)
{
	cout<<"Student Details";	
	cout<<"name<<name<<"roll number"<<rollNo<<"total"<<total<<"percentage"<<perc;
}	
int main()
{
	Student std;
	std.getDetails();
	std.putDetails();
	return 0;
}
