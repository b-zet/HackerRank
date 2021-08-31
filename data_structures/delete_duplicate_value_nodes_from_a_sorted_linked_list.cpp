// https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem

// solution code
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* node {llist};
    SinglyLinkedListNode* result {llist};

    int value=0;
    value = llist->data;
    llist = llist->next;
    while(llist != nullptr){
        while(value==llist->data && llist!=nullptr){
            if (llist->next == nullptr) {node->next=nullptr;return result;}
            llist = llist -> next;
        }
        if (llist!=nullptr) node->next = llist;
        value = llist->data;
        node = llist;
        llist = llist -> next;
    }
    return result;
}