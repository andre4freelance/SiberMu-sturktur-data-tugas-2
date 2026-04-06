#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char nama[50] = "Andre Bastian";
    char kosong[50] = "";
    
    cout << "jumlah karakter dari nama adalah " << strlen(nama) << endl;
    cout << "jumlah karakter dari kosong adalah " << strlen(kosong) << endl;
    
    return 0;
}