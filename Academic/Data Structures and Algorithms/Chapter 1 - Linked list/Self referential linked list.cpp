#include<iostream>
using namespace std;

struct node{
    int val;
    struct node *next;
    node(){
        val = 0;
        next = NULL;
    }
    node(int n){
        val = n;
        next = NULL;
    }
};

struct SinglyLinkedList{
    node *head, *tail;
    int member;
    SinglyLinkedList(); //done
    void push_back(int k); //done
    void push_front(int k); //done
    int pop_back(); //done
    int pop_front(); //done
    int back(); //done
    int front(); //done
    void insert(int k, int p); //done
    int index(int k);
    int erase(int k); //done
    void remove(int k); //done
    void print(); //done
    int size(); //done
};

SinglyLinkedList::SinglyLinkedList(){
    head = NULL;
    tail = NULL;
    member = 0;
}

void SinglyLinkedList::push_back(int k){
    node *cur = new node(k);
    if(head == NULL)
        head = tail = cur;
    else{
        tail -> next = cur;
        tail = cur;
    }
    member++;
}

void SinglyLinkedList::insert(int k, int p){
    if(p == 1 || head == NULL)
        push_front(k);
    else if(p > member)
        push_back(k);
    else if(p < 1)
        cout << "Illegal indexing occured!" << endl;
    else{
        node *cur = new node(k), *temp = head;
        for(int i=2; i<p; i++)
            temp = temp -> next;
        cur -> next = temp -> next -> next;
        temp -> next = cur;
        member++;
    }
}

void SinglyLinkedList::push_front(int k){
    node *cur = new node(k);
    if(head == NULL)
        head = tail = cur;
    else{
        cur -> next = head;
        head = cur;
    }
    member++;
}

int SinglyLinkedList::front(){
    return head -> val;
}

int SinglyLinkedList::back(){
    return tail -> val;
}

int SinglyLinkedList::size(){
    return member;
}

int SinglyLinkedList::pop_front(){
    if(head == NULL)
        cout << "Underflow!" << endl;
    else if(head == tail){
        int ret = head -> val;
        head = tail = NULL;
        member--;
        return ret;
    } else{
        node *cur = head;
        int ret = head -> val;
        head = head -> next;
        delete cur;
        member--;
        return ret;
    }
}

int SinglyLinkedList::pop_back(){
    if(head == NULL)
        cout << "Underflow!" << endl;
    else if(head == tail){
        int ret = head -> val;
        head = tail = NULL;
        member--;
        return ret;
    } else{
        node *temp = head, *temp2 = tail;
        while(temp -> next != tail)
            temp = temp -> next;
        int ret = tail -> val;
        tail = temp;
        member--;
        delete temp2;
        return ret;
    }
}

void SinglyLinkedList::print(){
    if(head == NULL)
        cout << "List empty!" << endl;
    else{
        cout << "List: ";
        node *cur = head;
        while(cur){
            cout << cur -> val << " ";
            cur = cur -> next;
        }
        cout << endl;
    }
}

int SinglyLinkedList::erase(int k){
    node *cur = head, *temp;
    int ret;
    if(k == 1){
        ret = pop_front();
    } else if(k == member){
        ret = pop_back();
    } else{
        for(int i=1; i<k-1; i++)
            cur = cur ->next;
        temp = cur -> next;
        ret = temp -> val;
        cur -> next = cur -> next -> next;
        delete temp;
        member--;
    }
    return ret;
}

void SinglyLinkedList::remove(int k){
    node *cur = head;
    if(k == head->val){
        pop_front();
    } else{
        while(cur ->next){
            cur = cur ->next;
            if(cur -> next -> val == k){
                cur -> next = cur -> next -> next;
                break;
            }
        }
        if(cur -> next == NULL)
            tail = cur;
        member--;
    }
}

int SinglyLinkedList::index(int k){
    
}

int main(){

    return 0;
}