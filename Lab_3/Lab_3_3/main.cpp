#include <iostream>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
    string x = "deb http://mirror.mephi.ru/debian/ stretch main contrib non-free\ndeb-src http://mirror.mephi.ru/debian/ stretch main contrib non-free\ndeb http://security.debian.org/ stretch/updates main contrib non-free\ndeb-src http://security.debian.org/ stretch/updates main contrib non-free\ndeb http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\ndeb-src http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\ndeb http://mirror.mephi.ru/debian stretch-backports main contrib non-free\ndeb-src http://mirror.mephi.ru/debian stretch-backports main contrib non-free";
    int a = 0; 
    int b = 0;
    int c = 0;
    int d = 0;
    for (int i = 0; i < x.length(); i++) {
        if (x[i] == ' ' || x[i] == '\n')
            continue;
        a= a+1;
        if (x[i] >= '0' && x[i] <= '9')
            b= b+1;
        else if ((x[i] >= 'a' && x[i] <= 'z') || (x[i] >= 'A' && x[i] <= 'Z'))
            c= c+1;
        else
            d= d+1;
    }
    cout << "Всего символов: " << a << endl;
    cout << "Чисел: " << b << endl;
    cout << "Букв: " << c << endl;
    cout << "Других символов: " << d << endl;
    return 0;
}
