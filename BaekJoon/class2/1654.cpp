/*
분석
 같은 길이 N개 랜선 만들기 
 오: K개,길이 각각
 ex) 300cm -> 140 두개 만들고 20남으면 버림,  

*/ 

#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin >> a>> b;
	long long arr[a];
	long long end = -9999;
	long long start =1;
	long long ans =0;
	long long  mid =0;
	for(int i =0; i<a; i++){
		cin >> arr[i];
		if (end < arr[i])
			end = arr[i];
		
	}
	while( start <= end){
		long long n = 0;
		mid = (start +end) /2;
		for(int i =0; i < a ;i++) {
			n = n+ arr[i]/mid;
		}
		
		if( b <= n){
			start = mid +1;
			if(ans <mid)
				ans = mid;
	
		}
		else
			end= mid-1;
	}
	cout << ans;
}
