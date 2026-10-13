#include <iostream>
using namespace std;

struct Mahasiswa{ 
    int NIM; 
    int nilai_UTS; 
    int nilai_UAS;
    };

int main(){
    Mahasiswa mhs[50];
    int i, N, Nilai;
   
    cout << "Input jumlah mahasiswa: " ;
    cin >> N;

    for(i=0; i<N; i++){

    cout << "\nMasukkan NIM: " ;
    cin >> mhs[i].NIM;

    cout << "\nMasukkan nilai UTS: ";
    cin >> mhs[i].nilai_UTS;

    cout << "\nMasukkan nilai UAS: ";
    cin >> mhs[i].nilai_UAS;
    }

    
    cout << "\nYang anda inputkan" << endl;
    for(i = 0; i<N; i++){
        Nilai = mhs[i].nilai_UTS + mhs[i].nilai_UAS;
        cout << "\nMahasiswa ke-" << i ;
        cout << "\nNIM: " << mhs[i].NIM ;
        cout << "\nNilai: " << Nilai ;
    }
}