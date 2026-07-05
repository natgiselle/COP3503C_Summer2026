#include <iostream>
#include <string>
// ALWAYS PUT FUNCTIONS ABOVE MAIN BECAUSE THE ENTRY POINT OF THE PROGRAM GOES TO MAIN FIRST EACH TIME

int add(int a, int b) {
    return a+b;
}

int subtract(int a, int b) {
    return a-b;
}

int multiply(int a, int b) {
    return a*b;
}

double divide(int a, int b) {
    return a/b;
}
int int_divide(int a, int b) {
    return a/b;
}

int mod(int a, int b) {
    return a%b;
}
int main() {
    std::cout << "~*~*~ WELCOME TO MY EPIC CALCULATOR ! ~*~*~\n\tPlease select your operation:" << std::endl;
    bool run = true;
    while(run){
        std::string menu = "\t1. add\n\t2. subtract\n\t3. multiply\n\t4. divide\n\t5. integer divide\n\t6. mod\n\t7. exit";
        std::cout << menu << std::endl;
        // << INSERTION OPERATOR
        // >> EXTRACTION OPERATOR
        // :: SCOPE RESOLUTION OPERATOR
        unsigned int choice = 0; // unsigned lets it so it doesnt store negatives
        std::cout << "\tEnter Choice: ";
        while(!(std::cin >> choice)){ // while this cannot execute
            std::cout << "This is not an integer Please enter an integer:";
            std::cin.clear(); // clears the input
            std::cin.ignore(); //ignore whatever is still in the buffer
        }
        if (choice == 7){
            std::cout << "Thank you for using my epic calculator :D\nGoodbye!!!";
            run = false;
            break;
        }
        if (choice < 1 || choice > 7) {
            std::cout << "Invalid Choice. Please try again." << std::endl;
            continue; // brings us all thw way back to th top of our while loop
        }
        int int1 = 0;
        int int2 = 0;
        std::cout << "\nPlease enter the first integer: ";
        std::cin >> int1;
        std:: cout << "\nPlease enter the second integer: ";
        std::cin >> int2;
        std::cout << std::endl;

        /** 
         * if statement
         * if (choice == 1) {
         *  std::cout << add(int1, int2)
         * }
        }
        */

        // switch statement giveit a bunch of values, various cases that i can use
        switch(choice) {
            case 1: // chain if-statements or enumeration if you want anything other than integers used for choice 
                std::cout << add(int1, int2) << std::endl;
                break; // MUST ADD SEMI COLON ON BREAK
            case 2:
                std::cout << subtract(int1, int2) << std::endl;
                break;
            case 3:
                std::cout << multiply(int1, int2) << std::endl;
            case 4:
                std::cout << multiply(int1, int2) << std::endl;
            case 5:
                std::cout << multiply(int1, int2) << std::endl;
            case 6:
                std::cout << multiply(int1, int2) << std::endl;
            }
        }
    return 0;
}   