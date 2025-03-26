#include <iostream>
#include <string>
#include <string_view>
#include <cstdint> 
using namespace std;

static uint32_t s_AllocCount = 0;
static uint32_t s_DeallocCount = 0;

// Overloading operator new untuk melacak alokasi memori
void* operator new(size_t size) {
    s_AllocCount++;
    cout << "[Allocation] " << size << " bytes" << endl;
    return malloc(size);
}

// Overloading operator delete untuk melacak dealokasi memori
void operator delete(void* memory, size_t size) noexcept {
    s_DeallocCount++;
    cout << "[Deallocation] " << size << " bytes" << endl;
    free(memory);
}

void PrintName(const string& name) {
    cout << "Nama: " << name << endl;
}

int main() {
    cout << "Sebelum deklarasi string:\n";
    cout << "Total Allocations: " << s_AllocCount << endl;
    cout << "Total Deallocations: " << s_DeallocCount << endl << endl;

    // Alokasikan string di heap
    string* name = new string();

    cout << "Masukkan nama anda: ";
    getline(cin, *name); // Input dari user

    // Paksa alokasi heap dengan `new`
    string* firstName = new string(name->substr(0, 3));
    string* lastName = new string(name->substr(0,9));

  
    // Menampilkan hasil
    PrintName(*name);
    PrintName(*firstName); 
    PrintName(*lastName);
    //string_view lastName(name->c_str()+4,9);
    //string_view firstName(name->c_str(),3);
    cout << "\nSetelah deklarasi string:\n";
    cout << "Total Allocations: " << s_AllocCount << endl;

    // Dealokasi memori heap
    delete name;

    return 0;
}
