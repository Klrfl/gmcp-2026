#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, m;


    cin >> n >> m;

    ll size = max(n, m);
    vector<ll> a(size+7);
    vector<ll> b(size+7);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    if(n == m) {
        ll sum = 0;
        for(int i = 0; i < n; i++) {
            sum += a[i] * b[i];
        }

        cout << sum;
        return 0;
    }

    vector<int> bnew;

    int d = 0;

    while(b[d] < 0) {
        d++;
    }

    for(int i=0; i<d; i++) {
        bnew.push_back(b[i]);
    }

    for(int i=0; i<n-m; i++) {
        bnew.push_back(0);
    }

    for(int i=d; i<m; i++) {
        bnew.push_back(b[i]);
    }

    ll sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i] * bnew[i];
    }

    cout << sum;
    return 0;
} 