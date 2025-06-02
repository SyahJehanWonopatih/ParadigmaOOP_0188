#include <iostream>
using namespace std;

class seseorang {
    public:
        //virtual void pesan() = 0;
        virtual void pesan() {
            cout << "Pesan dari seseorang" << endl;
        }
};

class slamet :public seseorang {
    public:
        void pesan() {
            cout << "Pesan dari Slamet" << endl;
        }
};

class KapalLawud :public seseorang {
    public:
        void pesan() {
            cout << "Pesan dari Kapal Lawud" << endl;
        }
};

int main() {
    seseorang* obyek;
    slamet a;
    KapalLawud b;

    obyek = &a;
    obyek->pesan(); 
    obyek = &b;
    obyek->pesan();
    
    //a.seseorang::pesan();
    //b.seseorang::pesan();
    return 0;
}