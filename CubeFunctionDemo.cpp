#include <iostream>
using namespace std;

template <typename T>
T Cube(T value);

int main()
{
    double input;
    cout << "Please give me a number, and I will cube it for you:" << endl;
    cin >> input;
    cout << "Cubed result: " << Cube(input) << endl;
}

template <typename T>
T Cube(T value) {
    return value * value * value;
}