//
// Created by Roberto Nogueira on 03/11/16.
//

#include <iostream>
#include <array>

using namespace std;

int main(void) {

    array<int, 5> arr = {1, 2, 3, 4, 5};
    auto it = arr.cbegin();

    /* iterate whole array */
    while (it < arr.end()) {
        cout << *it << " ";
        ++it;
    }

    cout << endl;

    return 0;
}

