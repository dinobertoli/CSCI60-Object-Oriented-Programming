#include <iostream>
#include "NPoint.h"
using namespace std;


int main(){

  int arr1[] = {1,4,3,2,4,2};
  //cout << count_exact(arr1,6,2) << endl;
  //cout << count_range(arr1,6,2,4) << endl;

  string s = "Jim";
  string a = "a";
  string b = "b";
  int x = 1;
  int y = 5;
  string arr2[] = {"Dennis","Jim","Bob"};
  //cout << count_exact(arr2,3,s) << endl;
  //cout << count_range(arr2,3,a,b) << endl;

  string arr3[] = {"Bill"};
  NPoint<int> testDefault;
  NPoint<string> test2(3,arr2);
  NPoint<string> test3(1,arr3);
  NPoint<int> test4(7,arr1);
  test3 += test2;
  cout << test3.getSize() << endl;
  for(int i=0; i< test2.getSize(); i++)
  {
    cout << test2.getTarget(i) << endl;
  }

  bool testEq = (test2 == test3);
  cout << testEq << endl;

  bool testEq2 = (test2 == test2);
  cout << testEq2 << endl;

  NPoint<string> testPlusEq2 = (test2 + test2);
  NPoint<int> testPlus = (test4 + test4);
  test4 += test4;

  for(int i = 0; i < 6; i++){
    cout << testPlus.getTarget(i);
  }
  


  cout << endl;
  return 0;
}
