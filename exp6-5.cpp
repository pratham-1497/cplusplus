#include <iostream>
using namespace std;

class Counter {
public:
    static int count;

    Counter() {
        count++;
    }

    static void showCount() {
        cout << "Total Objects Created: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2, c3, c4;

    Counter::showCount();  // called without object

    return 0;
}