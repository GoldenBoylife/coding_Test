/*
�м�
	���ĺ� �ҹ��ڷ� �̷���� N�� �ܾ� ����
	1. ���� ª�� �ͺ���
	2. ���̰� ���� ����������
	
����
 �Է�
 ª�� �ͺ��� ã��
 ���������� ���� 
 
*/
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(string a, string b){
	if( a.size() == b.size())
		return a < b;
		//����� ������ �������� 
	else 
		return a.size() < b.size();
		//����� �ٸ� �� ������� �����ؼ� �������� 
}


int main() {
	/*�Է�*/
	int n;
	cin >> n;
	string input;
	vector<string> arr;
	
	
	for(int i=0; i<n;i++) {
		cin >> input;
		/*�ߺ� ���ְ� arr�迭�� �Է� */
		if(find(arr.begin(), arr.end(), input) == arr.end()){
			arr.push_back(input); 
		}	
	}
	sort(arr.begin(), arr.end(),compare); 
	for(int i =0; i<arr.size();i++) {
		cout << arr[i] <<'\n';
	}	
}
