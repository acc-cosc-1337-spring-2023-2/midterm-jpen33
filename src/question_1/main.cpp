
int main()
{
      string binary_str;

    while (true) {
        cout<< "Please enter an 8 digit binary string or any type any other button to exit: ";
        cin>>binary_str;

        if (binary_str.length() != 8) {
            cout << "Th is an invalid binary string length. Please enter an 8-digit binary string to start." << endl;
            continue;
        }

        bool invalid_char = false;
        for (char c : binary_str) {
            if (c != '0' && c != '1') {
                invalid_char = true;
                break;
            }
        }

        if (invalid_char) {
            cout << "There was an invalid character found in the binary string. Please enter a binary string consisting of only 0s and 1s processed the progam." << endl;
            continue;
        }

        int decimal = binary_to_decimal(binary_str);
        cout << "The decimal value of binary string is: " << decimal << endl;

    
        if (!isdigit(binary_str[0])) {
            break;
        }
    }

    return 0;
}