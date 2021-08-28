// https://www.hackerrank.com/challenges/reverse-a-linked-list/problem

// solution code
SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* temp {nullptr};

    while(llist!=nullptr){
        SinglyLinkedListNode* node = new SinglyLinkedListNode(llist->data);
        node->next = temp;
        temp = node;

        llist = llist->next;
    }

    return temp;
}