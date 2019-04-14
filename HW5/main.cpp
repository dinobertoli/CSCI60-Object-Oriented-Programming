#include "dynamicBag.h"
#include "dUSet.h"
#include "dSet.h"
#include <iostream>
using namespace std;
int main(){
/*
int x = 10;
dynamicBag b;
b.insert(5);
b.insert(70);
for(int i=0; i<5; i++)
    b.insert(i+1);
for(int i=0; i<b.size(); i++)
    cout<<b[i]<<endl;
b.erase(5);
for(int i=0; i<b.size(); i++)
    cout<<b[i]<<endl;
return 0; */

//tests for HW5
int a[5] = {1,2,3,4,5};
int b[5] = {1,2,5,4,5};
int c[5] = {4,3,6,7,8};

dUSet testDefault = dUSet();
dUSet testConst = dUSet(b, 5);
dUSet testConst2 = dUSet(a, 5);

dSet testSet = dSet();
dSet testSet2 = dSet(c, 5);

cout << testConst << endl;
cout << testConst2 << endl;
cout << testSet2 << endl;

testSet2.insert(5);
cout << testSet2 << endl;

}//destroy x and b - C++ will give back all memory on the stack, and will call b's destructor if we've written one.
