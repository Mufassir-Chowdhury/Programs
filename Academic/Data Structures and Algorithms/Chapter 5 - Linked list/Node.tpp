template <typename data_type>
Node<data_type>::Node(){
    val = 0;
    next = nullptr;
}

template <typename data_type>
Node<data_type>::Node(data_type k){
    val = k;
    next = nullptr;
}