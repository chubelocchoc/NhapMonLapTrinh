#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    float s = 0;
    for (int i = 0; i <= n; i++)
    {
        s += (float)1 / (2 * i + 1);
    }
    cout << "Ket qua S(" << n << ") = " << s;
    return 1;
}