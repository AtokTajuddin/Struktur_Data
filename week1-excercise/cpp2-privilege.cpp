#include <iostream>
using namespace std;

class Mahasiswa {
  private:
  string Name;
  public:
  void cetakNama(string &nama){
    Name = nama;
    cout<<"Masukkan nama : " ;
    getline(cin,nama);
    cout<<nama<<endl;
  }
};

int main() {
    Mahasiswa mhs1;
    string namaUser;
    mhs1.cetakNama(namaUser);
    
  return 0;
}