#include <cmath>
#include <iostream>

int sum_if_palindrome(int integers[], int length) {
  if (length <= 0) {
    return -1;
  } else {
    int sum = 0;
    for (int i = 0; i < length; i++) {
      sum = sum + integers[i];
    }
    return sum;
  }
}

bool is_palindrome(int integers[], int length) {
  if (length <= 0) {
    return false;
  } 
  else {
    for (int i = 0; i < ceil(length / 2); i++) {
      if (integers[i] != integers[length - 1 - i]) {
        return false;
      } else {
        return true;
      }
    }
  }
}

int sum_array_elements(int integers[], int length) {
  if (length <= 0) {
    return -1;
  } 
  else {
    int sum = 0;
    for (int i = 0; i < length; i++) {
      sum = sum + integers[i];
    }
    return sum;
  }
}