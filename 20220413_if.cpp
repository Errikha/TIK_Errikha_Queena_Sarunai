#include <iostream>
using namespace std;

int main(){
    /*
    Tidak boleh > 100 
    Tidak boleh < 0 
    Jika nilai >= 90 Lulus sangat memuaskan
    Jika nilai >= 80 Lulus memuaskan
    Jika nilai >= 75 Cukup
    < 75 tidak lulus
    */
    int nilai;
    cout<<"Masukkan Nilai = "; cin>>nilai;
    if (nilai > 100 || nilai <0) {
        cout<<"Diluar jangkauan";
    }
    else if (nilai >= 90) {
        cout<<"Lulus sangat memuaskan";
    }
    else if (nilai >= 80) {
        cout<<"Lulus memuaskan";
    }
    else if (nilai >= 75) {
        cout<<"Cukup";
    }
    else {
        cout<<"Tidak lulus";
    }
    
    
    
    return 0;
}//end of function
