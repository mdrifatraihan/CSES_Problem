// https://cses.fi/problemset/task/1069

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 1,mx = 0;
    for(int i=0; s[i]; i++) {
        if(s[i] == s[i+1]) {
            count++;
        } else {
            mx = max(count,mx);
            count = 1;
        }
    }

    cout << mx << endl;
}