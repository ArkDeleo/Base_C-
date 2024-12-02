#include <iostream>

using namespace std;

// Нужен блок try(попытка, проба);
// Генератор исключения - блок throw(обработать, запустить)
// Обработчик исключения, который его перехватывает - команда catch(поймать, ловить)


int main()
{
    int num1;
    int num2;
    int var = 3;

    while (var != 0)
    {
        cout << "Введите число 1: ";
        cin >> num1;
        cout << "Введите число 2: ";
        cin >> num2;


        cout << num1 + num2 << endl;
        cout << "num1 / num2 = ";

            try // тут располагаеться код, который потенциально может вызвать ошибку
            {
                if (num2 == 0)
                {
                    throw "Что бы catch поймал строку нужно поставить const char *(указатель)+название";
                    // генерировать число 999
                }
                cout << num1 / num2 << endl; // Пропускает, если не пймал в try
            }

            catch (const char *thr)  // Сюда передаеться число которое сгенерировал throw
            {

                 cout << thr << endl;
            }

        cout << num1 * num2 << endl;

        cout << "============================" << endl;

        var --;

    }

    cout << "Конец работы программы!" << endl;
    return 0;
}
