#include <iostream>

using namespace std;

struct product {
    int weight;
    double price;
};

int main () {
    product apple;
    product pear;
    apple.weight = 4;
    apple.price = 0.75;

    return 0;
}
