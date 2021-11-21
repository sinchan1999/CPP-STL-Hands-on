// include <bits/stdc++.h>
// CPP program to illustrate pair STL
#include <iostream>
#include <utility>
using namespace std;

int main()
{
	pair<int, pair<int, int>> p = {1, {3, 4}};

	// prints 1 4 3
	cout << p.first << " " << p.second.second << " " << p.second.first<< endl;

    pair<int, int> arr[] = { {1, 2}, {2, 5}, {5, 1}};

	// Prints 5
	cout << arr[1].second;

	return 0;
}
