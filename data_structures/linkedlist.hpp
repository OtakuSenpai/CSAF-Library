#include <iostream>

using namespace std;

template <typename T>
class LinkedList {
  template <typename T>
  class Node {
    T _data;
    Node* _next;

    Node() {}

    ~Node() {
      delete _next;
      _next = nullptr;
    }

    Node(const T& val): _data(val) {}

    Node(const Node& other) {
      this->_data = other._data;
      this->_next = other._next;
    }

    Node& operator = (const Node& other) {
      try {
        Node *temp = new Node();
        if(!temp) throw "LinkedList.hpp : Error at creating a new node!";
        temp->_data = other._data;
        temp->_next = other._next;
        return temp;
      } catch(const char* e) {
        std::cout<<e<<std::endl;
      }
    }

    Node& operator = (const Node* other) {
      try {
        Node *temp = new Node();
        if(!temp) throw "LinkedList.hpp : Error at creating a new node!";
        temp->_data = other->_data;
        temp->_next = other->_next;
        return temp;
      } catch(const char* e) {
        std::cout<<e<<std::endl;
      }
    }

    T getData() const { return _data; }
  };

  Node* root = nullptr;

  LinkedList() {}
  LinkedList(const size_t& size) {
    size_t temppos = size;
    try {
      root = new Node();
      if(!root) throw "LinkedList.hpp : Failed to create root node!";
      Node* prev = root,temp;
      while(temppos != 0) {
        temp = new Node();
        prev->_next = temp; prev = temp;
        --temppos;
      }
    } catch(const char* e) {
      std::cout<<e<<std::endl;
    }
  }

  LinkedList(const LinkedList& other)
