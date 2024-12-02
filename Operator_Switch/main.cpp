#include <iostream>

using namespace std;

int main() {
    cout << "Введите номер пальца от 1 до 5: " ;
    bool var = true;

    do {
        int answer = 0;
        cin >> answer;

        switch (answer) {
            case 1:
                cout << "Большой палец!";
                break;

            case 2:
                cout << "Указательный палец";
                break;

            case 3:
                cout << "Средний палец";
                break;

            case 4:
                cout << "Безымянный палец";
                break;

            case 5:
                cout << "Мизинец";
                break;

            default:
                cout << "Такого пальца на рук нет" << endl;
                cout << "Введите номер пальца от 1 до 5: ";
        }
        if (answer <= 1 || answer <= 5) {
            var = false;
        }

    }while (var);

    return 0;
}
