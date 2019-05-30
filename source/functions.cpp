#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "functions.hpp"

int abs_val(int x) {
  return (x > 0) ? x : x * -1;
}

int pow (int base, int num){
  if (num == 1){
    return base;
  }
  return pow(base * base, num - 1);
}

int log(int base, int num) {
  int count = 0;
    ++count;
  return count;
}

int chartoint(char c) {
  int result = (int)c;
  result -= '0';
  return result;
}

char inttochar(int x) {
  return (char)(x + '0');
}

char chr(int x) {
  return (char)x;
}

int ord(char c) {
  return (int)c;
}

int max(int x, int y) {
    if (x == 0){
        return y;
    }
  else if (y == 0){
    return x;
  }
  else {
      return max(x-1, y-1)+1;
    }
}

int max(int x, int y, int z) {
  return max(x, max(y, z));
}

int min(int x, int y) {
  return (x < y) ? x : y;
}

int min(int x, int y, int z) {
  return min(x, min(y, z));
}

int round(double x, char c) {
  if (x > 0) {
    return (c == 'd') ? (int)x : (int)x + 1;
  } else {
    return (c == 'd') ? (int)x - 1 : (int)x;
  }
}

int max(int arr[], int n) {
  int max = arr[0];
  for (int i = 1; i < n; ++i) {
    if (arr[i] > max)
      max = arr[i];
  }
  return max;
}

int min(int arr[], int n) {
  int min = arr[0];
  for (int i = 1; i < n; ++i) {
    if (arr[i] < min)
      min = arr[i];
  }
  return min;
}

bool all(bool arr[], int n) {
  for (int i = 0; i < n; ++i) {
    if (!arr[i])
      return false;
  }
  return true;
}

bool any(bool arr[], int n) {
  for (int i = 0; i < n; ++i) {
    if (arr[i])
      return true;
  }
  return false;
}

int frequency(int arr[], int n, int x) {
    if (n == 0){
    return 0;
  }
  if (arr[n] == x){
    return 1 + frequency(arr+1, n-1, x);
  }
  else{
    return 0 + frequency(arr+1, n-1, x);
  }
}

long sum(int arr[], int n) {
  if (n == 1){
      return arr[0];
  }
  else{
      return arr[0] + sum(arr + 1, n - 1);
  }
}

int index(char str[], char substr[]) {
  int i = 0;
  int j = 0;
  while (str[i] != '\0') {
    if (substr[j] == '\0')
      return i - j;
    if (str[i] == substr[j])
      ++j;
    else
      j = 0;
    ++i;
  }
  if (substr[j] == '\0')
    return i - j;
  return -1;
}

bool is_sorted(int arr[], int n) {
  if (n <= 2)
    return true;
  else {
    int increasing = 1, decreasing = 1;
    for (int i = 0; i < (n - 1); ++i) {
      if (arr[i] <= arr[i + 1])
        ++increasing;

      if (arr[i] >= arr[i + 1])
        ++decreasing;
    }
    return (increasing == n || decreasing == n);
  }
}