#ifndef ANAK_H
#define ANAK_H

class anak {
public:
    //deklarasi member variabel pada class anak
    string nama;
     //membuat constructor dan destructor pada class anak
    anak(string pNama) : nama(pNama) {
        cout << "Anak \ "" << nama << "\" ada \n";
    }


};

