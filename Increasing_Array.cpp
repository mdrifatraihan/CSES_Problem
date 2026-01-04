// http://cses.fi/problemset/task/1094/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;

    ll ar[n];
    for(int i=0; i<n; i++) {
        cin >> ar[i];
    }

    ll ans = 0;
    for(int i=0; i<n-1; i++) {
        if(ar[i] > ar[i+1]) {
            ans += (ar[i] - ar[i+1]);
            ar[i+1] = ar[i];
        }
    }

    cout << ans << endl;
}