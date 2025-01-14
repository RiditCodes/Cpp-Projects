#include <iostream>
using namespace std;

int main() {
    int num = 10;
    string str = "Hello";

    try {
        if (typeid(num).name() != typeid(str).name()) {
            throw runtime_error("Different datatypes cannot be added together");
        } else {
            // cout << num + str;
        }
    } catch (const runtime_error& e) {
        cout<<"Error: "<<e.what();
    }
}