#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t, n, m;
    // vector<std::vector<int>> allArrays;


    cin >> t; // input banyak seleksi
    cout << endl;

    cin >> n; // input peserta
    cin >> m; // input siswa yang dapat lulus
    cout << endl;

// p001 bisa dijadikan auto increment

    string nama_peserta;

    for(int i = 0; i < t; i++){

        cin >> nama_peserta;
        for (int j = 0; j < 3; j++){ // input angka ke setiap array
            cin >> arr[j];
        }

        allArrays.push_back(arr);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < allArrays[i].size(); j++){
            cout << allArrays[i][j] << " " << endl;
        }
    }

    // cout << t << n << m;
    return 0;
}