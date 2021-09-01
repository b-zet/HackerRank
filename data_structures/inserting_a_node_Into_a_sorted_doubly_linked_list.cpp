// https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem

// solution code
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode* prev{llist};
    DoublyLinkedListNode* node{llist->next};
    DoublyLinkedListNode* next{node->next};

    if(prev->data > data){
        DoublyLinkedListNode* newNode = new DoublyLinkedListNode (data);
        newNode->next=llist;
        newNode->prev = nullptr;
        llist->prev = newNode;
        return newNode;
    }

    while(node!=nullptr){
        if(next->data > data){
            DoublyLinkedListNode* newNode = new DoublyLinkedListNode (data);
            node->next=newNode;
            newNode->next = next;
            newNode->prev = node;
            return llist;
        }
        if(next->next==nullptr){
            DoublyLinkedListNode* newNode = new DoublyLinkedListNode (data);
            next->next = newNode;
            newNode->prev = next;
            return llist;
        }

        prev=prev->next;
        node=node->next;
        next=next->next;
    }

    return llist;
}