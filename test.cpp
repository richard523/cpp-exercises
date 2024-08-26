#include <iostream>

using namespace std;

int main() {
    int num = 10;
    int *ptr = &num; // Pointer to num
    int &ref = num; // Reference to num

    cout << "num: " << num << endl;
    cout << "ptr: " << ptr << endl;
    cout << "*ptr: " << *ptr << endl;
    cout << "&ptr" << endl;
    cout << "ref: " << ref << endl;
    cout << "&ref: " << &ref << endl;

    *ptr = 20;
    ref = 30;

    cout << "num: " << num << endl;
    cout << "ptr: " << ptr << endl;
    cout << "*ptr: " << *ptr << endl;
    cout << "ref: " << ref << endl;
    cout << "&ref: " << &ref << endl;
    return 0;
}
/*
 *
 * SHOULD RETURN:
 * num: 10
 * ptr: [random address in memory x8e7x9s7&&%&8]
 * *ptr: 10
 * ref: 10
 * num: 30
 * ptr: [same address in memory xe87x8x982x]
 * *ptr: 20
 * ref: 30
 *
 */
