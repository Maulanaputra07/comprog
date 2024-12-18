#include <iostream>

using namespace std;


int main(){
int N, M, P;

cin >> N >> M >> P;


int matA[N+1][M+1]; //Indeks Dimulai dari 1
int matB[M+1][P+1];
int matC[N+1][P+1] = {0};

    for (int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            cin >> matA[i][j];
        }
    }

    for (int i = 1; i <= M; i++){
        for(int j = 1; j <= P; j++){
            cin >> matB[i][j];
        }
    }

        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= P; j++){
                for(int K = 1; K <= M; K++){
                    matC[i][j] += (matA[i][K] * matB[K][j]);
                };
            }
        }

        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= P; ++j) {
                cout << matC[i][j] << " ";
            }
            cout << endl;
        }

    return 0;
}