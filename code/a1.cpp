#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, m, x;
    cin >> n >> m >> x;

    vector<ll> in(n);
    for(int i = 0; i < n; i++) {
        cin >> in[i];
    }

    bool ada = false;
    vector<char> op(n);
    for(int i = 0; i < n-1; i++) {
        cin >> op[i];
        if(op[i] == '?') {
            ada = true;
            break;
        };
    }

    if (!ada) {
        ll hasil = in[0];
        for (int i = 1; i < n; i++) {
            ll left = in[i];
            switch(op[i]) {
                case '+': {
                    hasil += left;
                    break;
                }
                case '*': {
                    hasil *= left;
                    break;
                }
            }
        }

        if(hasil % m == x) {
            cout << "YA\n";
            for(int i = 0; i < n-1; i++) {
                cout << op[i] << " ";
            }
        } else {
            cout << "TIDAK";
        }
        return 0;
    }

    ll hasil = in[0];
    for (int i = 1; i < n; i++) {
        hasil += in[i];
    }

    if(hasil % m == x) {
        cout << "YA\n";
        for(int i = 1; i < n-1; i++) {
            cout << "+ ";
        }
    } else {
        hasil = in[0];
        
        for (int i = 1; i < n; i++) {
            ll left = in[i];
            switch(op[i-1]) {
                case '+': {
                    hasil += left;
                    break;
                }
                default: {
                    hasil *= left;
                    break;
                }
            }
            cout << hasil << "\n";
        }

        if(hasil % m == x) {
            cout << "YA\n";
            for(int i = 1; i < n-1; i++) {
                cout << "+ ";
            }
        } else {
            cout << "TIDAK";
        }
    }
 }