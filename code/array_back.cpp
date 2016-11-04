#include <iostream>
#include <array>

using namespace std;

int main(void) {
    array<int, 5> arr = {1, 2, 3, 4, 5};

    /* print last element */
    cout << "Last element of array                    = " << arr.back()
    << endl;

    /* modify last element */
    arr.back() = 50;

    /* print modified array element */
    cout << "after modification last element of array = " << arr.back()
    << endl;

    return 0;
}