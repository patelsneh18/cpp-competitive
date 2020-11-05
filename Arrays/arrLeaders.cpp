#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int arr[], int n){
    vector<int> vec;
    int k=0;
    int temp[n];
    for (int i = 0; i < n; ++i) {
        int s=0;
        for (int j = i+1; j < n; ++j) {
            if(arr[i]>=arr[j]) continue;
            else{
                s=1;
                break;
            }
        }
        if(s==0){
            vec.push_back(arr[i]);
            k++;
        }
        else continue;
    }
    return vec;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    vector<int> v = leaders(arr,n);
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << ' ';
    }
}
