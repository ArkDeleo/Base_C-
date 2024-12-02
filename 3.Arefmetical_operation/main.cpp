#include <iostream>

using namespace std;
// "+" - сложение
// "-" - вычитание
// "*" - умножение
// "/" - деление (возвращает только целое число)
// "%" - деление по модулю

//  Важно:
// деление по модулю применяется только к целочисленным переменным ;
// нельзя делить по модулю на 0;

// "+="
// "-="
// "*="
// "/="
// "%="

// a += b | a = a + b; a /= b | a = a / b

float deposit = 0;
float porcent = 0;
const int day_in_year = 365;
int day_in_month = 30;
float cahback = 0;

//int a = 8%2;
//int b = 8%5;

int main() {
    cout << "Ваш депозит: " ; cin >> deposit ;
    cout << "Введите процент: "; cin >> porcent;
    cahback = deposit*(porcent/100)/day_in_year*day_in_month;
    cout << cahback << endl;

    return 0;
}
