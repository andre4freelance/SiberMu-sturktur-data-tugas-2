#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char asal[100];
    char hasil[100];
    
    cout << "Masukan kalimat : "; 
    cin.getline(asal, 100);
    strcpy(hasil, asal);
    
    cout << endl;
    cout << "Kalimat asal : " << asal << endl;
    cout << "Kalimat hasil : " << hasil << endl;
    
    return 0; 
}