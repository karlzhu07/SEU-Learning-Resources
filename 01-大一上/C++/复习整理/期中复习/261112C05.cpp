//
// Created by Karl Zhu on 2026/11/12.
//
#include <iostream>

using namespace std;
int main()
{
    int n, d=0, a=1;

    cin>>n;
    do
    {
        d++;
        a*=10;
    }while (n/a!=0);
    cout<<d;
    int sum=0, item;
    a=10;
    for (int i=0;i<d;i++)
    {
        item=n%a;
        sum+=item;
        item=item%10;
        a=a*10;
    }
    return 0;
}