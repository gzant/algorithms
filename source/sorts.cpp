#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "sorts.hpp"

/* Helper Functions */

void copy_arr(int* arr, int* temp, int n) {
  for (int i = 0; i < n; i++) {
    temp[i] = arr[i];
  }
}

void swap(int* y, int* x) {
  int temp;
  temp = *y;
  *y = *x;
  *x = temp;
}

/** Bubble Sort
 *  O(n^2), Omega(n)
 */
void bubble_sort(int *arr, int n) {
  for (int i = 0; i < (n - 1); i++) {
    if (arr[i] > arr[i + 1]) {
      arr[i] = arr[i] xor arr[i + 1];
      arr[i + 1] = arr[i] xor arr[i + 1];
      arr[i] = arr[i] xor arr[i + 1];
    }
  }
  if (n != 1) {
    bubble_sort(arr, n - 1);
  }
}

<<<<<<< HEAD
void swap(int *y, int *x) {
  int temp;
  temp = *y;
  *y = *x;
  *x = temp;
}

void selection_sort(int *arr, int n) {

=======
void selection_sort(int* arr, int n) {
>>>>>>> upstream/master
  for (int i = 0; i < (n - 1); i++) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min])
        min = j;
    }
    swap(&arr[min], &arr[i]);
  }
}

<<<<<<< HEAD
void insertion_sort(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    // Set j = i
    // j > 0 -> for each j from i to 0
    // if the element at j-1 is greater than the element at j
    // -> arr[j] < arr[j-1]
    for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--) {
      // then swap the elements
=======
void insertion_sort(int* arr, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--) {
>>>>>>> upstream/master
      swap(&arr[j], &arr[j - 1]);
    }
  }
}

<<<<<<< HEAD
/** Selection Sort
 * O(n^2), Omega(n^2), Theta(n^2)
 */
/*void selection_sort(int * arr, int n)
{
  int min;
  for(int i = 0; i < (n - 1); i++)
  {
    min = i;
    for(int j = i+1; j < n ; j++)
    {
      if(arr[j]<arr[min])
      {
        min = j;
      }
=======
void merge(int* arr, int n, int mid) {
  int* temp = new int[n];
  copy_arr(arr, temp, n);

  int j = 0;
  int k = mid;
  for (int i = 0; i < n; i++) {
    if (j >= mid) {
      arr[i] = temp[k];
      k++;
    } else if (k >= n) {
      arr[i] = temp[j];
      j++;
    } else if (temp[j] < temp[k]) {
      arr[i] = temp[j];
      j++;
    } else {
      arr[i] = temp[k];
      k++;
>>>>>>> upstream/master
    }
  }
  delete[] temp;
}
<<<<<<< HEAD
*/

/** Insertion Sort
 * O(n^2), Omega(n), Theta(N/A) Average(n^2)
 *
 */

/*void insertion_sort(int* arr, int n){

   int min;
  for(int i =0; i < n; i++)
  {
    min = i;
    for(int j = i; j > 0  ; j--)
    {
      if(arr[j-1] > arr[j])
      {
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j]=temp;
      }
      else
      {
        break;
      }

    }
  }

 }
 */

/*void merge(int *arr, int n, int mid){
    if (n == 1){
        return merge(arr, n, mid)
    }
    retrun merge(arr, n, mid/2)
}
 */




void merge(int *arr, int n, int mid) {
    int temp[n];
    for (int i = 0; i < n; i++){
        temp[i] = arr[i];
    }
    int j = 0;
    int k = mid;
    for (int i = 0; i < n; i++){
        if (j >= mid){
            arr[i] = temp[k];
            k = k + 1;
        } else if (k >= n){
            arr[i] = temp[j];
            j = j + 1;
        } else if (temp[j] <= temp[k]){
            arr[i] = temp[j];
            j = j + 1;

        } else {
            arr[i] = temp[k];
            k = k + 1;
        }
    }
}

void mergesort(int *arr, int n) {
  int mid = n / 2;
  if (n > 1){
      if (n % 2 != 0){
          mid++;
      }
    mergesort(arr, n/2);
    mergesort(arr + (n/2)+1, mid);
    merge(arr, n, mid);
  }
=======

void mergesort(int* arr, int n) {
  if (n > 1) {
    mergesort(arr, n / 2);
    mergesort(arr + (n / 2), n - n / 2);
    merge(arr, n, n / 2);
  }
>>>>>>> upstream/master
}
