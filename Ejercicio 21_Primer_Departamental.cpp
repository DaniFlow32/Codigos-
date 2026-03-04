#include <iostream>

using namespace std;

void merge(int arr[], int idx[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = idx[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = idx[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (arr[L[i]] <= arr[R[j]]) {
            idx[k] = L[i];
            i++;
        } else {
            idx[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) idx[k++] = L[i++];
    while (j < n2) idx[k++] = R[j++];
}

void mergeSort(int arr[], int idx[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, idx, left, mid);
        mergeSort(arr, idx, mid + 1, right);
        merge(arr, idx, left, mid, right);
    }
}

int main() {
    int arr[] = {40, 10, 30, 20};
    int n = 4;
    int idx[n];

    for (int i = 0; i < n; i++)
        idx[i] = i;

    mergeSort(arr, idx, 0, n - 1);

    cout << "Ordenamiento indirecto:\n";
    for (int i = 0; i < n; i++)
        cout << arr[idx[i]] << " ";

    return 0;
}