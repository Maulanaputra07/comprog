#include <iostream>
#include <string>
using namespace std;

string biner(int n) {
    if (n == 0){
        return "0";
    }else if (n == 1){
        return "1";
    }

    return biner(n / 2) + ( n % 2 == 0 ? "0" : "1"); 
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << biner(512) << endl;
}
