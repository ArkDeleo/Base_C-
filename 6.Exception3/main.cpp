#include <iostream>

using namespace std;

class MyException :public exception
{
public:
private:
};

void Foo(int value)
{
    if (value < 0)
    {
        throw exception();
    }

    if (value == 1)
    {
        throw MyException();
    }
}

int main() {
    try
    {
        Foo(1);
    }
    catch (exception & thr)
    {
        cout << "Блок 1 помали " << thr.what() << endl;
    }
    return 0;
}
