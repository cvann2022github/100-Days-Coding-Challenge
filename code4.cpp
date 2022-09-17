
#include <iosteam>
using namespace std;

void Half_Subtractor(int A,int B){
	int Difference,Borrow;
	Difference = A ^ B;
	A = not(A);
	Borrow = A & B;
	cout<<"Difference = "<<Difference<<endl;
	cout<<"Borrow = "<<Borrow<<endl;
}
void Full_Subtractor(int X,int Y,int Zin){
	int Difference = (X ^ Y) ^ Zin;
	int X1 = not(X);
	int Z_Out = X1 & Zin | X1 & Y | Y & Zin;
	cout<<"Difference = "<<Difference<<endl;
	cout<<"B-Out = "<<Z_Out<<endl;

}
int main() {
	int A = 1;
	int B = 0;
	Half_Subtractor(A,B);
	
	int X = 1;
	int Y = 0;
	int Zin = 1;
	Full_Subtractor(X, Y, Zin);
	
	return 0;
}
