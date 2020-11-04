#include <bits/stdc++.h>
using namespace std;

int maxLen(int A[],int n)
{
    int l=0;
    for (int i = 0; i < n; ++i) {
        int sum=0;
        for (int j = i; j < n; ++j) {
            sum+=A[j];
            if(sum==0)
            {
                int k = j-i;
                if (k>=l) l = k;
            }
        }
    }
    if(l==0) return l;
    else return l+1;
}
int main() {
    cout << "Enter Size" << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << maxLen(arr, n);
}