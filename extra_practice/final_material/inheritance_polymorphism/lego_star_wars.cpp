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

class Droid {
    
};
