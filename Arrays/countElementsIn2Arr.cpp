#include <bits/stdc++.h>
using namespace std;
vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], int m, int n)
{
    vector<int> vec;
    int count = 0;
    for (int i = 0; i < m; ++i) {
        count=0;
        for (int j = 0; j < n; ++j) {
            if(arr1[i]>=arr2[j]) count++;
        }
        vec.push_back(count);
    }
    return vec;
}
int main()
{
    int m,n;
    cout<<"Size of array 1"<<endl;
    cin>>m;

    cout<<"Size of array 2"<<endl;
    cin>>n;

    cout<<"Enter elements of array 1"<<endl;
    int arr1[m];
    for (int i = 0; i < m; ++i) cin>>arr1[i];

    cout<<"Enter elements of array 2"<<endl;
    int arr2[n];
    for (int i = 0; i < n; ++i) cin>>arr2[i];

    vector<int> ans = countEleLessThanOrEqual(arr1,arr2,m,n);
    for(int x:ans) cout<<x<<" ";
    cout<<endl;
    return 0;
}