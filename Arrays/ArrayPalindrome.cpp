#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of Array"<<endl;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    int k = n-1;
    int newArr[n];
    for (int i = 0; i < n; ++i) {
        newArr[i]=arr[k];
        k--;
    }
    cout<<"PALINDROME ARRAY"<<endl;
    for (int i = 0; i < n; ++i) {
        cout<<newArr[i]<<" ";
    }
}