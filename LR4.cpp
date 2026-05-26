#include <iostream>
using namespace std;

int main() {
    int a;
	int b; //добавил переменную B
    cout << "Vvedite chislo: ";
    cin >> a; 
    
    if (a > 0) {
        cout << "Chislo polozhitelnoe" << endl;
    } else if (a < 0) {
        cout << "Chislo otricatelnoe" << endl;
    } else {
        cout << "Eto nol" << endl;
    }
    return 0;
}