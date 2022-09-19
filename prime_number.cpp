#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,f=0;
    cin>>n;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)  
        {
            cout<<"not a prime";
            f=1;
            break;
        }
    }
    if(f==0) cout<<"prime";
}