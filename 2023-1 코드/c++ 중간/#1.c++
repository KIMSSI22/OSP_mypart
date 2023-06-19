#include <iostream>
using namespace std;

int a[10];

void bubbleSort(int arr[], int n) {
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            cnt++;

            if(cnt == 11){
                for(int k =0; k < n; k++){
                    a[k] = arr[k];
                }
            }
        }
    }
}

int main() {
    int cnt1 = 0;
    int cnt2 = 0;
    
    int arr[] = {12, 5, 3, 43, 16, 0, 22};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for (int i = 0; i < n-1; i++) {
        cout << a[i] << " ";
    }
    cout << a[n-1];

    return 0;
}