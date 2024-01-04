#include <bits/stdc++.h>
#include <string_view>
using namespace std;

int main(){
    string s;
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        auto n = s.size();
        s += s;

        auto min_i = 0;
        auto min_s = string_view(begin(s), begin(s) + n);

        for(auto i = 1; i < n; ++ i){
            auto sv = string_view(begin(s) + i, begin(s) + n + i);
            if(sv < min_s){
                min_s = sv;
                min_i = i;
            }
        }
        cout << (min_i + 1) << '\n';
    }
    return 0;
}