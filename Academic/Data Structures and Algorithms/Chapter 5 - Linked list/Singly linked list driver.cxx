#include<iostream>
#include"Singly Linked List.hpp"

int main(){
    SinglyLinkedList<int> test_list;
    std::cout << test_list.is_empty() << " : " << test_list.length() << std::endl;
    test_list.push_back(4);
    std::cout << test_list.is_empty() << " : " << test_list.length() << std::endl;
    test_list.push_back(3);
    std::cout << test_list.is_empty() << " : " << test_list.length() << std::endl;
    test_list.push_front(1);
    std::cout << test_list.is_empty() << " : " << test_list.length() << std::endl;
    test_list.push_front(2);
    std::cout << test_list.is_empty() << " : " << test_list.length() << std::endl;

    test_list.print();
    return 0;
}