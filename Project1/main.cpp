#include <iostream>
using namespace std;
int divide_and_conquer(int length, int width) {
	if (width == 0)
		return length;
	return divide_and_conquer(width, length % width);
}

int main() {
	int length , width ;

	cout << "Input length: ";
	cin >> length;

	while (length <= 0) {
		cout << "Invalid data. Try again." << endl;
		cin >> length;
	}


	cout << "Input width: ";
	cin >> width;

	while (width <= 0) {
		cout << "Invalid data. Try again." << endl;
		cin >> width;
	}

	while (width <= 0 || width > length) {
		cout << "Invalid data. Try again. Width must be less than length." << endl;
		cin >> width;
	}

	int result = divide_and_conquer(length, width);

	cout << "Result is: " << result << " X " << result;
	return 0;
}