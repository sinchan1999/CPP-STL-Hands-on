/*
We can pass a Vector to a function by two ways:
1: Pass By value---> void funcByValue(vector<int> vect)
2: Pass By Reference--->void funcByReference (vector<int>& vect)
*NOTE: >>Passing by value keeps the original vector unchanged and doesn’t modify the original values of the vector. However, the "Pass By value" style of passing might also take a lot of time in cases of large vectors. So, it is a good idea to pass by reference.

    >>Passing by reference saves a lot of time and makes the implementation of the code faster.
    **>>If we do not want a function to modify a vector, we can pass it as a const reference also.
*/
#include <bits/stdc++.h>
using namespace std;

// Passing By value!
void passingByValue(vector<int> vect) {
    vect.push_back(30);
    vect.push_back(40);
    vect.push_back(50);
}

// Passing By Reference!
void passingByReference(vector<int>& vect) {
    vect.push_back(30);
    vect.push_back(40);
    vect.push_back(50);
}

//Passing Constant Reference.
void passingByConstReference(const vector<int> &vect) 
{ 
    // vect.push_back(30);   // Uncommenting will result in error! 
      
    for (int i = 0; i < vect.size(); i++) 
    cout << vect[i] << " "; 
} 


int main()
{
	vector<int> vect;
	vect.push_back(10);
	vect.push_back(20);

	passingByValue(vect);
    cout<<"Result after calling passingByValue() : ";
	for (int i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";
		
		
	cout<<"\nResult after calling passingByConstReference() : ";
    passingByConstReference(vect);
	
	passingByReference(vect);
    cout<<"\nResult after calling passingByReference() : ";
    for (int i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";    

	return 0;
}
