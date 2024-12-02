#include <iostream>

using namespace std;

int main() {
    int variable = 1;
    int a = 0;

    a = ++variable + 1 +  ++variable * 2;

    cout << "a = " << a << endl;
    return 0;
}
