#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    char str[100] = "Andre Bastian";
    char karakter = 'B';
    char *hasil;
    
    hasil = strchr(str, karakter);
    
    if (hasil != nullptr) {
        cout << "Hasil Peubah :" << hasil << endl; 
        cout << "Karakter " << karakter << " ditemukan pada indeks ke-" << (hasil - str) << endl;
    } else {
        cout << "Karakter " << karakter << " tidak ditemukan." << endl;
    }
    
    return 0; 
}