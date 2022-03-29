#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/hash_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template<class T> using oset = tree<int, null_type, less<T>, 
rb_tree_tag, tree_order_statistics_node_update>;

int main(){

	int q; cin>> q;
	oset<int> s;
	while (q--)
	{
		int c; cin >> c;
		int t; cin >> t;
		if(c==1)
			s.insert(t);
		else if(c==2)
		cout << *s.find_by_order(t) << endl; // counting from zero.
		else
		cout << s.order_of_key(t) << endl;
	}
	
	return 0;
}