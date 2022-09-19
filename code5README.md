
#include<iostream>

#include<math.h>

#include<string>

using namespace std;
void hex(int num) {
  int i, temp = 0, hexa[20], rem;
  cout << "Hexadecimal eqivalent ";
  for (i = 0; num > 0; i++) {
    for (int y = 0; y < 4; y++) {
      rem = num % 10;
      num /= 10;
      temp += rem * pow(2, y);
    }
    hexa[i] = temp;
    temp = 0;
  }
  while (i > 0) {
    i--;
    if (hexa[i] > 9)
      cout << char(55 + hexa[i]);
    else
      cout << hexa[i];
  }
}
void oct(int n) {
  int a[20], i;
  for (i = 0; n != 0; i++) {
    a[i] = n % 8;
    n = n / 8;
  }
  for (int y = i - 1; y >= 0; y--)
    cout << a[y];
}
void hexn(int num) {
  int hexa[20], i;
  for (i = 0; num > 0; i++) {
    hexa[i] = num % 16;
    num /= 16;
  }
  while (i > 0) {
    i--;
    if (hexa[i] > 9)
      cout << char(55 + hexa[i]);
    else
      cout << hexa[i];
  }
}
void bin(int num) {
  int binary = 0, rem, temp = 1, z = 1;
  cout << "Binary equivalent = ";
  while (num > 0) {
    temp = num % 10;
    num /= 10;
    for (int y = 0; y < 3; y++) {
      rem = temp % 2;
      temp /= 2;
      binary += rem * z;
      z *= 10;
    }
  }
  cout << binary;
}

int main() {
  char input;
  while (1) {
    cout<<"\t\t\t\t\t\t Number system conversion \t\t\t\t\t\t";
    cout << ("\nEnter the input character and q to quit.\n  1. binary to hexadecimal\n  2. decimal to octal\n  3. decimal to hexadecimal\n  4. octal to binary\n ");
    cin >> input;

    switch (input) {
    case 'q':
      cout << ("Quitting the program...");
      goto end;
      break;

    case '1':
      int num;
      cout << "Enter the number in binary ";
      cin >> num;
      hex(num);
      break;

    case '2':
      int n;
      cout << "Enter number : ";
      cin >> n;
      cout << "Octal equivalent : ";
      oct(n);
      break;
    case '3':
      int numb;
      cout << "Enter number : ";
      cin >> numb;
      cout << "Hexadecimal equivalent : ";
      hexn(numb);
      break;
    case '4':
      int number;
      cout << "Enter the number in octal ";
      cin >> number;
      bin(number);
      break;
    default:
      cout << ("In default now");
      break;
    }
  }
  end:

    return 0;
}
