/*
 * ============================================================
 * PRACTICE LAB (Lego Star Wars Mirror of Lab 8)
 * Droid Combat Squad
 * ============================================================
 *
 * OVERVIEW:
 * Build a droid combat squad system using inheritance and
 * polymorphism. Implement four classes:
 *   - Droid
 *   - BattleDroid
 *   - SecurityDroid
 *   - DroidekaUnit
 *
 * Each droid type has its own combat behavior, while sharing
 * common info through a base class.
 *
 * Practice:
 *   - Creating an abstract base class
 *   - Using pure virtual functions
 *   - Overriding virtual functions
 *   - Using multiple inheritance
 *   - Using virtual inheritance
 *   - Working with base-class pointers
 *   - Calling functions polymorphically
 *   - Managing dynamic memory with new and delete
 *
 * In main(), create several droids, store them in a single
 * vector, run them for three battle rounds, display their
 * final status, and properly release their memory.
 *
 * ============================================================
 * PROBLEM STATEMENT:
 * ============================================================
 * The Separatist army uses different combat droids. Some
 * droids specialize in direct blaster combat. Other droids
 * specialize in deploying defensive energy shields. A more
 * advanced droid can do both and is used as a heavy-duty
 * frontline unit.
 *
 * CLASS HIERARCHY:
 *
 *                  Droid
 *                 /      \
 *                /        \
 *       BattleDroid    SecurityDroid
 *                \        /
 *                 \      /
 *              DroidekaUnit
 *
 * - Droid is the abstract base class (ABC).
 * - BattleDroid and SecurityDroid both inherit from Droid
 *   using virtual inheritance.
 * - DroidekaUnit inherits from both BattleDroid and
 *   SecurityDroid, which creates the diamond problem. Solve
 *   it correctly using virtual inheritance.
 *
 * Implement the four classes above, plus a main() function
 * that calls an army of different types of Droid.
 *
 * ============================================================
 * CLASS: Droid
 * ============================================================
 * Represents any combat droid in the army. Stores information
 * common to all droids. MUST be an abstract base class —
 * objects of Droid cannot be created directly.
 *
 * PRIVATE ATTRIBUTE:
 *   string unitID     -- the droid's unit identifier
 *
 * PROTECTED ATTRIBUTES:
 *   int chargeLevel   -- the droid's charge/power level
 *
 * PUBLIC FUNCTIONS:
 *
 * 1. Default Constructor
 *    Sets unitID to an empty string and chargeLevel to 100.
 *
 * 2. Parameterized Constructor
 *    Takes a string and an int to initialize the private and
 *    protected attributes.
 *
 * 3. Getter function for Unit ID
 *    Since unitID is private, this provides safe outside access.
 *    Name:        getUnitID()
 *    Return type: string
 *    Parameters:  none
 *
 * 4. Pure Virtual Function
 *    Name:        engage()
 *    Return type: void
 *    Parameters:  none
 *    - Must be a pure virtual function
 *    - Represents the main combat/security action of the droid
 *    - Every derived class MUST override it to become a
 *      concrete class, so it can be instantiated
 *
 * 5. Virtual Display Function
 *    Name:        display()
 *    Return type: virtual void
 *    Parameters:  none
 *    - Must be callable by const Droid objects
 *    - Prints "Unit ID: " followed by unitID on one line,
 *      then "Charge: " followed by chargeLevel on the next line
 *    Expected output format:
 *        Unit ID: BD-101
 *        Charge: 90
 *
 * 6. Virtual Destructor
 *    Required since this class is used polymorphically —
 *    ensures proper cleanup through base-class pointers.
 *
 * ============================================================
 * CLASS: BattleDroid (inherits virtually from Droid)
 * ============================================================
 * Represents a droid specialized in direct blaster combat.
 *
 * - Add any extra attribute you'd like (e.g. blaster ammo count)
 * - Override engage() to represent firing on a target and
 *   reduce chargeLevel by some amount
 *
 * ============================================================
 * CLASS: SecurityDroid (inherits virtually from Droid)
 * ============================================================
 * Represents a droid specialized in deploying energy shields.
 *
 * - Add any extra attribute you'd like (e.g. shield strength)
 * - Override engage() to represent deploying a shield and
 *   reduce chargeLevel by some amount
 *
 * ============================================================
 * CLASS: DroidekaUnit (inherits from BattleDroid and SecurityDroid)
 * ============================================================
 * Represents an advanced droid capable of both blaster combat
 * and shield deployment simultaneously. This is the diamond
 * convergence point — must be solved with virtual inheritance
 * on BattleDroid and SecurityDroid above.
 *
 * - Override engage() to represent combining both behaviors
 *
 * ============================================================
 * main()
 * ============================================================
 * - Create an army of droids — a mix of BattleDroid,
 *   SecurityDroid, and DroidekaUnit — stored in a single
 *   vector<Droid*>
 * - Run the army for three battle rounds: loop 3 times,
 *   calling engage() on every droid each round
 * - Display final status of every droid
 * - Properly delete every pointer, releasing all memory
 */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Droid {
    private: // accessible only inside class itself, derived classes can NOT touch it directly, OUTSIDE access requires getter/setter
        string unitID; // droid unit identifier
    
    protected: // accessible inside the class itself AND inside any derived classes, NOT accessible outside of code, NOT accessible in unrelated classes or main()
        int chargeLevel; // Droid, BattleDroid, SecurityDroid, DroidekaUnit can all use this directly
    
    public:
        // EMPTY CONSTRUCTOR
        Droid(): unitID(""), chargeLevel(100){}

        // PARAMETRIZED CONSTRUCTOR: used to initialize private and protected attributes
        Droid(string unitID_, int chargeLevel_): unitID(unitID_), chargeLevel(chargeLevel_) {}

        //  GETTERS
        string getUnitID(){
            return unitID;
        }

        // PURE VIRTUAL FUNCTION
        // droid is an abstract class and cannot be instantiated directly as it has atleast ONE pure virtual function and is an unfulfilled =0
        // if a derived class overrides this purely virtual function in its declaration, the derived class will no longer be abstract and will be concrete (can be instantiated directly)
        virtual void engage() = 0; // =0 since it can vary depending on the behaviors of the different droids

        virtual void display(){
            cout << "Unit ID: " << unitID << endl;
            cout << "Charge: " << chargeLevel << endl;
        }

        virtual ~Droid(){
            cout << "Deletes droid." << endl;
        }
};

