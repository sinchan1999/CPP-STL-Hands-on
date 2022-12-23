#include<bits/stdc++.h>
using namespace std;

int main() {

  // initializer list
  vector<int> vector1 = {1, 2, 3, 4, 5};
  // uniform initialization
  vector<int> vector2{6, 7, 8, 9, 10};
  // method 3
  vector<int> vector3(5, 12);



  cout << "vector1 = ";
  // ranged loop
  for (const int& i : vector1) 
  {
    cout << i << "  ";
  }

  cout << "\nvector2 = ";
  // ranged loop
  for (const int& i : vector2) {
    cout << i << "  ";
  }

  cout << "\nvector3 = ";
  // ranged loop
  for (int i : vector3) {
    cout << i << "  ";
  } 
  
  
  
  //Iterate Through Vector Using Iterators
  vector<int> num {1, 2, 3, 4, 5};

  // declare iterator
  vector<int>::iterator iter;
  
  
  // iterator points to the 3rd element
  iter = num.begin() + 2;
  cout << "\nThird element (num[2]) = " << *iter<<endl; // printing the vector element by dereferencing the iterator:

  /*The end() function points to the theoretical element that comes after the final element of the vector. due to the nature of the end() function, we have used the code num.end() - 1 to point to the last element of the num vector i.e. num[4] */


// iter points to the last element of num
  iter = num.end() - 1;
  cout << "Last element (num[4])  = " << *iter<<endl;

  // use iterator with for loop. 
  for (iter = num.begin(); iter != num.end(); ++iter) {
    cout << *iter << "  ";
  }
  cout<<"\n";
  
  /*Alternatively, we can use "auto" keyword which specifies that the type of the variable that is begin declared will automatically be deduced from its initializer and for functions if their return type is auto then that will be evaluated by return type expression at runtime. */
  for (auto it = num.begin(); it != num.end(); it++)
    cout << * it << "  ";  

  return 0;
}

