#include<iostream>
#include"Singly Linked List.hpp"

int main(){
    SinglyLinkedList<char> test_list;
    std::cout << test_list.back() << std::endl;
    std::cout << test_list.front() << std::endl;
    test_list.pop_front();
    std::cout << test_list.is_empty() << " : " << test_list.length() << std::endl;
    test_list.push_back('a');
    std::cout << test_list.is_empty() << " : " << test_list.length() << std::endl;
    test_list.pop_front();
    std::cout << test_list.is_empty() << " : " << test_list.length() << std::endl; 
    test_list.push_back('b');
    std::cout << test_list.is_empty() << " : " << test_list.length() << std::endl;
    test_list.push_front('c');
    std::cout << test_list.is_empty() << " : " << test_list.length() << std::endl;
    test_list.push_front('d');
    std::cout << test_list.is_empty() << " : " << test_list.length() << std::endl;
    std::cout << test_list.back() << std::endl;
    std::cout << test_list.front() << std::endl;

    test_list.print();
    return 0;
}