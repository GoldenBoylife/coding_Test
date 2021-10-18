#include <iostream>
#include <array>
using namespace std;

int main() {

	array<int, 10> arr1;
	//C에서 크기10짜리 배열 선언한 것과 비슷하다.
	arr1[0] = 1;
	cout << " arr1 배열의 0번째 원소:" << arr1[0] << endl;

	array<int, 4> arr2 = { 1,2,3,4 };
	//크기4인 배열자체에 원소 넣는 것과 같군.
	cout << "arr2 배열의 2번째원소:" <<  arr2[2] << endl;

	for (auto elem : arr2) {
		cout << elem << ' ';
	}
	cout << endl;
}

