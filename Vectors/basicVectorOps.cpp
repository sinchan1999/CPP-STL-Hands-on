#include<bits/stdc++.h>
using namespace std;

int main() {
  vector < int > v;
  for (int i = 0; i < 10; i++) {
    v.push_back(i); //inserting elements in the vector
  }

  cout << "The elements in the vector: ";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << * it << " ";

  cout << "\nThe front element of the vector: " << v.front();
  cout << "\nThe last element of the vector: " << v.back();
  cout << "\nThe size of the vector: " << v.size();
  cout << "\nDeleting element from the end: " << v[v.size() - 1];
  v.pop_back();
  
  
  cout << "\nPrinting the vector after removing the last element:" << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << "\nInserting 5 at the beginning:" << endl;
  v.insert(v.begin(), 5);
  
  cout << "The first element is: " << v[0] << endl;
  cout << "Erasing the first element" << endl;
  v.erase(v.begin());
  cout << "Now the first element is: " << v[0];

  if (v.empty())
    cout << "\nvector is empty";
  else
    cout << "\nvector is not empty";

  v.clear();
  cout << "\nSize of the vector after clearing the vector: " << v.size();
  
  //Accessing Elements of a Vector
  vector<int> num {10, 20, 30, 40, 50};
  cout << "\n\nElement at Index 0: " << num.at(0);//access element at index 0
  cout << "\nElement at Index 2: " << num[2];
  cout << "\nElement at Index 4: " << num.at(4)<<endl; 
  
  /* NOTE: Note: Like an array, we can also use the square brackets [] to access vector elements.However, the at() function is preferred over [] because at() throws an exception whenever the vector is out of bound, while [] gives a garbage value.
  // gives garbage value
cout << num[10];
// throws an exception
cout << num.at(10); */

// change elements at indexes 1 and 4
  num.at(1) = 1000;
  num[4] = 5000;
  for (const int& i : num) {
    cout << i << "  ";
  }


}
