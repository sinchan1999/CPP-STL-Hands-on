#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    // EMPTY VECTOR.
	vector<int> v;  // {}

	v.push_back(1); // {1}
	v.emplace_back(2); // {1, 2}

  
 
 // VECTORS CAN STORE PAIRS TOO!

    vector<pair<int, int>>vec_pair;
    vec_pair.push_back({55, 77});
	vec_pair.emplace_back(88, 99); // For single pair emplace_back does not require the '{ }'.

    cout << vec_pair[0].second << " ";
    cout << vec_pair[1].first<<endl;

// Vectors can be repeatetive task without loops!
// Vector of size 5 with every elemnt 1999
vector<int> year(5, 1999);// {1999, 1999, 1999, 1999, 1999}

// A vector of size 5  initialized with 0. Might take garbage value (Depends on the Compilers).
vector<int> vec1(5);// {0, 0, 0, 0, 0}

/* Copying a Vector
 By passing vector as constructor. 
 At the time of declaration of vector, passing an old initialized vector, 
copies the elements of passed vector into the newly declared vector */

vector<int> cpy_year(year); // Now all the values of original year vector is copied in cpy_year!


// WAYS TO PRINT A VECTOR.

v.push_back(11);
v.push_back(55);
v.push_back(77);

cout << "Printing of Vectors: " << endl;
for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
{
    cout << *(it) << " ";
	}

    cout << "\n";
    for (auto it = v.begin(); it != v.end(); it++) {
		cout << *(it) << " ";
	}

cout << "\n";
	for (auto it : v) { // Here we are not moving through the iterator instead we are moving through the elements!
		cout << it << " ";
	}
cout << "\n";

// DELETION IN VECTORS.

// v={1, 2, 11, 55, 77}

v.size(); //Size of the Vector.

v.pop_back(); // Removes the last element . OUTPUT: 1 2 11 55

v.erase(v.begin() + 1); // Deleting a particular vector element. OUTPUT: 1 11 55 77

v.erase(v.begin() + 2, v.begin() + 4); //Deleting elements within a specific range [start, end). OUTPUT: 1 2 77

v.clear(); // Erases the entire vector.

// INSERTION IN VECTORS:

vector<int> vecinsert(2, 100);                   // {100, 100}
vecinsert.insert(vecinsert.begin(), 300);        // {300, 100, 100};
vecinsert.insert(vecinsert.begin() + 1, 2, 777); // {300, 777, 777, 100, 100}

// Inserting one vector into other
    vector<int>arr1(3, 55);
    vecinsert.insert(vecinsert.begin(),arr1.begin(), arr1.end()); // {55 55 55 300 777 777 100 100}


// SWAPPING OF TWO VECTORS:
vector<int>vec3(3, 55);
vector<int>vec4(6, 77);

vec3.swap(vec4); // Elements gets swapped.


return 0;
}
