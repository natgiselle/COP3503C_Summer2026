    /**
     *2. 2025 Spring Midterm 1 - FRQ #1
    Problem Statement (25 points)
    In this question, you must define a class Pet with four member attributes:
    std::string name; which will store a pet’s name.
    std::string species; which will store a pet’s species.
    std::string owner; which will store the name of the owner of a pet.
    int age; which will store the pet’s age in years.
    After defining these attributes, implement nine class methods:
    A default constructor.
    name defaults to "Garfield"
    species defaults to "Cat"
    owner defaults to "Jon"
    age defaults to 0
    A parameterized constructor whose parameters are, in order, a string for the name, then a string string for the species, then a string for the owner, then an int for the age.
    A method becomeOlder() which increases the age by 1 and returns nothing.
    A method Adopt(std::string) which modifies the owner to the passed in string and returns nothing.
    A method Display() which prints the attributes of the Pet in order and returns nothing. Example:

    Name: Garfield
    Species: Cat
    Owner: Jon
    Age: 0
    Four getter methods, getName(), getSpecies(), getOwner(), and getAge() which return the values of their respective attributes.
    NOTE: You must define your getters before you run the test cases, because they will fail to compile if those are not defined.
    */

    #include <string>
    #include <iostream>
    using namespace std;
    // Write your solution below this line.

    class Pet{
    private:
        string name;
        string species;
        string owner;
        int age;
    public:
        /**
        // default constructor
        Pet();

        // parametrized constructor
        Pet(string name_, string species_, string owner_, int age_);

        // getters: no @params + returns the type of what we are getting
        string getName();
        string getSpecies();
        void getOwner();
        void getAge();
        
        // other methods
        void becomeOlder();
        void Adopt(string new_owner);
        void Display();
    */
    Pet(){
        name = "Garfield";
        species = "Cat";
        owner = "Jon";
        age = 0;
    }

    Pet(string name_, string species_, string owner_, int age_){
        name = name_;
        species = species_;
        owner = owner_;
        age = age_;
    }

    string getName(){
        return name;
    }

    string getSpecies(){
        return species;
    }

    string getOwner(){
        return owner;
    }

    int getAge(){
        return age;
    }

    void becomeOlder(){
        age++;
    }

    void Adopt(string new_owner){
        owner = new_owner;
    }

    void Display(){
        cout << "Name: " << getName() << endl;
        cout << "Species: " << getSpecies() << endl;
        cout << "Owner: " << getOwner() << endl;
        cout << "Age: " << getAge() << endl;
    }
    };