// virtual public Droid for both derived class to avoid duplicate Droid class and avoids diamond problem
class BattleDroid : virtual public Droid {
    private:
        int blasterAmmo;
    public:
        // DEFAULT CONSTRUCTOR
        BattleDroid(): Droid(), blasterAmmo(10) {}
        
        // PARAMETRIZED CONSTRUCTOR
        BattleDroid(string unitID_, int chargeLevel_, int blasterAmmo_): Droid(unitID_, chargeLevel_), blasterAmmo(blasterAmmo_){}

        // GETTERS
        int getBlasterAmmo(){
            return blasterAmmo;
        }

        // SETTERS
        void setBlasterAmmo(int currBlasterAmmo){
            blasterAmmo = currBlasterAmmo;
        }

        // override functions
        void engage() override {
            cout << "Fire on target intruder!" << endl;
            setBlasterAmmo(getBlasterAmmo() - 5);
            if(blasterAmmo <= 0){
                cout << "No more blaster ammo left. Blaster deactivated." << endl;
                setBlasterAmmo(0);
                chargeLevel-=5;
            }
            if(chargeLevel <= 0){
                cout << "No more charge. BattleDroid deactivated." << endl;
                chargeLevel = 0;
            }
        }

        void display() override {
            cout << "Unit ID: " << getUnitID() << endl;
            cout << "Charge: " << chargeLevel << endl;
            cout << "Blaster Ammo #: " << blasterAmmo << endl;
        }

        ~BattleDroid(){
            cout << "Deletes BattleDroid." << endl;
        }
};

