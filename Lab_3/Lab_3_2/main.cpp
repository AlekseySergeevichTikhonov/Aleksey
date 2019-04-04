#include <iostream>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
    string x = "deb http://mirror.mephi.ru/debian/ stretch main contrib non-free\ndeb-src http://mirror.mephi.ru/debian/ stretch main contrib non-free\ndeb http://security.debian.org/ stretch/updates main contrib non-free\ndeb-src http://security.debian.org/ stretch/updates main contrib non-free\ndeb http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\ndeb-src http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\ndeb http://mirror.mephi.ru/debian stretch-backports main contrib non-free\ndeb-src http://mirror.mephi.ru/debian stretch-backports main contrib non-free";
    string a;
    string b;
    cout << "Введите слово которое хотите заменять:"<<endl;
    cin >> a;
    cout << "Введите слово на которое хотите заменять:"<<endl;
    cin >> b;
    for (int i = 0; i < x.length(); i++) {
        if (x.substr(i, a.length()) == a)
            x.replace(i, a.length(), b);
    }
    cout << x << endl;
    return 0;
}
