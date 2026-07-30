/**
 * QUIZ: MAPS & ITERATORS
Each question carries 3 points.
START-----------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 1) The data in a std::map is sorted in ascending order according to the keys.
False
True

ANSWER:
True

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 1 FEEDBACK:
std::map is an associative container that maintains its elements in sorted order based on the keys. By default, it uses
the less-than operator (<) to compare keys, which results in ascending order. This is implemented internally using a
balanced binary search tree (typically a red-black tree), ensuring that iteration through the map will always visit
elements in sorted key order.

-------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 2) What is a value in a C++ map?
An identifier/label for some data
The information being labeled, the "real" data in the map
Name of the map data structure variable

ANSWER:
The information being labeled, the "real" data in the map

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 2 FEEDBACK:
In a C++ map, the value is the actual data that is stored and associated with a key. It represents the "real"
information that you want to retrieve using the key as a lookup mechanism. The other options are incorrect: the
variable name is just what you call the map itself, and an identifier/label describes the key, not the value.

-------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 3) Which of the following (multiple response) commands would successfully add a key COP3503C with a value C++ in a map<string, string> named subject?
subject["COP3503C"] = "C++";
subject.emplace("COP3503C","C++");
subject."COP3503C" = C++;
subject.addToMap("COP3503C", "C++");

ANSWER:
subject["COP3503C"] = "C++";
subject.emplace("COP3503C","C++");

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 3 FEEDBACK:
The first option uses the subscript operator which is a standard way to insert or update key-value pairs in a C++ map.
The second option uses the emplace() method which constructs the key-value pair in place within the map. The third
option has invalid syntax - you cannot use dot notation with a string literal as a key. The fourth option uses a
method name that doesn't exist in the C++ map class.

-------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 4) You can have multiple of the same key in a map
False
True

ANSWER:
False

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 4 FEEDBACK:
In C++, maps (std::map and std::unordered_map) enforce unique keys. Each key can appear only once in a map. If you
attempt to insert a value with a key that already exists, the map will either update the existing key-value pair or
ignore the insertion, depending on the method used, but it will never store duplicate keys. This uniqueness constraint
is fundamental to how maps function as associative containers.

-------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 5) What happens if you try to insert a key-value pair into a map with a key that already exists using the emplace function of maps?
The existing value remains unchanged
The new value overwrites the existing value
The program crashes with an error

ANSWER:
The existing value remains unchanged

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 5 FEEDBACK:
The emplace function for std::map will not insert a new element if a key already exists in the map. The existing
key-value pair remains unchanged, and the emplace operation returns a pair where the second element (boolean) is
false, indicating that no insertion took place. This behavior ensures that each key in the map remains unique. If you
want to overwrite an existing value, you would use the assignment operator [] or the insert_or_assign function instead.

-------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 6) Which of the following commands (multiple response) would be able to retrieve (if the pair exists) the value associated with the key "COP3503C" in an object of type map<string, string> named subject?
subject["COP3503C"];
subject."COP3503C";
subject.at("COP3503C");
subject.getVal("COP3503C");

ANSWER:
subject["COP3503C"];
subject.at("COP3503C");

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 6 FEEDBACK:
There are two primary ways to access elements in a std::map: using the subscript operator [] and using the at()
member function. Both subject["COP3503C"] and subject.at("COP3503C") are valid syntax. The first invalid option uses
dot notation with quotes, and the other uses a non-existent getVal() method that is not part of the standard map
interface.

-------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 7) Typical index-based loops don't work with all maps. What should we use instead?
Constructors
Mutators
Iterators
Acessors

ANSWER:
Iterators

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 7 FEEDBACK:
Iterators are the correct answer because C++ maps (like std::map and std::unordered_map) are associative containers
that don't support index-based access with [] operator for iteration. Iterators provide a standardized way to
traverse through all key-value pairs in a map. Constructors are used to create objects, mutators modify object state,
and accessors retrieve values, but none of these are used for iteration through container elements.

-------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 8) How do we initialize an iterator to the first element of a container? Assume the map name is subject and that the iterator has been defined as map<string ,string>::iterator iter;
iter = subject.start();
iter = subject[0];
iter = subject.begin();
iter = subject[-1];

ANSWER:
iter = subject.begin();

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 8 FEEDBACK:
The begin() method is the standard way to initialize an iterator to point to the first element of any STL container,
including maps. The begin() method returns an iterator pointing to the first element. The other options are
incorrect: start() is not a valid STL container method, subject[0] would access an element by key (not applicable for
iterator initialization), and subject[-1] is invalid syntax for STL containers.

-------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 9) What happens when the following code is executed?

std::map<std::string, int> scores;
scores["Alex"] = 90;
scores["Alex"] = 95;

The second assignment causes an error
The value associated with "Alex" becomes 95
The map stores both values for "Alex"
The value associated with "Alex" remains 90

ANSWER:
The value associated with "Alex" becomes 95

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 9 FEEDBACK:
In C++ std::map, each key can only be associated with one value. When a key already exists and a new value is
assigned to it using the subscript operator [], the existing value is overwritten with the new value. Therefore,
after both assignments, the map contains only one entry for "Alex" with the value 95. Maps don't store multiple
values for the same key, and reassigning values to existing keys is a valid operation (it does not throw an error).

-------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 10) What is the output of the following code?

std::map<int, std::string> values = {
    {3, "C"},
    {1, "A"},
    {2, "B"}
};

auto iter = values.find(2);

if (iter != values.end())
{
    iter->second = "Z";
}

for (const auto& pair : values)
{
    std::cout << pair.second;
}

AZC
ABC
ZAC
ACZ

ANSWER:
AZC

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 10 FEEDBACK:
find(2) locates the element with key 2. Since it exists, iter->second changes its value from "B" to "Z". A map
stores its elements sorted by key, so iteration always visits keys in ascending order: 1, 2, 3. Printing the values
in that order gives "A", "Z", "C" -> AZC.

END-------------------------------------------------------------------------------------------------------------------------------------------------------------
 */