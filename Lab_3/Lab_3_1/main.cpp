#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"Введите число от 1 до 100:";
    int x;
    string a = "верблюд";
    string b = "верблюда";
    string c = "верблюдов";
    while(cin >> x) {
        if (x < 1 || x > 100) cout<<"Ошибка введения числа!!!"<<endl;
        else if (x % 10 == 1) cout << "В караване был " << x << " " << a << endl;
        else if (x % 10 >= 2 && x % 10 <= 4) cout << "В караване было " << x << " " << b << endl;
        else if (x % 10 >= 5 && x % 10 <= 9) cout << "В караване было " << x << " " << c << endl;
        else if (x % 10 == 0) cout << "В караване было " << x << " " << c << endl;
        else if (x == 11 || x == 12 || x == 13 || x == 14) cout << "В караване было " << x << " " << c << endl;
    } 
    return 0;
}
