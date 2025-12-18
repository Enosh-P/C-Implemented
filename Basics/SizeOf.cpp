#include <iostream>

using namespace std;

int main (){
    cout << "Print Size of data types: \n";
    cout << "Float: " << sizeof(float) << '\n';
    cout << "Double: " << sizeof(double) << '\n';
    cout << "Long Double: " << sizeof(long double) << '\n';

    cout << "Bool: " << sizeof(bool) << '\n';

    cout << "Char: " << sizeof(char) << '\n';
    cout << "Wchar_t: " << sizeof(wchar_t) << '\n';
    #if 0
    cout << "char8_t: " << sizeof(char8_t) << '\n'; // Only from C++ 20
    #endif
    cout << "char16_t: " << sizeof(char16_t) << '\n';
    cout << "char32_t: " << sizeof(char32_t) << '\n';

    
    cout << "Short int: " << sizeof(short int) << '\n';
    cout << "int: " << sizeof(int) << '\n';
    cout << "long int: " << sizeof(long int) << '\n';
    cout << "long long int: " << sizeof(long long int) << '\n';

    
    cout << "Signed Short int: " << sizeof(signed short int) << '\n';
    cout << "signed int: " << sizeof(signed int) << '\n';
    cout << "signed long int: " << sizeof(signed long int) << '\n';
    cout << "signed long long int: " << sizeof(signed long long int) << '\n';

    
    cout << "unSigned Short int: " << sizeof(unsigned short int) << '\n';
    cout << "unsigned int: " << sizeof(unsigned int) << '\n';
    cout << "unsigned long int: " << sizeof(unsigned long int) << '\n';
    cout << "unsigned long long int: " << sizeof(unsigned long long int) << '\n';

    cout << "nullptr_t: " << sizeof(nullptr_t) << '\n';

    cout << "void: " << sizeof(void) << '\n';

    short int x;

    x = 32767;

    cout << x << '\n';

    x = 32768;

    cout << x << '\n';

    x = 32769;

    cout << x << '\n';
}