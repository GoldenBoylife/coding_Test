#include <iostream>
#include <string>

using namespace std;
/*
분석
	세개 자연수 A,B,C 
	세 자연수 곱한 결과가 0~9까지 숫자가 몇번 쓰였는지 확인
의사코드
	입력 3개
	배열 10개 
	while(n!=0);
		n =n/10;
		나머지 얼마인지 배열에 저장
		 
	 
	 
*/
#if 0
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
#endif

int main(){
	int a,b,c;
	cin >>a>>b>>c;
	string str;
	int arr[10]={0};
	
	str = to_string(a*b*c);
//	cout << str <<endl;
	for(char ch :str){
		arr[ch-'0']++;
	}
		
	for(int ch:arr){
		cout << ch <<endl;
	}
		
	
}
