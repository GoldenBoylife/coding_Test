#include <iostream>
using namespace std;
/*
�м�: 
	�ִ밪  M
	���������� 50/M *100 71.43��
	���ο� ��� ���ϱ�
�ǻ��ڵ�:
 	�迭�� �Է¹ޱ�. 
	for(n�� �ݺ�)
		�ִ밪 �˱�
	for(n�� �ݺ�)
		arrp[1]/M * 100 
*/
int main() {
	int n;
	cin >> n;
	int arr[n];
	double hap =0,avg=0;
	
	for(int i =0; i < n ;i++) {
		
		cin >> arr[i];
	}	
	int max = -99999;
	int max_idx = 0;
	for(int i =0; i<n ;i++) {
		if( max <arr[i]){
			max = arr[i];
			max_idx = i;
		}
	}
	//cout << max <<endl;

	for(int i=0; i< n ;i++) {
		//printf("%.2f\n",arr[i]/max *100);
		//printf("%.2f\n",(float)arr[i]/max*100);
		hap= hap + (float)arr[i]/max*100 ;
	}
	
	avg =hap/n;
	printf("%.13lf",avg);
	
}
