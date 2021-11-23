#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;  // {}

	v.push_back(1); // {1}
	v.emplace_back(222);
    v.push_back(55);
    v.push_back(88);
    v.push_back(77);
    v.push_back(77);
    v.push_back(77);
    v.push_back(10);

    //SORTING OPERATION:
    sort(v.begin(), v.end());

   // CHECKING AN ELEMENT IS PRESENT OR NOT!
    int present = binary_search(v.begin(), v.end(), 77); //Returns 1(if present) else 0(element not present).  bool can be used too
   
    
    // UPPER & LOWER BOUNDS.
    vector<int>::iterator it = lower_bound(v.begin(), v.end(), 77); // >=
    vector<int>::iterator it2 = upper_bound(v.begin(), v.end(), 77); // >

    cout << *(it) << endl;
    cout << *(it2) << endl;

    return 0;
}