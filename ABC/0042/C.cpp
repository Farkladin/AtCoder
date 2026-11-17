#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int D[10];
int main() {
    int N, K; cin>>N>>K;
    for (int i=0; i<K; ++i){
        int a; cin>>a;
        D[a]=1;
    }
    
    for (int i=N; i<= 1000'000'0; ++i) {
        int x = i, flag =1;
        while(x) {
            flag &= D[x%10]^1;
            x/=10;
        }
        if (flag) {
            cout<<i<<"\n";
            break;
        }
    }
    
    return 0;
}
