#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n)
{
    int high = 0;
    int s = 0;
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i) {
        int diff = arr[i+1]-arr[i];
        if (diff==1||diff==0) s++;
        else s=0;
        high = max(high,s);
    }
    return high+1;
}

int main()
{
    int arr[84]={86, 77, 15, 93, 35, 86 ,92 ,49, 21 ,62, 27, 90,  59,  63, 26 , 40, 26 ,72, 36, 11, 68, 67, 29, 82, 30 ,62 ,23 , 67 ,35 ,29, 2, 22, 58 ,69, 67, 93 , 56, 11,  42 ,29, 73, 21, 19 ,84,  37, 98, 24 ,15 ,70 ,13 ,26, 91, 80, 56, 73 ,62 ,70, 96, 81, 5, 25, 84, 27, 36, 5 , 46 , 29, 13, 57, 24, 95, 82, 45, 14, 67, 34 , 64, 43 ,50  ,87 ,8 , 76, 78 ,88};
//    int n;
//    cout<<"Enter size: "<<endl;
//    cin>>n;
//    int arr[n];
//    for (int i = 0; i < n; ++i) cin>>arr[i];
    cout<<findLongestConseqSubseq(arr,84);
}