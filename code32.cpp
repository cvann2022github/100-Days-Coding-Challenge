
#include <iostream>
#include <cmath>
using namespace std;
string Powers_of_Two(int n) {

	for (int x = 0; x < INT_MAX; x++)
	{
		if (pow(2, x) == n)
		{
			return "True";
		}
		else if (pow(2, x) > n)
		{
			break;
		}
	}

	return "False";
}
int main() {
	cout << "Is 8 is power of 2: " << Powers_of_Two(8) << endl;
	cout << "Is 256 is power of 2: " << Powers_of_Two(256) << endl;
	cout << "Is 124 is power of 2: " << Powers_of_Two(124) << endl;
	return 0;
}
