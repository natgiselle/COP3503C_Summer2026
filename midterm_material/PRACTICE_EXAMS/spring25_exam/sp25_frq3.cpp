    /**
     * 4. 2025 Spring Midterm 1 - FRQ #3
    Problem Statement (25 Points)
    For this question, you have been given two fully-implemented classes, OfficeWorker and ConstructionWorker. Your job is to implement 3 template functions which can deposit money into the accounts of both types of workers, using the methods implemented in both classes.
    Function 1: Pass By Copy
    The template function payByCopy() should have two parameters. The first should accept either an OfficeWorker or ConstructionWorker object by copy, and the second should be the amount to deposit into the worker’s bank account, passed as an int.
    Function 2: Pass By Reference
    The template function payByRef() should implement the same functionality as payByCopy(), but should take in the OfficeWorker or ConstructionWorker object by reference as the first parameter.
    Function 3: Pass By Pointer
    The template function payByPointer() should perform the same actions as the previous two, but should take in the worker by pointer.
    IMPORTANT
    Each of your template functions should be able to handle both types of objects on its own. Do not write different functions for handling OfficeWorker and ConstructionWorker objects separately. You WILL fail all of the test cases :D
    */
    using namespace std;

    // FREEZE CODE BEGIN
    struct OfficeWorker {
        int money = 0;
        OfficeWorker(int m) {
        money = m;
        }

        void depositPaycheck(int amount) {
            money += amount;
        }
    };

    struct ConstructionWorker {
        int money = 0;
        ConstructionWorker(int m) {
        money = m;
        }
        
        void depositPaycheck(int amount) {
            money += amount;
        }
    };
    // FREEZE CODE END


    template <typename T>
    void payByCopy(T worker_copy, int amount){
    worker_copy.depositPaycheck(amount);
    }

    template <typename T>
    void payByRef(T& worker_ref, int amount){
    worker_ref.depositPaycheck(amount);
    }

    template <typename T>
    void payByPointer(T* worker_ptr, int amount){
    worker_ptr->depositPaycheck(amount);
    }