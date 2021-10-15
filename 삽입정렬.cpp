#include <iostream>
using namespace std;
 
int main() {
	int i,j;
	int arr[10] ={ 1,10,5,8,7,6,4,3,2,9};
	//처음  뺀 9번 반복하니까 
	for(i =0 ; i <9;i++) {
		j=i;
		/*적절한 자리 찾는 */
		while(arr[j] > arr[j+1]){
			swap(arr[j],arr[j+1]);
			j--;
		}
	}
	//출력 
	for(i =0; i<10; i++) {
		cout << arr[i] << " ";
	}
	
}
