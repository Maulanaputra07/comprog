#include <bits/stdc++.h>
#define thoughtcrime ios_base::sync_with_stdio(0);cin.tie(0);
#define pb push_back

using namespace std;

const int N = 1e6 + 1;
    vector<bool> is_prime(N);
    vector<int> angka_prima(N);


void sieve() {
    fill(is_prime.begin(), is_prime.end() + N, true);
    is_prime[0] = is_prime[1] = false; 
    for (int i = 2; i * i < N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < N; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    thoughtcrime
    int n, k; cin >> n >> k;

    sieve();
    for (int i = k; i < 100; i++) {
        if (is_prime[k]) {
            angka_prima.pb(is_prime[k]);
        }
    }

    return 0;
}