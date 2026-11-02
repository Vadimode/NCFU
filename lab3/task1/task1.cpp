#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); 

    char simvol;
    cout << "Введите символ: ";
    cin >> simvol;

    if (simvol >= '0' && simvol <= '9') {
        cout << "Цифра" << endl;
    }
    else {
        cout << "Не цифра" << endl;
    }

    return 0;
}
