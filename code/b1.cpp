#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n; cin >> n;
    long long q; cin >> q;

    vector<int> mesin(n+1);

    for(long long i = 1; i <= n; i++) {
        cin >> mesin[i];
    }

    for(long long i = 0; i < q; i++) {
        char in; cin >> in;
        switch(in) {
            case 'P': {
                long long l, r, x;
                cin >> l >> r >> x;
                for(long long i = l; i <=r; i++) {
                    x+=mesin[i];
                    if(x < 0) x = 0;
                }

                cout << x << '\n';

                break;
            }

            case 'G': {
                long long i , a;
                cin >> i >> a;
                mesin[i] = a;

                break;
            }
        }
    }    
    return 0;
}