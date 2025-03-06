#include <iostream>
using namespace std;

class Data{
  private:
  int id_number;
  string Name;
  public:
  void setID(){
      cout<<"Masukkan ID anda : ";
      cin>>id_number;
      cin.ignore();
  }
  void setName(){
    cout<<"Masukkan nama anda : " ;
    getline(cin,Name);
    
  }

  string getName(){
    return Name;
  }
  int getID(){
    return id_number;
  }

};

int main() {
    Data mhs1;
    mhs1.setName();
    mhs1.setID();

    Data tendik;
    tendik.setName();
    tendik.setID();   
    cout << "Data Mahasiswa:" << endl; cout << "ID: " << mhs1.getID() << endl; cout << "Nama: " << mhs1.getName() << endl;
    cout << "Data Tendik:" << endl; cout << "ID: " << tendik.getID() << endl; cout << "Nama: " << tendik.getName() << endl;
    return 0;
}