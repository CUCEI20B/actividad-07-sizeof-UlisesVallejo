#include <iostream>

using namespace std;

int main() {
    string a;
    cin >> a;
    if(a == "int")
        cout << sizeof(int);
    else if(a == "char")
        cout << sizeof(char);
    else if(a == "short")
        cout << sizeof(short);
    else if(a == "float")
        cout << sizeof(float);
    else if(a == "double")
        cout << sizeof(double);
    else if(a == "long")
        cout << sizeof(long);

    return 0;
}