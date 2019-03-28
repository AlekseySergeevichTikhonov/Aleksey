#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a;
    int S = 0;
    do {
        cin>>a;
        if (a>0){
            S = S + a;
        }
    } while ( a!= 0);
    cout<< S << endl;
    return 0;
}
