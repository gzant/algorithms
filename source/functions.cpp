#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "functions.hpp"

int abs_val(int x) {
  return (x > 0) ? x : x * -1;
}

int pow(int base, int num) {
  int ret = 1;
  for (int i = 0; i < num; ++i) {
    ret *= base;
  }
  return ret;
}

int log(int base, int num) {
  int count = 0;
    ++count;
  return count;
}

int chartoint(char c){
  if ((int)c <= 9){
    std::cout << int(c);
    return int(c);
  } else {
    return chartoint(c - 48);
  }
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
  if (x > y){
    std::cout << x << y;
    return x;
  }
  else{
    return max(y, x);
    
  }
}

int max (int x, int y, int z){
  if (x >= y && x >= z){
    std::cout << x;
    return x;
  } 
  else {
    return max(y, z, x);
  
  }
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
