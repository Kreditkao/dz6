#include <iostream>
using namespace std;

namespace Namespace1 {
    class Class_1 {
    public:
        void display() {
            cout << "Namespace1::Class_1" << endl;
        }
    };

    class Class_4 {
    public:
        void display() {
            cout << "Namespace1::Class_4" << endl;
        }
    };
}

namespace Namespace2 {
    class Class_2 {
    public:
        void display() {
            cout << "Namespace2::Class_2" << endl;
        }
    };

    class Class_3 {
    public:
        void display() {
            cout << "Namespace2::Class_3" << endl;
        }
    };

    class Class_4 {
    public:
        void display() {
            cout << "Namespace2::Class_4" << endl;
        }
    };
}

int main() {
    Namespace1::Class_1 obj1;
    Namespace2::Class_4 obj2;
    Namespace2::Class_2 obj3;
    Namespace1::Class_4 obj4;

    obj1.display();
    obj2.display();
    obj3.display();
    obj4.display();

    return 0;
}
