
#include <iostream>
 using namespace std;
  typedef char bit;

  bit jk(bit J,bit K,bit Q)
  {
 
 return J&~(Q)|Q&~(K);
  
   }

  
int main()
{
 int i,j,k,a,res=0;
 char b;
 cout<<"1.Truth Table of JK flip flop\n";
 cout<<"2.I/O operation\n";
 cout<<"Enter your choice: ";
 cin>>a;
 switch(a) 
  {
  case 1:
  cout<<"J  K  Q(t) | Q(t+1)"<<endl;
  for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
    for(k=0;k<2;k++)
    {
    res=jk(i,j,k);
   cout<<i<<"  "<<j<<"  "<<k<<"  ";
   cout<<"  | "<<res<<endl;
    }
   }
  }
 break;
  
 case 2:
  int j,k,l;
 cout<<"Enter the value of J,K & Q(t):";
 cin>>j>>k>>l;
 
  res=jk(j,k,l);
  
  cout<<"Q(t+1)= "<<res<<"\n\n";
  break;
  default:
  cout<<"invalid input";   
         
  }
  cout<<"do you want to continue(Y/N): ";
  cin>>b;
  if(b=='Y'||b=='y')
    {
     main();
 }
 else{
  return 0;
    }
}  
