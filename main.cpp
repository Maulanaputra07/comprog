#include <stdio.h>
#include <iostream> //input output
#include <chrono> // time
#include <ctime> //konversi waktu(time_t) menjadi string


using namespace std; // public class

void alert(string message){ // ini adalah sebuah function 
    cout << message;
}

void log(int result){
    cout << " " << result << endl;
}

void age(int birth){
    auto date_now = std::chrono::system_clock::now(); //mendapatkan waktu
    time_t time_now = chrono::system_clock::to_time_t(date_now); 
    
    char buffer[5]; //panjang char untuk menampung tahun
    strftime(buffer, sizeof(buffer), "%Y", localtime(&time_now)); // mendapatkan format tahun
    string year = buffer;
    int tahun_sekarang = stoi(year); // merubah str menjadi int

    

    int age = tahun_sekarang - birth;
    cout << "jadi umur kamu saat ini adalah " <<  age;
}

int main(){
    // cout << "hello world" << endl;
    // cout << "Maulana putra pamungkas" << endl;
    // cout << "saya adalah siswa dari smk tunas harapan pati" << " kelas 11 " << endl;
    // alert("ini adalah sebuah function alert");

    int birth {};
    cout << "masukan tanggal lahir: ";
    cin >> birth; // ini adalah sebuah input yang akan disimpan dalam sebuah variabel birth

    age(birth);
    return 0;
}