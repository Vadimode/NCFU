#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int number;
	cout << "Введите число от 1 до 5:";
	cin >> number;

	switch (number) {
	case 1:
		cout << "I" << endl;
		break;
	case 2:
		cout << "II" << endl;
		break;
	case 3:
		cout << "III" << endl;
		break;
	case 4:
		cout << "IV" << endl;
		break;
	case 5:
		cout << "V" << endl;
		break;
	default:
		cout << "Число должно быть от 1 до 5." << endl;
	}

	return 0;
}
