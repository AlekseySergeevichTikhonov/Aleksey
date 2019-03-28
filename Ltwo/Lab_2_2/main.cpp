#include <iostream>
using namespace std;
int main()
{
    int a,x;
    cout<<"Введите искомое значения: ";
    cin >> x;
    if(x != 0) {
        cout<<"Введите значения:";
        for (int i=0; ; i++) {
            cin>>a;

            if (a!=0) {
                if(a==x) {
                    cout<<"Найдено" << endl;
                    return 0;
                }
            } else {
                break ;
            }
        }
        cout << "Не найдено" << endl;
        return 0;
    }
}
