#include <bits/stdc++.h>
using namespace std;
void Half_Adder(int A,int B){
    int Sum , Carry;
    Sum = A ^ B;
    Carry = A & B;
    cout<<"Sum = "<< Sum << endl;
    cout<<"Carry = "<<Carry<< endl;
}
void Full_Adder(int X,int Y,int Z_In){
    int Sum , Z_Out;
    Sum = Z_In ^ (X ^Y);
    Z_Out = (X & Y) | (Y & Z_In) | (X & Z_In);
    cout<<"Sum = "<< Sum <<endl;
    cout<<"C-Out = "<< Z_Out <<endl;
  }
  
int main() {
    int A = 1;
    int B = 0;
    Half_Adder(A,B);

    int X = 1;
    int Y = 0;
    int Z_In = 0;
    Full_Adder(X, Y, Z_In);
    return 0;
}
