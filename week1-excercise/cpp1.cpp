#include <iostream>
using namespace std;

class MHS{
public :
string nama;
long int NRP;
short NRP_digit_belakang;

void printing(){
    cout<<"Nama anda adalah : "<<nama<<endl;
    cout<<"NRP anda : "<<NRP<<endl;
    cout<<"3 Digit NRP anda : "<<NRP_digit_belakang;
}
};
int main(){
MHS mhs;
cout<<"Masukkan nama : "<<endl;
cin>>mhs.nama;
cout<<"Masukkan NRP : "<<endl;
cin>>mhs.NRP;
cout<<"Masukkan 3 Digit belakang NRP : "<<endl;
cin>>mhs.NRP_digit_belakang;
mhs.printing();
return 0;
}