#include <iostream>
using namespace std;

class mahasiswa{
    private:
    int nim;
    string nama;
    public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);
    void cetak();
};

mahasiswa :: mahasiswa(){
}
mahasiswa :: mahasiswa(int iNim){
    nim = iNim; //definis hanya NIM
}
mahasiswa :: mahasiswa(int iNama){
    nama = iNama; //definisi hanya NAMA
}
mahasiswa :: mahasiswa(int iNim, string iNama){
    nim = iNim;//definisi NIM dan NAMA
    nama = iNama;
}