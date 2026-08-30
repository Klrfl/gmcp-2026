#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, k;

    cin >> n >> k;

    int max = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x > max) max = x;
    }

    if(max > k) {
        cout << "TIDAK";
    } else {
        cout << "YA";
    }
}