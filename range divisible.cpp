#include <iostream>
using namespace std;

class DivisibleByNine {
private:
    int count;
    int sum;

public:
    // Constructor to calculate the number and sum of integers divisible by 9 between 100 and 200
    DivisibleByNine() : count(0), sum(0) {
        for (int i = 100; i <= 200; ++i) {
            if (i % 9 == 0) {
                count++;
                sum += i;
            }
        }
    }

    // Destructor to display the results
    ~DivisibleByNine() {
        cout << "Number of integers between 100 and 200 divisible by 9: " << count << endl;
        cout << "Sum of integers between 100 and 200 divisible by 9: " << sum << endl;
    }
};
               
int main() {
    // Create a DivisibleByNine object
    DivisibleByNine obj;

    // The destructor will be called automatically when the object goes out of scope
    return 0;
}
             