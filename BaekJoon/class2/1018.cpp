/*
지민이 MN개의 단위 정사각형
어떤 정사각형은 검은색 나머지는 흰색
-> 보드 잘라서 8*8크기 체스판
-> 체스 색으로 칠하는 경우 
-> 칠해야 할 최소 갯수는? 

전략: 
 미리 8*8 판 두개를 만든다음에 비교해서  
 판넬을 하나씩 움직여보면서 차이나는 지점 중 큰 값을 저장함.  
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
	/*입력*/
	int n,m, min =9999;
	cin >>n >>m;
	for(int i=0; i<n;i++) {
		for(int j =0; j <m ;j++){
			cin >> arr[i][j];
		}
	}
	
	/*한칸 씩 이동시키면서 차이 큰수 알기*/
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
