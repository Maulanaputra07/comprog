// #include <iostream>

// using namespace std;

// int main(){
//     long long N;
//     cin >> N;

//     int divisorCount = 0;
//     for (long long i = 1; i <= N; i++){
//         if (N % i == 0){
//             divisorCount++;
//         }
//     }

//     if (divisorCount % 2 == 0){
//         cout << "Lampu mati" << endl;
//     }else {
//         cout << "Lampu menyala" << endl;
//     }
// }


# include <iostream>
# include <cmath>

using namespace std ;

int main () {
    long long N;
    cin >> N ;
    long long s = round ( sqrt (N) );

    if (s * s != N) {
        cout << " lampu mati " << endl ;
    } else {
        cout << " lampu menyala " << endl ;
    }
}
