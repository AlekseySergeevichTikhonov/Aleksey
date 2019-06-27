#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
    int n, N;
    int iRes;
    double fRes;
    cout << "Введите N: ";
    cin >> N;
    cout << "Введите n: ";
    cin >> n;
    iRes = N / n;
    fRes = N / n;
    fRes = 1.0 * N / n;
    iRes = N / 10 * n;
    iRes = N * n / 10;
    iRes = N + 2140000000;
    iRes = N + 2150000000;
    iRes = fRes;
    iRes = iRes ^ iRes;
    return iRes;
}




