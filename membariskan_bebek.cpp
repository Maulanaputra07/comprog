#include <iostream>

using namespace std;

int main() {
    long long N;
    cin >> N;

    long long r_best = 1;
    long long c_best = N;

    // Mencari pasangan r dan c dengan menghentikan iterasi saat r * r > N
    for (long long r = 1; r * r <= N; ++r) {
        if (N % r == 0) {
            long long c = N / r;
            if (r <= c) {
                // Memeriksa apakah selisih antara r dan c lebih kecil dari pasangan terbaik saat ini
                if ((c - r) < (c_best - r_best)) {
                    r_best = r;
                    c_best = c;
                }
            }
        }
    }

    cout << r_best << " " << c_best << endl;

    return 0;
}
