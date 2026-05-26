#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Vvedite chislo: ";
    cin >> a;
    
    // Проверка значения переменной a и вывод соответствующего сообщения
    // Условная конструкция if-else if-else последовательно проверяет:
    // сначала - положительное ли число, затем - отрицательное, и если ни то, ни другое - значит ноль
    if (a > 0) {
        cout << "Chislo polozhitelnoe" << endl;
    } else if (a < 0) {
        cout << "Chislo otricatelnoe" << endl;
    } else {
        cout << "Eto nol" << endl;
    }
    
    return 0;
}