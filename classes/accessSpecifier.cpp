#include <iostream>
#include <string>

using std::cout;
using std::string;

class A {
    public:
        A() {}
        A(int num, string n) : number(num), name(n) {} 
        int number;
        void Print() { cout << name << std::endl; }
        string name;
        
};

class B : protected A {
    public:
        void ChangeName(string newName){ name = newName; }

};

class C : public B {
    public:
        void NewChangeName(string newName){ name = newName; }
};

int main() {
    A a(3, "test");
    a.Print();
    C c;
    c.NewChangeName("some other Name");
    //c.Print();
    return 0;
}