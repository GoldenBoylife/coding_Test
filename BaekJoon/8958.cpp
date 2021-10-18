/*
분석: 
	ox퀴즈 
	점수 = 연속된 O의 개수 
전략:
	입력 n, string
	for( n)
		for(string.size())
		if o라면 
			point++;
			tot_point += point;
		else x라면
			point =0;
			 
	 
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, point =0;
	cin >> n;
	vector<string> str(n);
	vector<int> tot_point(n);
	for(int i =0; i<n ;i++) {
		cin >> str[i];
		point =0;
		for(char ch : str[i]){
			if( ch=='O'){
//				point++;
//				tot_point[i] = tot_point[i] + point;
				tot_point[i] = tot_point[i] + (++point);
				
			}
			else if(ch =='X')
				point=0;	
		
		}
	
	}
	for(int  i=0; i< n ;i++) {
		cout << tot_point[i] <<endl;	
	}
	
}
