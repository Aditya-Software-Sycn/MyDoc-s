/* MyDoc's  Copyright (C) 2024 Aditya Software Sync.
    This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
    This is free software, and you are welcome to redistribute it
    under certain conditions; type `show c' for details */
	
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "make_file.h"//untuk membuat file
#include "read_file.h" //untuk membaca file
//#include "help_file.cpp"// untuk pentunjuk pengunaan
using namespace std;

int main() {
// membersihkan layar dan memberi warna bacground biru terang
system("cls"); 
system("color 9f");	

int input,buat,baca,tutorial; //membuat variable sebagai input

//header
cout<<endl;
cout<<"========================================="<<endl;
cout<<"        WELCOME TO MYDOC'S"<<endl;
cout<<endl;
cout<<"      Aditya Software Sync.(c) 2024"<<endl;
cout<<endl;
cout<<"========================================="<<endl;
cout<<endl;

//arahan
cout<<" MEMBUAT BLANLK DOKUMENT KETIK 1"<<endl;
cout<<endl;
cout<<" MEMBACA DOKUMEN KETIK 2"<<endl;
cout<<endl;
cout<<" PETUNJUK PENGUNAAN KETIK 3"<<endl;
cout<<"----------------------------"<<endl;
cin>> input; // menerima input dari user

 //logika 
  switch (input) {
        case 1:
            makeFile(); 
            break;
        case 2:
            readFile(); 
            break;
        case 3:
            // Implement instructions functionality
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

	
}


