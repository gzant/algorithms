
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "string.hpp"

// Inclusions go here:
// #include <iostream>

String::String() {
  // Allocate space.
  array = new char[1];

  // Add the null.
  array[0] = '\0';

  // Adjust private variables.
  _capacity = 0;
}

String::String(char c) {
  // Allocate space.
  array = new char[2];

  // Add the character and the null.
  array[0] = c;
  array[1] = '\0';

  // Adjust private variables.
  _capacity = 1;
}

String::String(char* str) {
  // Get the length of the incoming string.
  int length = 0;
  while (str[length])
    ++length;

  // Allocate space for the string plus a null.
  array = new char[length + 1];

  // Fill our array up, including the null.
  for (int i = 0; i <= length; ++i)
    array[i] = str[i];

  // Adjust private variables.
  _capacity = length;
}

String::~String() {
  delete[] array;
}

//Finds size of string
unsigned int String::size(int start) const {
    if (*array == '\0'){
        return 0;
    }
    else {
        return 1 + size(start + 1);
    }
}

//Finds character at position in string
char String::at(int n) const {
    char a;
    int len = size(*array);
    if (n > len || n < 0){
        throw "error";
    }
    for (int i = 0; i < n; i++){
        a = array[i];
        }
  return a;
}

//Checks if the string is empty
bool String::empty() const{
    int len = size(*array);
    if (len == 0){
        std::cout << 0;
        return 0;
    }
    else {
      std::cout << 1;
      return 1;
    }
}

void String::reverse(int n){
  int len = size();
  char ans[len];
  for (int i = len; i >= 0; i--){
      for (int j = 0; j <= len; j++){
          ans[i] = array[i];
      }
      ans[i] = array[i];
    //prints string from last to first reversing the order
    std::cout << ans;
    //returns nothing
  }
}

void String::reserve(unsigned int extra){
  int len = size(*array);
  int count = len + extra;
  char ans[count];
  for (int i = 0; i < count; i++){
    ans[i] = array[i];
    std::cout << ans[i];
  }
  delete[] array;
}

void String::insert(char c, int index){
    int len = size(*array);
    char ans[len+1];
    for (int i = 0; i < index; i++){
       ans[i] = array[i];
    }
    ans[index] = c;
    for (int i = index + 1; i < len + 1; i++){
        ans[i+1] = array[i];
    }
}


unsigned int String::capacity()const{
    unsigned int i = 0;
    while (array[i] != '\n'){
        i++;
    }
    return i;
}

void String::erase(char c){
    int len = size(*array);
    for (int i = 0; i < len; i++){
        
    }
}

void String::remove(int n){
};

void String::append(char c){
};

void String::prepend(char c){
};

bool String::compare(char* c) const{
    return 1;
}
bool String::compare(String&) const{
    return 0;
}


void String::concatenate(char* c){

};

void String::concatenate(String&) {
};


unsigned int String::find(char*, int start) const{
    return 1;
};
unsigned int String::find(char, int start) const{
    return 1;
};
unsigned int String::find(String&, int start) const{
    return 1;
};

void String::shift(int n){
};

int String::toInt() const{
    return 1;
};

String String::substr(int x, int y) const{
    return *array;
}
