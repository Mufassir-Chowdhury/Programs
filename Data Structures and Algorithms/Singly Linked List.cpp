#include <iostream>
using namespace std;

struct node{
    int val;
    node *next;
    node(){
        val = 0;
        next = NULL;
    }
    node(int k){
        val = k;
        next = NULL;
    }
};

struct SinglyLinkedList{
    node *head, *tail;
    int member;
    /**
        Initializes head and tail.
    */
    SinglyLinkedList();
    /**
        The provided value should be added at the beginning of the list.
        @param val the provided value
    */
    void insertIntoHead(int val);
    /**
        The provided value should be added just after the head of the list.
        @param val the provided value
    */
    void insertNextToHead(int val);
    /**
        The provided value should be added at the end of the list.
        @param val the provided value
    */
    void insertIntoTail(int val);
    /**
        The provided value should be added just before the tail of the list.
        @param val the provided value
    */
    void insertBeforeTail(int val);
    /**
        The provided value should be added at the provided position. If it overflows, the value should be added at the end of the list. The position is 1 Based.
        @param val the provided value
        @param pos the position
    */
    void insertAtPos(int val, int pos);
    /**
        The provided value should be added after the first occurance of the provided reference value if it exists. Otherwise, the value should be appended at the end of the list.
        @param val the value should be added
        @param refVal the reference value
    */
    void insertAfterVal(int val, int refVal);
    /**
        The provided value should be added before the first occurance of the provided reference value if it exists. Otherwise, the value should be pushed at the beginning of the list.
        @param val the value should be added
        @param refVal the reference value
    */
    void insertBeforeVal(int val, int refVal);
    /**
        If it exists, the position of the first occurance of the provided value should be returned. Otherwise, -1 should be returned.
        @param val the value should be searched
        @return the position of the given value in the list if the value exits, otherwise -1
    */
    int findPos(int val);
    /**
        The value of the provided position should be returned. If it doesn't exist, -1 should be returned.
        @param pos the provided position
        @return the value at the given position in the list if the position exits, otherwise -1
    */
    int findValAtPos(int pos);
    /**
        It returns the largest value of the linked list. If the list is empty, then it returns -1.
        @return the largest value of the list if the list has at least one value, otherwise -1
    */
    int findLargestVal();
    /**
        It returns the smallest value of the linked list If the list is empty, then it returns -1.
        @return the smallest value of the list if the list has at least one value, otherwise -1
    */
    int findSmallestVal();
    /**
        It returns and removes the first element of the list. If the list is empty, then it prints "Underflow" and returns -1.
        @return the deleted value. If the list is empty, then it returns -1.
    */
    int deleteFromHead();
    /**
        It returns and removes the second element of the list. If the list has at most one element, then it returns -1 and prints "Underflow".
        @return the deleted value. If the list has at most one value, then it returns -1.
    */
    int deleteNextToHead();
    /**
        It returns and removes the last element of the list. If the list is empty, then it prints "Underflow" and returns -1.
        @return the deleted value. If the list is empty, then it returns -1.
    */
    int deleteFromTail();
    /**
        It returns and removes the second last element of the list. If the list has at most one element, then it returns -1 and prints "Underflow".
        @return the deleted value. If the list has at most one value,then it returns -1.
    */
    int deleteBeforeTail();
    /**
        Removes every occurance of the provided value.
        @param val the value to be removed.
    */
    void deleteAllOcc(int val);
    /**
        Removes the first occurance of the provided value.
        @param val the value to be removed.
    */
    void deleteFirstOcc(int val);
    /**
        Removes the last occurance of the provided value.
        @param val the value to be removed.
    */
    void deleteLastOcc(int val);
    /**
        Returns and removes an element from the provided position.
        @param pos the position of the element to be removed expressed in 1 based indexing.
        @return the value of the deleted element if the position exists, otherwise -1.
    */
    int deleteFromPos(int pos);
    /**
        Empties the list.
    */
    void deleteAll();
    /**
        It removes all the duplicates from the list.
    */
    void deleteDuplicates();
    /**
        Deletes all the even positioned elements.
    */
    void deleteFromEvenPos();
    /**
        Deletes all the odd positioned elements.
    */
    void deleteFromOddPos();
    /**
        Returns and removes all occurance of the largest value, otherwise returns -1.
        @return the largest value of the list if the list has at least one value, otherwise -1
    */
    int deleteLargestValAllOcc();
    /**
        Returns and removes all occurances of the smallest value, otherwise returns -1.
        @return the smallest value of the list if the list has at least one value, otherwise -1
    */
    int deleteSmallestValAllOcc();
    /**
        Prints the list.
    */
    void printList();
    /**
        Prints the first element or prints "empty list" if it's empty.
    */
    void printHead();
    /**
        Prints the last element or prints "empty list" if it's empty.
    */
    void printTail();
    /**
        It returns the size of the list.
    */
    int listSize();
    /**
        Reverses the list.
    */
    void reverseList();

};

SinglyLinkedList::SinglyLinkedList(){
    head = NULL;
    tail = NULL;
    member = 0;
}

void SinglyLinkedList::insertIntoHead(int x){
    node *cur = new node(x);
    member++;
    if(head==NULL){
        head = tail = cur;
        return;
    }
    cur->next = head;
    head = cur;
}

void SinglyLinkedList::insertIntoTail(int x){
    node *cur = new node(x);
    member++;
    if(tail == NULL){
        head = tail = cur;
        return;
    }
    tail->next = cur;
    tail = tail->next;
}

void SinglyLinkedList::insertNextToHead(int val){
    if(head == NULL){
        insertIntoHead(val);
        return;
    }
    insertAtPos(val, 2);
}

void SinglyLinkedList::insertAtPos(int val, int pos){
    if(pos == 1){
        insertIntoHead(val);
    } else if(pos == member+1){
        insertIntoTail(val);
    } else{
        member++;
        node *val = 
    }
}

int SinglyLinkedList::deleteFromHead(){
    if(head==NULL){
        cout << "Underflow" << endl;
        return -1;
    }
    member--;
    node *temp = head;
    int ret = temp->val;
    if(head->next == NULL){
        head = tail = NULL;
    }
    else {
        head = head->next;
    }

    delete temp;
    return ret;
}

void SinglyLinkedList::printList(){
    cout << "List Start  --------------- " << endl;
    if(head == NULL){
        cout << endl;
    }

    node *temp = head;
    while(temp!=NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }

    cout << "List End    --------------- " << endl;
}

int SinglyLinkedList::listSize(){
    return SinglyLinkedList::member;    
}

int main(){
    SinglyLinkedList sl;
    sl.insertIntoHead(4);
    cout << sl.listSize();
    return 0;
}