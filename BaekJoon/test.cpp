/*
분석
	문자열S 입력 -> 각문자를 R번씩 반복 
	
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n];
	string str[n];
	for(int i =0; i<n;i++) {
		cin >> a[i] >> str[i] ;
	}
	
//	for(int i =0; i<n;i++)
//		cout << a[i] <<" "<< str[i]<<endl;
	for( int i =0; i<n;i++){
		for( int j =0; j< str[i].size();j++) {
			for( int k =0; k< a[i];k++){
				cout << str[i][j] ;
			}
		}
		cout << endl;
		
	}
}
