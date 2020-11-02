#include <iostream>
using namespace std;

void sortAlgo(int A[],int N)
{
        int k = 0;
        int l = N-1;
        int temp[N];
        for(int i = 0; i<N; i++)
        {
            if(A[i]==0)
            {
                temp[k] = 0;
                k++;
            }
            else{
                temp[l]=1;
                l--;
            }
        }
        for(int i=0;i<N;i++) {
            A[i] = temp[i];
        }
}

int main()
{
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements(0s and 1s only): "<<endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sortAlgo(arr,n);
    cout<<"AFTER SORTING"<<endl;
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }

}
//Given a binary array A[] of size N. The task is to arrange the array in increasing order.
//Note: The binary array contains only 0  and 1. Time Complexity - O(N)