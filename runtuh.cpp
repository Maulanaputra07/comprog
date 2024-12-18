#include <iostream>

using namespace std;

int main(){
    int R, C;
    int count = 0; 

    cin >> R >> C;

    int ar[R+1][C+1];

    for(int i = 1; i <= R; i++){
        for(int j = 1; j <= C; j++){
            cin >> ar[i][j];
        }
    }

    for(int i = 1; i <= R; i++){
        for(int j = 1; j <= C; j++){
            if (ar[i][j] == 1){
                count += 1;
            }else{
                count = 0;
            }
        }
        if (count == R){
            // for (int k = 1; k <= C; k++){
            //     ar[i][k] = 0;
            // }
            cout << "baris ke-" << i << " 1 semua";
            // count = 0;
        }
    }
    

    //output
    // for(int i = 0; i < R; i++){
    //     for(int j = 0; j < C; j++){
    //         cout << ar[i][j];
    //     }
    //     cout << endl;
    // }
}