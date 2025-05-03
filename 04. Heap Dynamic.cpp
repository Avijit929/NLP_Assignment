#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec; // dynamic resizing

    for (int i = 0; i < 5; ++i) {
        vec.push_back(i * 3);
    }

    vec.push_back(100); // resizing
    vec.erase(vec.begin() + 2); // remove element dynamically

    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}
