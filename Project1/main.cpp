#include <iostream>
using namespace std;
int Divide_and_Conquer(int length, int width) {
	if (width == 0)
		return length;
	return Divide_and_Conquer(width, length % width);
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

	int result = Divide_and_Conquer(length, width);

	cout << "Result is: " << result << " X " << result;
	return 0;
}