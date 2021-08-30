// https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem

// solution code
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode* node{nullptr};
    SinglyLinkedListNode* result{llist};

    if (position==0) return llist->next;

    for(int i=0;i<position;i++){
        node = llist;
        llist = llist->next;
    }
    node->next = llist->next;

    return result;
}