
#include<iostream.h>
#include<stdio.h>
#include<bits/stdc++.h>
void Half_Adder(int A,int B){
    int Sum , Carry;
    Sum = A ^ B;
    Carry = A & B;
    printf("Sum = ",Sum);
    printf("Carry = ",Carry);
}
void Full_Adder(int X,int Y,int Z_In){
    int Sum , Z_Out;
    Sum = Z_In ^ (X ^Y);
    Z_Out = (X & Y) | (Y & Z_In) | (X & Z_In);
    printf("Sum = ",Sum );
    printf("C-Out = ",Z_Out);
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
