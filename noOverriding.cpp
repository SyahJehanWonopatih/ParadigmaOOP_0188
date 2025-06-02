#include <iostream>
using namespace std;

class baseClass{
    public:
        virtual void perkenalan() final {
            cout << "Halo saya function dari baseClass";
        }
};

class derivedClass : public baseClass {
    public:
        void perkenalan() {
            cout << "Halo saya function dari derivedClass";
        }
};

int main() {
    derivedClass a;
    a.perkenalan();

    return 0;
}