/* MyDoc's  Copyright (C) 2024 Aditya Software Sync.
    This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
    This is free software, and you are welcome to redistribute it
    under certain conditions; type `show c' for details */
	
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

void makeFile() {
    string content; // Menyimpan konten dokumen
    string filename; // Menyimpan nama file

    system("cls");
    system("color f0"); // Mengubah warna tampilan

    cout << "Dokumen kosong" << endl;
    cout << endl;

    cout << "Masukkan konten dokumen Anda: " << endl;
    cin.ignore(); // Membersihkan buffer sebelum mengambil input
    getline(cin, content);

    cout << "Masukkan nama file yang ingin disimpan: ";
    cin >> filename;

    filename += ".txt";
   
    ofstream outfile(filename);

    if (outfile.is_open()) {
        outfile << content;
        outfile.close();

        cout << endl;
        system("cls");
        cout << filename << " berhasil dibuat!" << endl;
       cout<<"Dibuat menggunakan Aditya Software Sync. (c) 2024"<<endl;
    } else {
        cout << "Gagal membuat file " << filename << "." << endl;
    }
}