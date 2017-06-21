#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{

    char * c = "a\0bcd";
    string s(c);
    
    cout << s << endl; 
    cout << s.c_str() << endl; 

    const char * ps = s.c_str();
    cout << ps << endl;
}
