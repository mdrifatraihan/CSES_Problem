// https://cses.fi/problemset/task/1070

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n < 5) {
        if(n == 1) {
            cout << 1 << endl;
            return 0;
        } else if (n == 4) {
            cout << "2 4 1 3" << endl; 
        } else {
            cout << "NO SOLUTION" << endl;
        }
    } else {
        for(int i=1; i<=n/2; i++) {
            cout << (n/2)+i << " " << i << " ";
        }

        if(n%2 == 1) {
            cout << n << endl;
        }
    }
}