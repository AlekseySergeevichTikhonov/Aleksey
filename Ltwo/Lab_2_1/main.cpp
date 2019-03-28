#include <iostream>
using namespace std;
int main(int argc, char** argv)
{   
    int r = 0;
    double S = 0;
    double m[]= {17,23,22,32,33,97,56,44,62,83};
    for (double n : m) {
        S = S + n;
        r = r + 1;
    }
    double sr = S/r;
    cout<< sr << endl;
    return 0;
}
