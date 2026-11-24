#include <iostream>
#include <string>
using namespace std;
int main() {
    // Настройка вывода русского языка в консоли
    setlocale(LC_ALL, "Russian");
    int month;
    cout << "Введите номер месяца (1-12): ";
    cin >> month;
    // Проверка корректности ввода
    if (month < 1 || month > 12) {
        cout << "Ошибка: номер месяца должен быть от 1 до 12!" << endl;
        return 1;
    }
    string season;
    int days = 0;
    // Определяем пору года
    if (month == 12 || month == 1 || month == 2) {
        season = "Зима";
    }
    else if (month >= 3 && month <= 5) {
        season = "Весна";
    }
    else if (month >= 6 && month <= 8) {
        season = "Лето";
    }
    else {
        season = "Осень";
    }
    // Определяем количество дней в месяце (для невисокосного года)
    switch (month) {
    case 2:
        days = 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    default:
        days = 31;
        break;
    }
    cout << "Пора года: " << season << endl;
    cout << "Количество дней: " << days << endl;

    return 0;
}
