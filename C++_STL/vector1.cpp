#include <iostream>
#include <array>
using namespace std;

int main() {

	array<int, 10> arr1;
	//C���� ũ��10¥�� �迭 ������ �Ͱ� ����ϴ�.
	arr1[0] = 1;
	cout << " arr1 �迭�� 0��° ����:" << arr1[0] << endl;

	array<int, 4> arr2 = { 1,2,3,4 };
	//ũ��4�� �迭��ü�� ���� �ִ� �Ͱ� ����.
	cout << "arr2 �迭�� 2��°����:" <<  arr2[2] << endl;

	for (auto elem : arr2) {
		cout << elem << ' ';
	}
	cout << endl;
}

