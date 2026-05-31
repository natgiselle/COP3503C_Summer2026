/**
 * WHILE LOOPS:
 * Explain while loop syntax
 * Identify the causes of an infinite while loop
 * Describe the break statement as it relates to a while loop
 */


#include <iostream>

int main() {

    int i = 10;
    while (i <= 100) {
        std::cout << i << std::endl;
        break;
        i += 10;
    }
    return 0;
}