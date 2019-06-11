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
    /*if (*array == '\0'){
        return size();
    }
    else {
        return 1 + size(start + 1);
    } */
    return _capacity;
}

//Finds character at position in string
char String::at(int n) const {
    char a;
    if (n < _capacity && n >= 0){
        a = array[n];
    } else {
        throw "error";
    }
    return a;
}

//Checks if the string is empty
bool String::empty() const{
    if (_capacity == 0){
        return true;
    } else {
        return false;
    }
}


//doesnt work O(n) for the size
void String::reserve(unsigned int extra){
    int newlen = _capacity + extra;
    char ans[newlen]; //creates array with extra size
    for (int i = 0; i < _capacity; i++){
        //assigns arrays
        ans[i] = array[i];
    }
    //deletes
    delete array;
    _capacity = _capacity + extra;
    //reassign
    array = ans;
}


//O(n)
void String::insert(char c, int index){
    int len = _capacity;
    char ans[len+1];
    //until i is the index, assign array in the ans
    for (int i = 0; i < index; i++){
       ans[i] = array[i];
    }
    //assigns the index to the charachter given c
    ans[index] = c;
    //until the len + 1; assign array to ans
    for (int i = index + 1; i < len + 1; i++){
        ans[i+1] = array[i];
    }
    delete array;
    _capacity++;
    array = ans;
}

//O(n) length of string
unsigned int String::capacity()const{
    return _capacity;
}


void String::erase(char c){
    int len = size(*array);
    for (int i = 0; i < len; i++){
        std::cout << "a";
    }
}


//O(n);
void String::remove(int n){
    for (int i = n; i < _capacity - 1; i++){
        array[i] = array[i+1];
    }
    array[_capacity] = '0';
};

//O(n) length of string
void String::append(char c){
    int newlen = _capacity+1;
    char* ans = new char[newlen];
    for (int i = 0; i < _capacity; i++){
        ans[i] = array[i];
    }
    ans[_capacity] = c;
    delete array;
    _capacity++;
    array = ans;
};

//O(n)
void String::prepend(char c){
    int newlen = _capacity+1;
    char* ans = new char [newlen];
    //for the length of the string assign to another array
    for (int i = _capacity; i >= 0 ; i--){
        ans[i] = array[i];
    }
    //first index is assigned c
    ans[0] = c;
    delete array;
    //increases size to be proper size
    _capacity++;
    array = ans;
};

//O(n) size of array
bool String::compare(char* c) const{
    for (int i = 1; i < _capacity; i++){
        std::cout << "AAa";
        //If theyre different its false
        if (array[i] != c[i]){
            return false;
            }
        }
        return true;
    }

//O(n) same as compare no string&
bool String::compare(String& str) const{
    return 0;
}


//O(n) the length of both strings
void String::concatenate(char* c){
    /*int fulllen = _capacity + size(*c);
    char ans[fulllen];
    for (int i = 0; i < fulllen; i++){
        ans[i] = array[i];
        ans[i + _capacity] = c[i];
    }
    delete array;
    array = ans;*/
};


//O(n)
void String::concatenate(String& str) {
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


//broken
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


void String::shift(int n){
};

int String::toInt() const{
    return 1;
};

String String::substr(int x, int y) const{
    return *array;
}
