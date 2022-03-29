#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// Specific
typedef tree<int, null_type, less<int>, 
rb_tree_tag, tree_order_statistics_node_update> pbds;

// General
template<class T> using oset = tree<T, null_type, less<T>, 
rb_tree_tag, tree_order_statistics_node_update>;


int main(){

	// Declaration
	pbds A;

	// Insertion
	A.insert(1);
	A.insert(3);
	A.insert(5);
	A.insert(7);
	A.insert(9);
	A.insert(11);

	// K-th Smallest
	int k = 3;
	cout << *A.find_by_order(k-1) << endl;

	// No. of elements < x
	int x = 7;
	cout << A.order_of_key(x) << endl;
	
	return 0;
}
