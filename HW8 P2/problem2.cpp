#include <iostream>
#include "node.h"
using namespace std;

int main(){
  node *head = new node(4, nullptr);
  node *tail(head);
  node *temp;
  temp = new node(1, nullptr);
  tail->set_link(temp);
  tail = temp;
  head = new node(1, head);
  head = new node(3, head);
  temp = new node(5, nullptr);
  tail->set_link(temp);
  tail = temp;
  for (node* p = head; p != nullptr; p = p-> link()){
    cout << p->data() << " ";
  }

  cout << endl;
  list_clear(head, tail);

  for(node* p = head; p != nullptr; p = p-> link()){
    cout << p -> data();
  }
  return 0;
}
