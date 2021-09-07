// https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/problem

// solution code
DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode* node{nullptr};
    DoublyLinkedListNode* temp{nullptr};

    if(llist==nullptr) return llist;

    node=llist;
    llist=llist->next;

    while(llist!=nullptr){
        temp = node->next;
        node->next = node->prev;
        node->prev = temp;

        node = llist;
        llist = llist->next;
    }
    node->next = node->prev;

    return node;
}