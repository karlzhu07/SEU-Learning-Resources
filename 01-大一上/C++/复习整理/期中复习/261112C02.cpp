//C02
#include <iostream>
using namespace std;
int main()
{
    char op;
    int a, b, rst=0;
    cin >> op>>a>>b;
    if ((op=='/'||op=='%')&&b==0)
    {
        cout<<"DIV0"<<endl;
        exit(0);
    }
    switch (op)
    {
        case '+': rst=a+b; break;
        case '-': rst=a-b; break;
        case '*': rst=a*b; break;
        case '/': rst=a/b; break;
        case '%': rst=a%b; break;
        default:cout<<"INVALID"<<endl;
    }
    cout<<rst<<endl;
    return 0;
}