#include <iostream>
#include <cmath>
using namespace std;
class Square
{
private:
    double x1,x2;
    int n;
public:
    int Evaluate(double a, double b=0, double c=0);
    double GetRoot(int num);
    void PrintRoots();
};
int Square::Evaluate(double a, double b, double c)
{
    double d=b*b-4.0*a*c;
    if (d<0) n=0;
    else if (d==0) n=1;
    else n=2;
    x1=(-b+sqrt(d))/2.0/a;
    x2=(-b-sqrt(d))/2.0/a;
    return n;
}
double Square::GetRoot(int num)
{
    if (num==1 && n>0)
        return x1;
    else if (num==2 && n==2)
        return x2;
    else
        return NAN;
}
void Square::PrintRoots()
{
    if (n==0)
        cout<<"No roots";
    else {
        cout<<"Roots:\t"<<x1;
        if (n==2)
            cout<<'\t'<<x2;
        cout<<endl;
    }
}
int main()
{
    Square s;
    s.Evaluate(1,5,-10);
    s.PrintRoots();
    return 0;
}
    String string1, string2, Result;

    cout << "Введите первую строку: ";
    cin >> string1;

    cout << "Введите вторую строку: ";
    cin >> string2;

    cout << string1 << " + " << string2;
    Result = string1 + string2;
    cout << " = " << Result << endl;

    return 0;