/*
�縰���: �ڿ��� �о �Ȱ���.
0�� �Ǿտ� �� �� ����.

����
	���ڿ��� �ޱ�
	���ڿ� ������
	���ڿ� ���� �Ͱ� ������ ���� ������ yes��� �ƴ� no 

*/


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string input;
	vector<string> str;
	vector<string> re_str;
	int i=0;

	
	do{
		cin >> input;
		str.push_back(input);
		
	}while(input != "0");
	
	for(int i =0; i< str.size()-1 ;i++) {
		re_str.push_back(str[i]);
		reverse(re_str[i].begin(), re_str[i].end());
		
		if(re_str[i] == str[i]){
			cout << "yes\n";
		}
		else
			cout << "no\n";
	}
}
