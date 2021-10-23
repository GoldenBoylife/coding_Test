/*
분석
	알파벳 소문자로 이루어진 N개 단어 정렬
	1. 길이 짧은 것부터
	2. 길이가 같은 사전순으로
	
전략
 입력
 짧은 것부터 찾기
 사전직으로 나열 
 
*/
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(string a, string b){
	if( a.size() == b.size())
		return a < b;
		//사이즈가 같으면 오름차순 
	else 
		return a.size() < b.size();
		//사이즈가 다를 땐 사이즈로 구분해서 오름차순 
}


int main() {
	/*입력*/
	int n;
	cin >> n;
	string input;
	vector<string> arr;
	
	
	for(int i=0; i<n;i++) {
		cin >> input;
		/*중복 없애고 arr배열에 입력 */
		if(find(arr.begin(), arr.end(), input) == arr.end()){
			arr.push_back(input); 
		}	
	}
	sort(arr.begin(), arr.end(),compare); 
	for(int i =0; i<arr.size();i++) {
		cout << arr[i] <<'\n';
	}	
}
