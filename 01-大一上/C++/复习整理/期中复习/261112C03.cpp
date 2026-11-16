#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int n;
    cin>>n;
    srand(unsigned(time(NULL)));
    for (int i=0; i<n;i++)
    {
        int x= rand()%(2025-1900+1-1900);
        cout<<x<<' ';
        if ((x%4==0&&x%100!=0)||(x%100==0&&x%400==0))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
