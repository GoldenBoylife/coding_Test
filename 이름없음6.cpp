#include <iostream>
using namespace std;
 
int main() {
	int i,j;
	int arr[10] ={ 1,10,5,8,7,6,4,3,2,9};
	//ó��  �� 9�� �ݺ��ϴϱ� 
	for(i =0 ; i <9;i++) {
		j=i;
		/*������ �ڸ� ã�� */
		while(arr[j] > arr[j+1]){
			swap(arr[j],arr[j+1]);
			j--;
		}
	}
	//��� 
	for(i =0; i<10; i++) {
		cout << arr[i] << " ";
	}
	
}
