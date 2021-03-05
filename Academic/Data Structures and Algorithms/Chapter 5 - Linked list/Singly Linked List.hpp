template <typename data_type> class SinglyLinkedList;

template <typename data_type>
class Node{
    friend class SinglyLinkedList<data_type>;

public:
    Node();
    Node(data_type k);

private:
    data_type val;
    class Node *next;

protected:
    void setValue(data_type val);
    data_type getValue() const;
    Node* getPtr() const;
    void setPtr(Node* ptr);
};

template <typename data_type>
class SinglyLinkedList{
public:
    SinglyLinkedList();
    int length() const;
    void push_back(data_type value);
    void push_front(data_type value);
    bool is_empty() const;
    void print() const;

private:
    Node<data_type> *head, *tail;
    int number_of_member;
    Node<data_type>* getNewNode(data_type value);

protected:
    void setHead(Node<data_type>* ptr);
    void setTail(Node<data_type>* ptr);
    Node<data_type>* getHead() const;
    Node<data_type>* getTail() const;
    void increaseMember();
    void decreaseMember();
};

#include"Singly Linked List.tpp"
#include"Node.tpp"