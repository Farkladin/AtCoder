#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N, L; cin>>N>>L;
    vector<string> vs; vs.reserve(N+3);
    
    for(int i=0; i<N; ++i) {
        vs.emplace_back();
        cin>>vs.back();
    }
    sort(vs.begin(), vs.end());
    
    for(auto &s:vs) cout << s;
    cout<<endl;
    
    return 0;
}