#include <iostream>

class Node // 節點模型
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = nullptr; // 用空指標來初始化
  }
};

class LinkedList
{
public:
  Node *head;

  LinkedList()
  {
    this->head = nullptr;
  }

  void push(int data)
  {
    Node *new_node = new Node(data);
    new_node->next = head;
    head = new_node;
  }

  int size()
  {
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
      count++;
      temp = temp->next;
    }
    return count;
  }
  void list() const
  {
    Node *current = head;
    while (current != nullptr)
    {
      std::cout << current->data << " ";
      current = current->next;
    }
    std::cout << std::endl;
  }
};

int main()
{
  LinkedList llist;

  // push data
  llist.push(1);
  llist.push(2);
  llist.push(3);
  llist.push(5);

  // llist size
  int size = llist.size();
  std::cout << "Size of the linked list is: " << size << std::endl;

  // list all elements
  std::cout << "Elements in the linked list: ";
  llist.list();

  return 0;
}
