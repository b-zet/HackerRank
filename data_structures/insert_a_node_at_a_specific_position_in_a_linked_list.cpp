// https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem

// solution code
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* result {llist};
    SinglyLinkedListNode* temp {nullptr};

    for(int i=0;i<position-1;i++) {
        llist=llist->next;
    }

    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
    temp = llist->next;
    llist->next = node;
    node->next = temp;

    return result;
}