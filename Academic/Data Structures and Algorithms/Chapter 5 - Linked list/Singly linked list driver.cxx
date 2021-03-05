#include<iostream>
#include"Singly Linked List.hpp"

int main(){
    SinglyLinkedList<int> test_list;
    std::cout << test_list.is_empty() << " : " << test_list.length() << std::endl;
    test_list.push_back(4);
    std::cout << test_list.is_empty() << " : " << test_list.length() << std::endl;
    test_list.push_back(4);
    std::cout << test_list.is_empty() << " : " << test_list.length() << std::endl;
    test_list.print();
    return 0;
}