/*
������ MN���� ���� ���簢��
� ���簢���� ������ �������� ���
-> ���� �߶� 8*8ũ�� ü����
-> ü�� ������ ĥ�ϴ� ��� 
-> ĥ�ؾ� �� �ּ� ������? 

����: 
 �̸� 8*8 �� �ΰ��� ��������� ���ؼ�  
 �ǳ��� �ϳ��� ���������鼭 ���̳��� ���� �� ū ���� ������.  
*/


#include <iostream>
using namespace std;

char arr[51][51];
char white_arr[8][8] = {
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W'
};

char black_arr[8][8] = {
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B'
};
int Delta_white(int a, int b){
	int result=0;
	for(int i =0; i <8 ;i++) {
		for( int j = 0; j<8 ;j++) {
			if(arr[i+a][j+b] != white_arr[i][j]){
				result ++;
			}
		}	
	}
	return result;
}
int Delta_black(int a, int b){
	int result=0;
	for(int i =0; i <8 ;i++) {
		for( int j = 0; j<8 ;j++) {
			if(arr[i+a][j+b] != black_arr[i][j]){
				result ++;
			}
		}	
	}
	return result;
}

int main() {
	/*�Է�*/
	int n,m, min =9999;
	cin >>n >>m;
	for(int i=0; i<n;i++) {
		for(int j =0; j <m ;j++){
			cin >> arr[i][j];
		}
	}
	
	/*��ĭ �� �̵���Ű�鼭 ���� ū�� �˱�*/
	for( int i = 0 ; i <=n-8 ;i++ ) {	
		for( int j =0 ; j<= m-8;j++) {
			int delta_w = Delta_white(i,j);
			int delta_b = Delta_black(i,j);
			if(delta_w < delta_b){
				if( min > delta_w) 
					min = delta_w;
			}
			else {
				if( min > delta_b)
					min = delta_b;
			}
			
		}
	}
	cout << min ;
}
