#include "bits/stdc++.h"

using namespace std;

int a[111];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int N; cin>>N;
    for (int i=1; i<=N; ++i) {
        cin >> a[i];
    }
    
    int ans = 1e9;
    for (int x=-100; x<=100; ++x) {
        int cur = 0;
        for (int i=1; i<=N; ++i) {
            cur += (x + a[i]) * (x + a[i]);
        }
        ans = min(ans, cur);
    }
    
    cout << ans << endl;
    
    return 0;
}
