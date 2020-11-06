#include <bits/stdc++.h>
using namespace std;
int max_path_sum(int A[], int B[], int l1, int l2)
{
    int sum1 = 0;
    int sum2 = 0;
    int i=0;
    int j=0;
    int result = 0;
    while(i<l1&&j<l2){
        if(A[i]!=B[j]){
            sum1+=A[i++];
            sum2+=B[j++];
        }
        else if(A[i]==B[j]){
            sum1+=A[i];
            sum2+=B[j];
            result += max(sum1,sum2);
            // sum1=0;
            // sum2=0;
            // int temp = i;
            // while (i < l1 && A[i] == B[j])
            //     sum1 += A[i++];

            // while (j < l2 && A[temp] == B[j])
            //     sum2 += B[j++];

            // result += max(sum1, sum2);

            sum1 = 0, sum2 = 0;
            i++;
            j++;
        }

    }

    while(i<l1){
        sum1+=A[i++];

    }
    while(j<l2){
        sum2+=B[j++];

    }
    result+=max(sum1,sum2);
    return result;
}

int main()
{
    int arr1[] = {1 ,2, 2, 2, 3, 3, 5,5,5, 6, 6, 8, 8};
    int arr2[] = {1 ,1 ,1 ,2 ,2 ,3 ,4 ,4 ,5 ,6 ,6 ,9 ,9};
    cout<<max_path_sum(arr1,arr2,13,13)<<endl;
    cout<<max(9,9);

}