#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a = 0;
    float m[a];
    float S = 0;

    cout<<"Введите количество элементов в массиве:";
    cin >>a;
    cout<<"Введите элементы массива:";
    for (int i=0; i<a; i++) {
        cin>>m[i];
    }
    for (int i=0; i<a; i++) {
        S = S +m[i];
    }
    cout<<"Среднее арифметическое="<< S/a << endl;
    return 0;
}
