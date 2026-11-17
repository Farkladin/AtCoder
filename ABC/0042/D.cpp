#include <bits/stdc++.h>

using namespace std;

using ll = long long;
ll F[200005] ={1}, iF[200005]={1};
constexpr ll mod = 1e9+7;

ll po(ll a, ll b) {
    ll ret = 1;
    while(b) {
        if(b&1) ret = ret * a %mod;
        a = a * a %mod; b>>=1;
    }
    
    return ret;
}

ll comb(ll n, ll k) {
    if(n<k)return 0;
    return F[n] * iF[k] % mod * iF[n-k] %mod;
}

int main() {
    for(int i=1; i<=200000; ++i) {
        F[i] = F[i-1] * i % mod;
        iF[i] = po(F[i], mod-2);
    }
    
    ll H, W, A, B; cin>>H>>W>>A>>B;
    
    ll ans = 0;
    for (ll i=B+1; i<=W; ++i) {
        ans = (ans + comb(i-1 + H-A-1, i-1) * comb(W-i + A-1, A-1)) %mod;
    }
    
    cout << ans << endl;
    
    return 0;
}
