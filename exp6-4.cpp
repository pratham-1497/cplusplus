#include <iostream>
using namespace std;

class Example {
public:
    static int data;

    static void display() {
        cout << "Static Data = " << data << endl;
    }
};

int Example::data = 100;

int main() {
    Example::display();  // called using class name
    return 0;
}