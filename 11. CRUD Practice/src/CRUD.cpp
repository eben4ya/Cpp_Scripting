#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

struct Mahasiswa{
    int pk;
    string nama;
    string NIM;
    string jurusan;
};

int pilihan();

void tampilkanPilihan(int opsi);

void checkData(fstream &data);

void tulisData(int posisi, fstream &data, Mahasiswa &inputMahasiswa);

int ambilUkuran(fstream &data);

void tambahData(fstream &data);

Mahasiswa bacaData(fstream &data, int posisi);

void tampilkanData(fstream &data);

int main()
{
    fstream data;
    checkData(data);
    int opsi = pilihan();
    tampilkanPilihan(opsi);

    return 0;
}


int pilihan(){
    int input;
    //system("cls");
    cout << "Latihan Program CRUD" << endl;
    cout << "====================" << endl;
    cout << "1. Menambahkan Data" << endl;
    cout << "2. Menampilkan Data" << endl;
    cout << "3. Mengubah Data" << endl;
    cout << "4. Menghapus Data" << endl;
    cout << "5. Selesai" << endl;
    cout << "Pilih opsi[1-5] : "; cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    return input; //masi eror kalau disi huruf atau angka pakai , (infinite loop)
}

void tampilkanPilihan(int opsi){
    fstream data;
    string lanjut;
    enum option{ CREATE = 1, READ, CHANGE, DELETE, FINISH};
    while(opsi != FINISH){ //!(opsi >= 5) --> langsung ke program selesai
        switch(opsi){
        case CREATE:
            cout << "1. Menambahkan Data" << endl;
            tambahData(data);
            break;
        case READ:
            cout << "2. Menampilkan Data" << endl;
            tampilkanData(data);
            break;
        case CHANGE:
            cout << "3. Mengubah Data" << endl;
            break;
        case DELETE: 
            cout << "4. Menghapus Data" << endl;
            break;
        default:
            cout << "Opsi tidak ditemukan" << endl;
        }

        label_continue:

        cout << "Lanjutkan (y/n) : ";
        getline(cin, lanjut);
        if(lanjut == "y" | lanjut == "Y"){
            opsi = pilihan();
        }else if(lanjut == "n" | lanjut == "N"){
            break;
        }else {
            goto label_continue;
        }
    } cout << "Program Selesai" << endl;
}

void checkData(fstream &data){
    data.open("benaya.bin", ios::out | ios::in | ios::binary);
    if(data.is_open()){
        cout << "data ditemukan" << endl;
    }else{
        cout << "data tidak ditemukan" << endl;
        data.close();
        data.open("benaya.bin", ios::trunc | ios::out | ios::in | ios::binary);
    }
}

void tulisData(int posisi, fstream &data, Mahasiswa &inputMahasiswa){
    data.seekp((posisi-1)*sizeof(Mahasiswa), ios::beg);
    data.write(reinterpret_cast<char*>(&inputMahasiswa), sizeof(Mahasiswa));
}

int ambilUkuran(fstream &data){
    int start, end;
    data.seekg(0, ios::beg);
    start = data.tellg();
    data.seekg(0, ios::end);
    end = data.tellg();
    
    return (end-start)/sizeof(Mahasiswa);
}

Mahasiswa bacaData(fstream &data, int posisi){
    Mahasiswa bacaMahasiswa;
    data.seekg((posisi-1)*sizeof(Mahasiswa), ios::beg);
    data.read(reinterpret_cast<char*>(&bacaMahasiswa), sizeof(Mahasiswa));

    return bacaMahasiswa;
}  

void tambahData(fstream &data){
    Mahasiswa inputMahasiswa, lastMahasiswa;
    int ukuran = ambilUkuran(data);
    cout << "ukuran : " << ukuran << endl;

    if(ukuran == 0){
        inputMahasiswa.pk = 1;
    }else{
        lastMahasiswa = bacaData(data, ukuran);
        inputMahasiswa.pk = lastMahasiswa.pk + 1;
    }

    cout << "Nama    : "; getline(cin, inputMahasiswa.nama);  //cin >> inputMahasiswa.nama;
    cout << "NIM     : "; getline(cin, inputMahasiswa.NIM);  //cin >> inputMahasiswa.NIM;
    cout << "Jurusan : "; getline(cin, inputMahasiswa.jurusan);  //cin >> inputMahasiswa.jurusan;

    tulisData(ukuran+1, data, inputMahasiswa);
}

void tampilkanData(fstream &data){
    int ukuran = ambilUkuran(data);
    Mahasiswa showMahasiswa;
    cout << "no.\tpk.\tnama.\tNIM.\tjurusan." << endl;
    for(int i = 1; i <= ukuran; i++){
        showMahasiswa = bacaData(data,i);
        cout << i << "\t";
        cout << showMahasiswa.pk << "\t";
        cout << showMahasiswa.nama << "\t";
        cout << showMahasiswa.NIM << "\t";
        cout << showMahasiswa.jurusan << "\t" << endl;
    }
}