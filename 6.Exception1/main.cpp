#include <iostream>

using namespace std;

int delenie(int n1, int n2)
{
    if(n2 == 0)
    {
        throw exception(); // По дефолту не понимает "неявные" типы данных
    }
    return n1 / n2;
};



int main() {

    try
    {
        cout << delenie(1, 0);
    }
    catch (const std::exception & thr)
    {
        cout << "Ошибка деления " << thr.what() << endl;
    }


    return 0;
}
