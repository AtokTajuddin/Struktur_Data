/*
Operasi umum hashmap (ordered & unordered map)

m.insert({key, value});  // Menyisipkan
m.erase(key);            // Menghapus
m.find(key);             // Mencari elemen
m.size();                // Ukuran map
m.empty();               // Cek kosong
m.clear();               // Hapus semua elemen

*/

#include <iostream>
#include <unordered_map>
using namespace std;


int main(){
unordered_map<int,string> inventori;
inventori[1011]= "Lapotp";
inventori[1013]= "PC";
inventori[1012]= "CPU";

if (inventori.count(1013)>0){
    cout<<"Item/inventori 1013 tersedia\n";
}
for (const auto& [kode,nama]:inventori){
    cout<<kode<<":"<<nama<<"\n"<<endl;
}
cout<<"Deleting item 1012"<<endl;
inventori.erase(1012); //menghapus elemen dengan kode 1012
return 0;
}
