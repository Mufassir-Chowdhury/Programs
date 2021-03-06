template <typename data_type> class SinglyLinkedList;

template <typename data_type>
class Node{
    friend class SinglyLinkedList<data_type>;

protected:
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
    /**
     * Initializes head and tail.
    */
    SinglyLinkedList();
    /**
     * Returns the length.
     * @return the length of the list.
     */
    int length() const;
    /**
     * Inserts a value to the end of the list.
     * @param value to be inserted.
     */
    void push_back(data_type value);
    /**
     * Inserts a value to the beginning of the list.
     * @param value to be inserted.
     */
    void push_front(data_type value);
    /**
     * Removes a value from the beginning of the list.
     * @return value that is removed, otherwise returns NULL.
     */
    data_type pop_back();
    /**
     * Removes a value from the end of the list.
     * @return value that is removed, otherwise returns NULL.
     */
    data_type pop_front();
    /**
     * Returns the value at the front of the list.
     * @return value at the front, otherwise returns NULL.
     */
    data_type front() const;
    /**
     * Returns the value at the end of the list.
     * @return value at the end, otherwise returns NULL.
     */
    data_type back() const;
    /**
     * Returns if the list is empty.
     * @return a bolean indicating if the list is empty.
     */
    bool is_empty() const;
    /**
     * Prints the list.
     */
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