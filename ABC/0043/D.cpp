#include "bits/stdc++.h"

using namespace std;

int cnt[256];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    string s; cin>>s;
    size_t n = s.size();
    
    if (n==2) {
        if (s[0] == s[1]) cout <<"1 2\n";
        else cout << "-1 -1\n";
        return 0;
    }
    
    ++cnt[s[0]];
    ++cnt[s[1]];
    ++cnt[s[2]];
    {
        int8_t flag = 0;
        for (int i='a'; i<='z'; ++i) {
            flag |= cnt[i]>=2;
        }
        
        if (flag) {
            cout << "1 3\n";
            return 0;
        }
    }
    
    for (size_t i = 3, j = 0; i<n; ++i,++j) {
        --cnt[s[j]];
        ++cnt[s[i]];
        int8_t flag = 0;
        for (int i='a'; i<='z'; ++i) {
            flag |= cnt[i]>=2;
        }
        if (flag) {
            cout << j+2 << " " << i+1 << "\n";
            return 0;
        }
    }
    
    cout << "-1 -1\n";
    return 0;
}
