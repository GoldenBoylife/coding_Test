#include <iostream>
#include <list>
using namespace std;

template <typename T>
void print_list(list<int>& lst) {
	for(list<int>::iterator itr = lst.begin(); itr !=lst.end() ;itr++) {
		cout << *itr<<endl;
	}
}

int main() {
	list<int> lst;
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	
	cout <<"--- Ã³À½ list ---"<<endl;
	print_list(lst);		
}
