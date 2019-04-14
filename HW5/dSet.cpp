#include "dSet.h"
#include <iostream>

dSet::dSet():dynamicBag(){}

dSet::dSet(int a[], int size):dynamicBag(a, size){
  for(int i = 0; i < size; i++){
    for(int x = i + 1; x < size; x++){
      if(a[i] == a[x]){
        dynamicBag::erase_one(a[i]);
      }
    }
  }

  for(int i = 0; i < size - 1; i++){
    for(int x = 0; x < size - 1; x++){
      if(a[i] >= a[i + 1]){
        int temp = a[i];
        int temp2 = a[i + 1];
        dynamicBag::erase_one(temp);
        dynamicBag::erase_one(temp2);
        dynamicBag::insertAt(temp2, i);
        dynamicBag::insertAt(temp, i + 1);
      }
    }
  }
}

void dSet::insert(int x){
  dynamicBag::erase(x);
  int index = 0;
  for(int i = 0; i < x; i++){
    if(count(i) != 0){
      index++;
    }
  }
  dynamicBag::insertAt(x, index);
}
