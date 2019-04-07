#include <iostream>
#include <ctime>
using namespace std;
void normir(double *m1, int v2)
{
    srand(time(0));
    double r;
    double x1 = 0;
    double x2 = 1;
    double n;
    double *m = new double [v2];

    for (int i = 0; i < v2; i++) {
        r = rand()%1000;
        m[i] = r/1000;
        if (m[i] > x1)
            x1 = m[i];
        if (m[i] < x2)
            x2 = m[i];
    }

    for (int i = 0; i < v2; i++) {
        n = (m[i] - x2)/(x1 - x2);
        cout << "Нормированное значение:" << n << endl;
        m[i] = n;
    }
    cout << "Значения массива:[    ";
    for (int i = 0; i < v2; i++) {
        cout << m[i] << "  "<<",  ";
    }
    cout << "]" << endl;
    delete []m;
}
int main()
{
    int v1;
    cout << "Введите количетсво элементов массива:";
    cin >> v1;
    double *a = new double [v1];
    normir(a, v1);
    delete []a;
    return 0;
}