class SecurityDroid : virtual public Droid {
    private:
        bool targetFound;
        int shieldStrength;
    public:
        // DEFAULT CONSTRUCTOR
        SecurityDroid(): Droid(), targetFound(false), shieldStrength(50) {}
        
        // PARAMETRIZED CONSTRUCTOR
        SecurityDroid(string unitID_, int chargeLevel_, bool targetFound_, int shieldStrength_): Droid(unitID_, chargeLevel_), targetFound(targetFound_), shieldStrength(shieldStrength_) {}

        // GETTERS
        bool getTargetFound(){
            return targetFound;
        }

        int getShieldStrength(){
            return shieldStrength;
        }

        // SETTERS 
        void setTargetFound(bool currTargetFound){
            targetFound = currTargetFound;
        }

        void setShieldStrength(int currShieldStrength){
            shieldStrength = currShieldStrength;
        }
    
        // override functions
        void engage() override {
            cout << "Target Spotted! Activate Shield." << endl;
            setShieldStrength(getShieldStrength() - 10);
            chargeLevel-=5;

            if(shieldStrength <= 0){
                cout << "No more shield strength. Shield retracted." << endl;
                setShieldStrength(0);
                chargeLevel-=5;

            }
            if(chargeLevel <= 0){
                cout << "No more charge. SecurityDroid deactivated." << endl;
                chargeLevel = 0;
            }
        }

        void display() override {
            cout << "Unit ID: " << getUnitID() << endl;
            cout << "Charge: " << chargeLevel << endl;
            cout << "Target Found Status: " << targetFound << endl;
            cout << "Shield Strength: " << shieldStrength << endl;
        }

        ~SecurityDroid(){
            cout << "Deletes SecurityDroid." << endl;
        }
};

class DroidekaUnit : public BattleDroid, public SecurityDroid {
    public:
    // DEFAULT CONSTRUCTOR
    DroidekaUnit(): BattleDroid(), SecurityDroid() {}
    
    // PARAMETRIZED CONSTRUCTOR
    DroidekaUnit(string unitID_, int chargeLevel_, int blasterAmmo_, bool targetFound_, int shieldStrength_): BattleDroid(unitID_, chargeLevel_, blasterAmmo_), SecurityDroid(unitID_, chargeLevel_, targetFound_, shieldStrength_) {}

    // override functions
    void engage() override {
        cout << "Enemy targetted! Shield and Blaster activated." << endl;
        setTargetFound(true);
        setShieldStrength(getShieldStrength() - 10);
        setBlasterAmmo(getBlasterAmmo() - 5);
        chargeLevel-=5;
        if(chargeLevel <= 0){
            cout << "No more charge. DroidekaUnit deactivated." << endl;
            chargeLevel = 0;
        }
    }
    void display() override {
            cout << "Unit ID: " << getUnitID() << endl;
            cout << "Charge: " << chargeLevel << endl;
            cout << "Target Found Status: " << getTargetFound() << endl;
            cout << "Shield Strength: " << getShieldStrength() << endl;
            cout << "Blaster Ammo #: " << getBlasterAmmo() << endl;
    }

    ~DroidekaUnit(){
        cout << "Deletes DroidekaUnit." << endl;
    }
};

int main() {
    // Droid d;  if droid is abstract it cannot be instantiated
   //  d.chargeLevel  error main() is not part of the class heirarchy 
    BattleDroid* r2d2 = new BattleDroid("R2D2-#239", 50, 30);
    SecurityDroid* c3po = new SecurityDroid("C3P0-#392", 100, false, 75);
    DroidekaUnit* droideka = new DroidekaUnit("J3T0-#924", 230, 200, true, 400);

    vector<Droid*> armyOfDroids;
    armyOfDroids.push_back(r2d2);
    armyOfDroids.push_back(c3po);
    armyOfDroids.push_back(droideka);
    for(int i = 0; i < armyOfDroids.size(); i++){
        armyOfDroids[i]->engage();
        armyOfDroids[i]->display();
        delete armyOfDroids[i];
    }
}
