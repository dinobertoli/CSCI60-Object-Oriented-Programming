#include <iostream>
#include <cmath>
#include <string>
using namespace std;

template<typename T1, typename T2> //T1 supports the use of any data type as long as it is the same as the find variable. T2 must be a number variable so that is positive and not a double, so that it can be compared to the index of the array.
int count_exact(T1 a[], T2 size, T1 find)
{
  int counter = 0;
  for(T2 i = 0; i < size; i++){
    if(a[i] == find)
    counter++;
  }
  return counter;
}

template <typename T1, typename T2> //T1 supports the use of any data type as long as it is the same as the find variable. T2 must be a number variable so that is positive and not a double, so that it can be compared to the index of the array.
int count_range(T1 a[], T2 size, T1 low, T1 high)
{
  int counter = 0;
  for(T2 i = 0; i < size; i++){
    if(a[i] <= high && a[i] >= low)
    counter++;
  }

  return counter;
}


template<typename T>
class NPoint{
private:
  int dimension;
  T arr[10];

public:
  NPoint()
  {

    for(int i = 0; i < dimension; i++)
      arr[i] = T();
      dimension = 0;
  }

  NPoint(int d)
  {
    dimension = d;
    for(int i = 0; i < dimension; i++)
      arr[i] = T();
  }

  NPoint(int d, T a[])
  {
    dimension = d;
    for(int i = 0; i < dimension; i++)
      arr[i] = a[i];
  }

  T getTarget(int i)
  {
    return arr[i];
  }

  int getSize()
  {
    return dimension;
  }

  NPoint<T> operator =(NPoint<T> b);
  NPoint<T> operator +=(NPoint<T> b);
};

template<typename T>
NPoint<T> NPoint<T>::operator =(NPoint<T> b)
{
  dimension = b.getSize();
  for(int i = 0; i < dimension; i++){
    arr[i] = b.arr[i];
  }
  return *this;
}

template<typename T>
NPoint<T> NPoint<T>::operator +=(NPoint<T> b)
{

  if(dimension<=b.getSize())
  {
    dimension = b.getSize();
  }


    for(int i=0; i< dimension; i++)
    {
      if(i<=dimension && i <=b.getSize())
      {
        arr[i] += b.getTarget(i);
      }
    }
    return *this;
}
//parameters need to be comparable types
template<typename T>
bool operator ==(NPoint<T> lhs, NPoint<T> rhs){
  if(lhs.getSize() == rhs.getSize()){
    for(int i = 0; i < lhs.getSize(); i++){
      if(lhs.getTarget(i) != rhs.getTarget(i)){
        return false;
      }
    }
  }
  return true;
}

//parameter need to be comparable types
template<typename T>
NPoint<T> operator +(NPoint<T> lhs, NPoint<T> rhs){
  NPoint<T> temp = lhs;
  temp += rhs;
  return temp;
}
//parameter need to be comaprable types
template<typename T>
T distance(NPoint<T> a, NPoint<T> b){
  T d = 0;
  if(a.size() == b.size()){
    for(int i = 0; i < a.size(); i++){
      d += (a.getTarget(i)-b.getTarget(i)*(a.getTarget(i)-b.getTarget(i)));
    }
    d = sqrt(d);
  }
  else{
    cout << "error, NPoints must have the same dimensions" << endl;
  }
  return d;
}

/*NPoint<string> operator -(NPoint<string> a, NPoint<string> b){
  int tDimension = 0;
    if(a.getSize()<=b.getSize()){tDimension = b.getSize();}
    else{tDimension = a.getSize();}
    string temp[tDimension];
    for(int i = 0; i < a.getSize(); i++){
      temp[i] = a.getTarget(i);
    }

    for(int i=0; i< b.getSize(); i++){
        temp[i] = temp[i] - b.getTarget(i);
    }
    NPoint<string> toReturn(tDimension, temp);
    return toReturn;
} */

int operator - (string a, string b){
  char x = a.at(0);
  char y = b.at(0);
  return x - y;
}
