#include <iostream>
#include <string>

using namespace std;

int binary_to_decimal(string binary_str) {
    int decimal = 0;
    int base = 1;
    int len = binary_str.length();

    for (int i = len - 1; i >= 0; i--) {
        if (binary_str[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    return decimal;
}
