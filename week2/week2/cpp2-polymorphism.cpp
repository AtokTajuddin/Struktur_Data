//Contoh dari Runtime Polymorphism
#include <iostream>
using namespace std;

class AlatMusik {
public:
    virtual void play() { 
        cout << "Memainkan alat musik..." << endl;
    }
};

class Gitar : public AlatMusik {
public:
    void play() override {
        cout << "Gitar berbunyi: Jreng-jreng!" << endl;
    }
};

class Piano : public AlatMusik {
public:
    void play() override {
        cout << "Piano berbunyi: Ting-ting!" << endl;
    }
};

int main() {
    AlatMusik* alat1 = new Gitar();
    AlatMusik* alat2 = new Piano();

    alat1->play(); // Memanggil metode dari kelas Gitar
    alat2->play(); // Memanggil metode dari kelas Piano

    delete alat1;
    delete alat2;
    return 0;
}
