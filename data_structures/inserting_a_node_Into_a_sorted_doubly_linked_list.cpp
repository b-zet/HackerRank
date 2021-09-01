// https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem

// solution code
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode* prev{llist};
    DoublyLinkedListNode* node{llist};
    DoublyLinkedListNode* next{llist};
    DoublyLinkedListNode* newNode = new DoublyLinkedListNode (data);

    if (llist->next==nullptr) {
        if (data<llist->data) {
            newNode->next = llist;
            llist->prev = newNode;
            return newNode;
        } else{
            newNode->prev = llist;
            llist->next=newNode;
            return llist;
        }
    }
    node = llist->next;
    if (node->next==nullptr) {
        if(data < prev->data){
            newNode->next=prev;
            prev->prev = newNode;
            return newNode;
        }
        if (data < node->data) {
            newNode->next = node;
            newNode->prev = prev;
            node->prev = newNode;
            prev->next=newNode;
            return prev;
        } else{
            newNode->prev = node;
            node->next=newNode;
            return llist;
        }
    }

    next = node->next;

    if(prev->data > data){
        newNode->next=llist;
        llist->prev = newNode;
        return newNode;
    }
    if(node->data > data){
        newNode->next=node;
        node->prev = newNode;
        prev->next=newNode;
        return llist;
    }
    while(node!=nullptr){
        if(next->data > data){
            node->next=newNode;
            newNode->next = next;
            newNode->prev = node;
            return llist;
        }
        if(next->next==nullptr){
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