#include <iostream>

using namespace std;

int main() {
    int A, B, C; cin>>A>>B>>C;
    if (A>B) swap(A,B);
    if (B>C) swap(B,C);
    if (A>B) swap(A,B);
    if (A==5 && B==5 && C==7) {
        cout<<"YES\n";
    }else cout<<"NO\n";
    
    return 0;
}
