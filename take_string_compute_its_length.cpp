#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50];
    int L;
    cout << "Enter an array or string : ";
    cin>>str;
    L= strlen(str);
    cout << "Length of the string is : " << L;
    return 0;
}