#include <iostream>
using namespace std;


int sequence(int n);

int main(){
  int test = 0;
  test = sequence(4);
  cout << test << endl;
  return 0;
}

int sequence(int n){
  if(n == 1 || n == 0){
    return 1;
  }
  else{
    return (n - 1 + sequence(n - 2));
  }
}
