template <typename data_type> class SinglyLinkedList;

template <typename data_type>
class Node{
    friend class SinglyLinkedList<data_type>;
public:
    void setValue(data_type val);
    data_type getValue();
    Node* getPtr();
    void setPtr(Node* ptr);
    Node();
    Node(data_type k);
private:
    data_type val;
    class Node *next;
};

template <typename data_type>
class SinglyLinkedList{
public:
    SinglyLinkedList();
    int length();
    void push_back(data_type value);
private:
    Node<data_type> *head, *tail;
    int number_of_member;
    Node<data_type>* getNewNode(data_type value);
};

#include"Singly Linked List.tpp"
#include"Node.tpp"