#include <iostream>
#include <string>

using namespace std;
/*
�м�
	���� �ڿ��� A,B,C 
	�� �ڿ��� ���� ����� 0~9���� ���ڰ� ��� �������� Ȯ��
�ǻ��ڵ�
	�Է� 3��
	�迭 10�� 
	while(n!=0);
		n =n/10;
		������ ������ �迭�� ����
		 
	 
	 
*/
int main() {
	int a,b,c;
	int n;
	int arr[10]={0,};
	cin >>a;
	cin >>b;
	cin >>c;
	n =a *b*c;
	//cout << a*b*c<<endl; 
	while( n!=0){
		
		arr[n%10]++;
		n= n/10;
	}
	for(int i =0; i<10;i++) {
		cout << arr[i]<<endl;
	}
}
//int main(){
//	int a,b,c;
//	string str;
//	int arr[10];
//	
//	str = to_string(a*b*c)
//	
//	
//}
