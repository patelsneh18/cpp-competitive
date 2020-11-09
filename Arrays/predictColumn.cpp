#include <bits/stdc++.h>
using namespace std;
int M[3][3] = {{1,1,0},{1,1,0},{1,1,0}};
int columnFinder(int m){
        int lastCnt = 0;
        int coulmn = 0;
        for ( int i = 0 ; i < m; i++ ){
            int count = 0;
            for(int j = 0; j < m; j++){
                if(M[j][i] == 0){
                    count++;
                }
            }
            if(lastCnt < count){
                lastCnt = count;
                coulmn = i;
            }

        }

        return coulmn;
    }

int main() {

    cout<<columnFinder(3);
    return 0;
}
