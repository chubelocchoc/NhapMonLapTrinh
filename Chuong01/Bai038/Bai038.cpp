#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    float s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i * i * i * i;
    }
    cout << "Ket qua S(" << n << ") = " << s;
    return 1;
}