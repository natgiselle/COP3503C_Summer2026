
class MyVector{
    int* data;
    unsigned int numberOfElements;
    unsigned int capacity;
    public:
        MyVector(int initialSize){
            data = new int[initialSize];
            numberOfElements = 0;
            capacity = initialSize;
        }
};

int main(){
    MyVector numbers(10);
    MyVector moreNumbers(3);
    MyVector lotsOfNumbers(100);
}