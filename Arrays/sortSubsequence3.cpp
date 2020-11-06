#include <bits/stdc++.h>
using namespace std;

vector<int> find3Numbers(vector<int> arr, int N) {
    int s =0;
    vector<int> v={1};
    vector<int> vec = {-1};
    sort(arr.begin(),arr.end());
    for(int i=0; i<N; i++)
    {
        if((arr[i+1]-arr[i])>=1)
        {
            s++;
        }
        if(s==3) {
           return v;
        }
    }
    if(s!=3) return vec;
}
int main() {
    int n;
    cout<<"Enter length:"<<endl;
    cin>>n;
    cout<<"Enter elements of vector"<<endl;
    vector<int> arr;
    for (int i = 0; i < n; ++i) {
        int input;
        cin>>input;
        arr.push_back(input);
    }

    vector<int> ans = find3Numbers(arr,n);
    cout<<ans[0]<<endl;
    return 0;
}
