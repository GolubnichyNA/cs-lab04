#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
         cout << "max(A, B) = " << max(a, b) << '\n';
         cout << "min(A, B) = " << min(a, b) << '\n';
    return 0;
}
