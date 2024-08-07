#include<iostream>
using namespace std;
class BinaryToOctal {
private:
    string binaryNumber;

    // Helper function to convert binary to decimal
    int binaryToDecimal() const {
        int decimalNumber = 0;
        int base = 1; // 2^0

        // Convert binary to decimal
        for (int i = binaryNumber.length() - 1; i >= 0; --i) {
            if (binaryNumber[i] == '1') {
                decimalNumber += base;
            }
            base *= 2;
        }
        return decimalNumber;
    }

    // Helper function to convert decimal to octal
    string decimalToOctal(int decimalNumber) const {
        if (decimalNumber == 0) return "0";

        string octalNumber;
        while (decimalNumber != 0) {
            octalNumber = to_string(decimalNumber % 8) + octalNumber;
            decimalNumber /= 8;
        }
        return octalNumber;
    }

public:
    // Constructor to initialize binary number
    BinaryToOctal(const string& binary) : binaryNumber(binary) {}

    // Function to perform conversion and display the result
    void convertAndDisplay() const {
        int decimalNumber = binaryToDecimal();
        string octalNumber = decimalToOctal(decimalNumber);
        cout << "Binary Number: " << binaryNumber << endl;
        cout << "Octal Number: " << octalNumber << endl;
    }
};
