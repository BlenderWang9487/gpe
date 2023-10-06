#include <bits/stdc++.h>
using namespace std;
struct FS{
map<string, FS> child;
void insert(const string& p){
    auto slash_pos = p.find('\\');
    auto& folder = child[p.substr(0, slash_pos)];
    if(slash_pos != string::npos) folder.insert(p.substr(slash_pos + 1));
}
};

void print_fs(const FS& f, int indent = 0){
    for(auto& [name, child] : f.child){
        cout << string(indent,' ') << name << '\n';
        print_fs(child, indent + 1);
    }
}

int main(){
    int n; cin >> n;
    string s;
    FS root;
    while(n--){ cin >> s; root.insert(s); }
    print_fs(root);
    return 0;
}