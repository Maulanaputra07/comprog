#include <iostream>
using namespace std;

int main() {
    int N;
    int x = 0;
    

    cin >> N;

    if (1 <= N && N <= 100){
        for(int i = 0; i < N; i++){
            // cout << x;
            for(int j = 0; j <= i; j++){
                cout << x;
                if (x == 9){
                    x = 0;
                }else{
                    x +=  1;
                }
            }
            cout << endl;
        }
    }
}
