template <typename data_type>
SinglyLinkedList<data_type>::SinglyLinkedList(){
    head = nullptr;
    tail = nullptr;
    number_of_member = 0;
}

template <typename data_type>
int SinglyLinkedList<data_type>::length(){
    return number_of_member;
}

template <typename data_type>
void SinglyLinkedList<data_type>::push_back(data_type value){
    number_of_member++;
    if(head == nullptr){
        tail = head = getNewNode(value);
    } else{
        tail = getNewNode(value);
    }
}

template <typename data_type>
Node<data_type>* SinglyLinkedList<data_type>::getNewNode(data_type value){
    return new Node<data_type>(value);
}