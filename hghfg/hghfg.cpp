#include <iostream>
using namespace std;

void fb(int f) {
    int f0 = 0;
    int f1 = 1;
    for (int i = 0; i < f; i++) {
        cout << f0 << "";
        f1 += f0;
        f0 = f1 - f0;
    }
}

int main()
{
    int f;
    cout << "ile wyrazów wypisać:";
    cin >> f;
    fb(f);
}

