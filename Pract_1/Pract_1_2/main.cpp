#include <iostream>
#include <ctime>
using namespace std;
void normir(double *m, int v2)
{
    double x1 = 0;
    double x2 = 1;
    double r;
    double n;
    for (int i = 0; i < v2; i++) {
        m[i] = r/1000;
        r = rand()%1000;
        if (m[i] > x1)
            x1 = m[i];
        if (m[i] < x2)
            x2 = m[i];
    }
    for (int i = 0; i < v2; i++) {
        n = (m[i] - x2)/(x1 - x2);
        cout << "Нормированное значение: " << n << endl;
    }
}

int main()
{
    int v1;
    cout << "Введите количество элементов массива: ";
    cin >> v1;
    double *a = new double [v1];
    normir(a, v1);
    delete [] a ;
    return 0;
}
