//
// Created by Roberto Nogueira on 03/11/16.
//

#include <iostream>
#include <array>

using namespace std;

int main(void) {

    array <int, 5> arr = {1, 2, 3, 4, 5};

    /* iterator pointing at the start of the array */
    auto itr = arr.begin();

    /* traverse complete container */
    while (itr != arr.end()) {
        cout << *itr << " ";
        ++itr;   /* increment iterator */
    }

    cout << endl;

    return 0;
}

