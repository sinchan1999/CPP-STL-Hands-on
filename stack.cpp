#include <iostream>
#include <stack>

using namespace std;	

int main()
{
	stack<int> st;
	st.push(1); // {1}
	st.push(2); // {2, 1}
	st.push(3); // {3, 2, 1}
	st.push(3); // {3, 3, 2, 1}
	st.emplace(5); // {5, 3, 3, 2, 1}

	cout << st.top()<<endl; // prints 5  "** st[2] is invalid **"

	st.pop(); // st looks like {3, 3, 2, 1}

	cout << st.top() <<endl; // 3

	cout << st.size()<<endl; // 4

	cout << st.empty()<<endl; // 0

	stack<int>st1, st2;
	st1.swap(st2);

    return 0;
}

// **Stack only allows us to access the top most element.