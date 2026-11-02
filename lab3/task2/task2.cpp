#include <iostream>
#include <windows.h> //библиотека windows для управления параметрами консоли и её кодировками

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");   // Настраиваем консоль на ввод и вывод по-русски
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    wchar_t c; // Широкий символ (wide character)

    wcout << L"Введите символ: ";
    wcin >> c;

    // порверяет цифру
    if (c >= L'0' && c <= L'9') {
        wcout << L"Цифра" << endl;
    }
    //  Русские гласные 
    else if (c == L'а' || c == L'е' || c == L'ё' || c == L'и' || c == L'о' ||
        c == L'у' || c == L'ы' || c == L'э' || c == L'ю' || c == L'я' ||
        c == L'А' || c == L'Е' || c == L'Ё' || c == L'И' || c == L'О' ||
        c == L'У' || c == L'Ы' || c == L'Э' || c == L'Ю' || c == L'Я') {
        wcout << L"Гласная буква" << endl;
    }
    // Твёрдый и мягкий знаки
    else if (c == L'ъ' || c == L'ь' || c == L'Ъ' || c == L'Ь') {
        wcout << L"Буква без звука (ъ / ь)" << endl;
    }
    // Русские согласные буквы
    else if ((c >= L'А' && c <= L'я') || c == L'Ё' || c == L'ё') {
        wcout << L"Согласная буква" << endl;
    }
    else {
        wcout << L"Другой символ" << endl;
    }

    return 0;
}
