#include <iostream>
using namespace std;

class mahasiswa {
    public :
    mahasiswa(int nim, string nama); //constructor dengan parameter
};
//definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama){
    cout << "constructor dengan parameter terpanggil" << endl;
    cout << "NIM   : " << endl;
    cout << "Nama    : "<< endl;
}

int main(){
    mahasiswa mhs(12345, "Pascal"); //memanggil constructor dengan parameter
    return 0;
}