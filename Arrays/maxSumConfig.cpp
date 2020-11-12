#include <bits/stdc++.h>
using namespace std;

int max_sum(int A[], int N)
{
    int currSum = 0;
    int comSum=0;
    for (int i = 0; i < N; i++) comSum += A[i];
    for (int i = 0; i < N; i++) currSum += i*A[i];
    int nextSum=0;
    int res = currSum;
    for (int i = 1; i < N; i++)
    {
        nextSum = currSum - (comSum - A[i-1]) + A[i-1]*(N-1);
        currSum = nextSum;
        res = max(res,nextSum);
    }
    return res;
}

int main()
{
    int n;
    cout<<"Enter Size:"<<endl;
    cin>>n;
    cout<<"Enter Elements:"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    cout<<"Max Sum is: "<<max_sum(arr, 4);
    return 0;
}