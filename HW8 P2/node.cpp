#include "node.h"
#include <iostream>
node::node(const value_type & init_data, node * init_link)
{

    _data = init_data;
    _link = init_link;
}

node::value_type node::data() const
{
    return _data;
}

node * node::link()
{
    return _link;
}

void node::set_data(const value_type & new_data)
{
    _data = new_data;
}

void node::set_link(node * new_link)
{
    _link = new_link;
}

void list_clear(node * & head_ptr, node * & tail_ptr){
  for(node* p = head_ptr; p != nullptr; p = p-> link()){
      next = p->link();
      delete p;
      head = next;
  }
  head_ptr = tail_ptr = nullptr;
}

void node::list_reverse(node * & head_ptr, node * & tail_ptr){
  int size = 0;
  for (node *p = head_ptr; p != nullptr; p = p->link()) {
    size++;
  }

  node * tempH;
  node * x;
  node * y;

  for(int i = size; i > 0; i--){
    node * t = head_ptr;
    for(int x = 0; x < i - 1; x++){
      t = t -> link();
    }

    if(i != size){
      y = new node(t->data(), nullptr);
      x -> set_link(y);
      std::cout << x->data() << y -> data() << std::endl;
      x = y;
    }
    else{
      tempH = new node(t->data(), nullptr);
      x = tempH;
    }
  }

  head_ptr = tempH;
  tail_ptr = y;
}






/*
 *
const node * node::link() const
{
    return _link;
}
*/
