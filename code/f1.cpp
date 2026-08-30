#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<pair<ll, ll>> tiang(n);

    for(int i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        auto new_pair = make_pair(x, y);
        tiang.push_back(new_pair);
    }

    vector<ll> k_tiang;
    for(int i = 0; i < n; i++) {
        if (i == 0) {
            k_tiang[i] = min(tiang[i].first, tiang[i].second);
            continue;
        }

        ll first_d = abs(tiang[i].first - k_tiang[i-1]);
        ll sec_d = abs(tiang[i].second - k_tiang[i-1]);
        k_tiang[i] = max(first_d, sec_d);
    }

    int min = 0;
    for(const int angka: k_tiang) {
        if (angka < min) min = angka;
    }

    cout << min;
}