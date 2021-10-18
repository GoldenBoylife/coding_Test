#include <iostream>
#include <list>

using namespace std;
int main() {
  list<int> lst;

  lst.push_back(10);
  lst.push_back(20);
  lst.push_back(30);
  lst.push_back(40);

	for (list<int>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
		cout << *itr << endl;
	}
	cout << " ---------------------" <<endl;


	
	for(int i=0; i<lst.size(); i++){
		cout << i <<endl;
	//list에서는 iterator를 쓰지 않으면 중간 값을 따로 접근 할 수가 없다. 

	}
	cout << " ---------------------" <<endl;
	for(int elem: lst){
		cout << elem << endl;
	}
	
	
	
}
