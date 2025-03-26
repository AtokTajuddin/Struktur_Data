/*
Ordered map
Hashmap : struktur data yang menyimpan pasangan key-value menggunakan fungsi hash untuk mengakses nilai secara efisien

*/
#include <iostream>
#include <map>
using namespace std;

int main(){

map<int,string>siswa;
siswa[202401]= "Lorem";
siswa[202402]= "Ipsum";
cout<<"NIM 202401 " <<siswa[202401]<<endl;

cout<<"Daftar urutan : \n";

for (const auto& sort : siswa){
    cout<<sort.first<<":"<<sort.second<<"\n"<<endl;
}
return 0;
}
