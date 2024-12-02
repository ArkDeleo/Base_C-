#include <iostream>

using namespace std;

int main() {

    bool var = true;

    cout << "Операция завершена." << endl;
    cout << "Вы хотите продолжить? (1 - да, 0 - нет): ";
    cin >> var;

    var == 1 ? cout << "Выберите операцию!"  :  cout << "До свидания! Не забудте карту!";

    return 0;
}
