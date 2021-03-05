template <typename data_type>
Node<data_type>::Node(){
    setValue(0);
    next = nullptr;
}

template <typename data_type>
Node<data_type>::Node(data_type k){
    setValue(k);
    next = nullptr;
}

template <typename data_type>
void Node<data_type>::setValue(data_type value){
    this -> val = value;
}

template <typename data_type>
data_type Node<data_type>::getValue(){
    return val;
}

template <typename data_type>
Node<data_type>* Node<data_type>::getPtr(){
    return next;
}

template <typename data_type>
void Node<data_type>::setPtr(Node<data_type>* ptr){
    next = ptr;
}