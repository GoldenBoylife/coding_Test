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
	
	cout << "--- �ʱ� vect---" <<endl;
	print_vect(vect);	
	
	
	cout << "--- ���� �� vect---" <<endl;
	vect.insert(vect.begin()+2,30);
	//ó������ 2��° �ڸ��� 30�߰�  
	print_vect(vect);
	
	
	cout << "--- ���� �� vect---"  <<endl;
	vect.erase(vect.end()-1);
	//������ 1��° �� ���� 
	print_vect(vect);
	
	
	
}
