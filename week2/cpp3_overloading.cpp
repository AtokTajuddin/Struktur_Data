//Overloading secara umum terdapat 2 jenis yakni overloading fungsi dan overloading operator 
/*
Contoh dari overloading fungsi 
int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

*/
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

inline void printIntger(const int& num){
cout<<num<<endl;
}

void printInteger(const double& num){
    cout<<"Ini tipe data double : "<<num<<endl;
    cout<<typeid(num).name()<<endl;
}
int main(){
    printInteger(100);
    printIntger(12);
    return 0;
}

// void asking (string &message){
//     cout<<"Masukkan pesan anda : ";
//     getline(cin,message);
//     cout<<"Pesan anda ialah : "<<message;
// }
