#include <iostream>
using namespace std;
/*
�м�
	9�� ���δٸ� �ڿ���
	->�ִ밪 ã��
	->�ִ밪�� ���° ������ Ȯ��
	 
*/

int main() {
	int arr[9];
	int max =-9999;
	int max_idx =-10;
	for(int i=0; i<9 ;i++) {
		cin >> arr[i];
		if (max < arr[i]){
			max = arr[i];
			max_idx = i;
		}
	}
	cout << max <<endl << max_idx +1 <<endl;
	
}
