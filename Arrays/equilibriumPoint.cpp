#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array"<<endl;
    for (int i = 0; i < ; ++i) {
        cin>>arr[i];
    }
    for (int i = 1; i < 5; ++i) {
        int sum1=0;
        int sum2=0;
        for (int j = 0; j <=i; ++j) {
            sum1+=arr[j];
        }
        for (int k = i; k < n; ++k) {
            sum2+=arr[k];
        }
        if(sum1==sum2) {
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}