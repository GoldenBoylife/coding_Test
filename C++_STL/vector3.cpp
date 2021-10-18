#include <iostream>
#include <vector>
using namespace std;

void print_vect(vector<int>& vect){
	for(auto elem : vect){
		cout << elem <<endl;
	}

}

int main() {
	vector<int> vect;
	vect.push_back(1);
	vect.push_back(2);
	vect.push_back(3);
	vect.push_back(4);
	
	cout << "--- 초기 vect---" <<endl;
	print_vect(vect);	
	
	
	cout << "--- 삽입 후 vect---" <<endl;
	vect.insert(vect.begin()+2,30);
	//처음에서 2번째 자리에 30추가  
	print_vect(vect);
	
	
	cout << "--- 삭제 후 vect---"  <<endl;
	vect.erase(vect.end()-1);
	//끝에서 1번째 것 삭제 
	print_vect(vect);
	
	
	
}
