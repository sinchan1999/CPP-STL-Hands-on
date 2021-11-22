#include <iostream>
#include <list>

using namespace std;

int main()
{

list<int> ls;

	ls.push_back(2); // {2}
	ls.emplace_back(4); // {2, 4}

	ls.push_front(5); // {5, 2, 4};
    
	ls.emplace_front(); //{2, 4};
    

	// rest functions same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap

    return 0;
}

// In Lists we can push elements from the front whereas same can't be done in Vector.