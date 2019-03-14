#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a = 0;
    int x;
    float m[a];
    cout<<"Введите искомое значения:";
    cin >> x;
    cout<<"Введите длину последовательности:";
    cin >>a;
    cout<<"Введите значения:";
    for (int i=0; i<abs(a); i++) {
        cin>>m[i];
    }

    for (int i=0; i<abs(a); i++) {
        if (m[i]!=0) {
            if(m[i]==x) {
                cout<<"Найдено" << endl;
                return 0;
            }
        } else {
            break;
        }
    }
    cout << "Не найдено" << endl;
    return 0;
}
