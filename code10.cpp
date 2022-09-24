
// C++ program to illustrate the
// cascading operators
#include <iostream>
using namespace std;

// Height Class
class Height {
private:
	int feet, inches;

public:
	// Default Constructor
	Height()
	{
		feet = 0;
		inches = 0;
	}

	// Function to assign value to
	// the object of class Height
	void setData(int x, int y)
	{
		feet = x;
		inches = y;
	}

	// Function to print the object
	// of the class
	void showData()
	{
		cout << feet << "'" << inches;
	}

	// Function for overloading
	// of operator +
	Height operator+(Height H)
	{
		Height temp;

		// Add the feets
		temp.feet = feet + H.feet;

		// Add the inches
		temp.inches = inches + H.inches;
		return temp;
	}

	// Function to normalize the height
	// into proper terms of 1 feet
	// per 12 inches
	void normalize()
	{
		// Update the feets
		if (inches == 12 || inches > 12) {
			feet = feet + inches / 12;
		}

		// Update Inches
		inches = inches % 12;
	}
};

// Driver Code
int main()
{
	Height h1, h2, h3, h4;

	// Initialize the three heights
	h1.setData(5, 9);
	h2.setData(5, 2);
	h3.setData(6, 2);

	// Add all the heights using
	// cascading of operators
	h4 = h1 + h2 + h3;

	// Normalize the heights
	h4.normalize();

	// Print the height h4
	h4.showData();

	return 0;
}
