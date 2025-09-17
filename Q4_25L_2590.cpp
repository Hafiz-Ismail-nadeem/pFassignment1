#include<iostream> 
using namespace std;
int main() {
	int x, y;  // Variables to store coordinates

	// Get coordinates from user
	cout << "Enter the x coordinate : ";
	cin >> x;
	cout << "Enter the y coordinate : ";
	cin >> y;

	// Check if point is on axes or origin
	if (x == 0) {
		if (y == 0)
			cout << "Point lies on origin.";
		else
			if (y > 0) {
				cout << "The point lies on positive Y-axis.";
			}
			else
				cout << "The point lies on negative Y-axis.";
	}
	else
		if (y == 0) {
			if (x > 0) {
				cout << "The point lies on positive X-axis.";
			}
			else
				cout << "Point lies on negative X-axis.";
		}
		else {
			// Point is not on axes - determine quadrant
			int quadrant;
			if (x > 0) {
				if (y > 0) {
					quadrant = 1;  // First quadrant
				}
				else
					quadrant = 4;  // Fourth quadrant
			}
			else {
				if (y < 0) {
					quadrant = 3;  // Third quadrant
				}
				else
					quadrant = 2;  // Second quadrant
			}

			// Use switch to display quadrant information
			switch (quadrant) {
			case 1:
				cout << "(" << x << "," << y << ") lies in 1st quadrant ";
				break;
			case 2:
				cout << "(" << x << "," << y << ") lies in 2nd quadrant ";
				break;
			case 3:
				cout << "(" << x << "," << y << ") lies in 3rd quadrant ";
				break;
			case 4:
				cout << "(" << x << "," << y << ") lies in 4th quadrant ";
				break;
			}
		}
	return 0;
}