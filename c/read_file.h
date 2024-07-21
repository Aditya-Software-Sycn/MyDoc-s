/* MyDoc's  Copyright (C) 2024 Aditya Software Sync.
    This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
    This is free software, and you are welcome to redistribute it
    under certain conditions; type `show c' for details */

#include <iostream>
#include <string>
#include <vector> // header
#include <fstream>

 using namespace std;
 
  void readFile(){
	    
		system("cls");
		system("color f0"); //menngubah warna tampilan
	  
       string filename; //menyimpan nama filebu
	   
	   cout<<"masukan nama file:"<<endl; // meminta nama file dari user
	   cin>> filename;
	   
	   filename += ".txt"; //menambah extensi file
	   
	   // membuka file
	   ifstream infile(filename);
	   string line;
	   
	   if (infile.is_open()){
		   cout<<" isi dari: "<<filename <<endl;
		   cout<<"--------------------------------------------------"<<endl;
		   while (getline(infile ,line)) {
			   cout<< line <<endl; //menampilkan isi file
		   }
		   cout<<"--------------------------------------------------"<<endl;
		   
		   infile.close(); //menutup file
		   
	   } else{
		   cout<<"GAGAL MEMBUKA FILE : "<<endl;
	   }
	   // credit
	   cout<<"Dibaca menggunakan Aditya Software Sync. (c) 2024"<<endl;
  }
		   
	   
			   
	   
	   