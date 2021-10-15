#include <iostream>
using namespace std;
 
int main() {
    int i, j;
    int arr[10] = { 1, 10,5, 8,7,6,4,3,2,9 };
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}

