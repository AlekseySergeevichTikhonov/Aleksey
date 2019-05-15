#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char *value;
    int len;
public:
        String():value(new char[1] {}),len(0) {
    }
    String(const char* s) {
        len = strlen(s);
        value = new char[len + 1];
        strcpy(value, s);
    }
    String(const String &copy) {
        len = copy.len;
        value = new char[len + 1];
        strcpy(value, copy.value);
    }
    ~String() {
        delete[] value;
    }
    String operator + (const String& right) {
        char *s = new char[len + right.len + 1];
        String result(strcat(strcpy(s, value), right.value));
        delete[] s;
        return result;
    }
    String& operator = (const String& right) {
        len = right.len;
        delete[] value;
        value = new char[len + 1];
        strcpy(value, right.value);
        return *this;
    }
    friend istream& operator >> (istream& stream, String& orig);
    friend ostream& operator << (ostream& stream, const String& orig);
};

istream& operator >> (istream& stream, String& orig)
{
    stream >> orig.value;
    return stream;
}

ostream& operator << (ostream& stream, const String& orig)
{
    stream << orig.value;
    return stream;
}


int main()
{
    String string1 , string2 , S;
    cin >> string1;
    cin >> string2;
    S = string1 + string2;
    cout<< S <<endl;
    return 0;
}
