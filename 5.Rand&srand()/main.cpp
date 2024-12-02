#include <iostream>
#include <cstdlib> // Библиотека для rand() & srand()
#include <time.h> // Библиотека времени нужна для создания "настоящего" рандома

// Что бы рандом был относительно рандомным, нужно подключить библиотеку времени
// Затем, сначала воспользоваться функцие srand(), затем rand() и потом только использовать значения.

using namespace std;

int main() {
    srand(time(NULL)); // Таким образом функция srand получает текущее системное время
    int randomDigits[3] = {};

    for(int i = 0; i <3; i++)
    {
        randomDigits[i] = rand(); // запись случайного числа, которое вернет rand()
        cout << randomDigits[i] << endl;
    }

    return 0;

// Функция rand & srand генерируют число в диапазоне от 0 до 32767;
// Есть возможность сделать генирацию любого числа, нужно использовать математические формулы:
//  randomDigits[i] = rand() % 7; // 0 ... 6
//  randomDigits1[i] = 1 + rand() % 7 //  1 ... 7
//  randomDigits2[i] = 200 + rand() % 101 // 200 ... 300
//  randomDigits3[i] = rand() % 41 - 20 // -20 ... 20
//  randomDigits4[i] = 0.01 * (rand() % 101) // 0.01 ... 1
}
