#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a = 0;
    float m[a];
    float S = 0;

    cout<<"Введите длину последовательности:";
    cin >>a;
    cout<<"Введите значения:";
    for (int i=0; i<a; i++) {
        cin>>m[i];
    }
    for (int i=0; i<a; i++) {
        if(m[i]>0){
            S=S+m[i];
        }
        else 
            if(m[i]==0){
            break;
            }
    }
cout<<"Сумма="<< S << endl;
return 0;
}
