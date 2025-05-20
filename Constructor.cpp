#include <iostream>
using namespace std;

class mahasiswa{
    public:
    mahasiswa();//constructor
};

mahasiswa::mahasiswa(){
    cout <<"constructor terpanggil"<< endl;//definisi constructor
};

int main(){
    mahasiswa mhs;//pembuatan object

    return 0;
}
//Buatlah program c++ dengan class barang yang memiliki atribut: namaBarang,,kodeBarang
//Program memiliki constructor berparameter
//untuk mengisi nilai namaBarang dan kodeBarang
//serta memiliki fungsi untuk menampilkan informasi nama barang

#include <iostream>
using namespace std;

class Barang{
    private:
      string namaBarang;
      string kodeBarang;

      public:
        Barang(string nama, string kode){
           this->namaBarang = nama;
           this->kodeBarang = kode;
        }
        void output(){
            cout << "Nama Barang:" << this->namaBarang << endl;
            cout << "Kode Barang:" << this->kodeBarang << endl;
        }
};

int main(){
    Barang *a = new Barang("Laptop", 456);
    a->output();

    return 0;
}