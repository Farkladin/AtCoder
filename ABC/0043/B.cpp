#include "bits/stdc++.h"

using namespace std;

int main() {
    string s; cin >> s;
    deque<char>dq;
    for (auto c:s) {
        switch(c){
            case '0':
                dq.push_back('0');
                break;
            case '1':
                dq.push_back('1');
                break;
            case 'B':
                if (!dq.empty()) dq.pop_back();
                break;
            default:
                break;
        }
    }
    
    for (auto x:dq) cout << x;
    cout<<endl;
    
    return 0;
}
