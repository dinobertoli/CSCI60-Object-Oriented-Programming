#include "dUSet.h"
#include <iostream>

dUSet::dUSet():dynamicBag(){}

dUSet::dUSet(int a[], int size):dynamicBag(a, size){
  for(int i = 0; i < size; i++){
    for(int x = i + 1; x < size; x++){
      if(a[i] == a[x]){
        dynamicBag::erase_one(a[i]);
      }
    }
  }
}

void dUSet::insert(int x){
  dynamicBag::erase(x);
  dynamicBag::insert(x);
}
