#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    int temp[n];
    cout<<"Enter elements: "<<endl;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    int k=0;
    for (int i = 0; i < n; ++i) {
        int s = 0;
        for (int j = i; j < n; ++j) {
            if (arr[i] == arr[j]) s++;
        }
        if (s == 2) {
            temp[k]=arr[i];
            k++;
        }
    }
    if(k>0){
        cout<<"Duplicates are: "<<endl;
        for (int i = 0; i < k; ++i) cout<<temp[i]<<" ";
    }
    else cout<<-1;
}

//Given an array a[] of size N which contains elements from 0 to N-1,
// you need to find all the elements occurring more than once in the given array.