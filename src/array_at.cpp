//
// Created by Roberto Nogueira on 03/11/16.
//

#include <iostream>
#include <array>
#include <stdexcept>

using namespace std;

int main(void) {
    array<int, 5> arr = {10, 20, 30, 40, 50};
    size_t i;

    /* print array contents */
    for (i = 0; i < 5; ++i)
        cout << arr.at(i) << " ";
    cout << endl;

    /* generate out_of_range exception. */
    try {
        arr.at(10);
    } catch(out_of_range e) {
        cout << "out_of_range expcepiton caught for " << e.what() << endl;
    }

    return 0;
}

