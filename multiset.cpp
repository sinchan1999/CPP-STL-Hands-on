#include <iostream>
#include <set>

using namespace std;	

int main()
{ 
    // Everything is same as set
	// only stores duplicate elements also

	multiset<int>ms;
	ms.insert(1); // {1}
	ms.insert(1); // {1, 1}
	ms.insert(1); // {1, 1, 1}

	ms.erase(1); // all 1's are erased

	int cnt = ms.count(1); 

	// only a single one (first 1) is erased
	ms.erase(ms.find(1));

   // Deletes a range between the occurance of two 1s.
	ms.erase(ms.find(1), ms.find(1) + 2);

	// rest all function same as set

    return 0;
}