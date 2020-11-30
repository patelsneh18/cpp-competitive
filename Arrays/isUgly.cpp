#include<bits/stdc++.h>
using namespace std;

bool isUgly(int x)
{
    while (x!=1)
    {
        if(x%2==0) x = x/2;
        else if(x%3==0) x = x/3;
        else if(x%5==0) x = x/5;
        else return false; 
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int count=1;
    int i=2;
    while (count!=n)
    {
        if(isUgly(i)) count++;
        i++;
    }
    cout<<i-1;
    return 0;
}