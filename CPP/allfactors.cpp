#include <bits/stdc++.h>
#define ll long long

using namespace std;


vector<ll> allFactors(ll n) {
    vector<ll> factors;
    if(n == 1) {
        factors.push_back(1);
        return factors;
    }
    for(ll i=1 ; i*i<=n ; i++) {
        if(n % i == 0) {
            factors.push_back(i);
            if(i != n/i) factors.push_back(n/i);
        }
    }
    return factors;
}

int main() {
    
    ll n;
    cin >> n;

    vector<ll> factors = allFactors(n);
    for(int i=0 ; i<factors.size() ; i++) {
        cout << factors[i] << " ";
    }
    cout << endl;

}