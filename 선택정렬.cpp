#include <iostream>
using namespace std;
int main() {
    int i, j, min, min_idx, temp;
 
    int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
    /*10¹ø ¹Ýº¹*/
 
    for (i = 0; i < 10; i++) {
        int min = 9999;
        for (j = i; j < 10; j++) {
            if (min > arr[j]) {
                min = arr[j];
                min_idx = j;
            }
        }
        swap(arr[min_idx],arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}

