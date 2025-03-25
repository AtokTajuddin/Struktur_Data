#include <iostream>
using namespace std;

class Animal{
    public:
    bool alive = true;
    void eat(){
        cout<<"This animal is eating\n";
    }
    virtual void pet(){
        cout<<"Sound of animal";
    }

};

class Dog : public Animal{
    public:
    void pet() override{
        cout<<"Goof,goof";
    }
};

int main(){
Dog dog;
cout<<"Is the dogo alive ? : " <<dog.alive<<endl;
dog.eat();
dog.pet();
return 0;

}

//Perlu di ingat bahwa sifat dari class jika privilege tidak didefinisikan maka akan secara otomatis bawaan default akan di atur pada private