// https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem

// solution code
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* result{head};
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);

    if (head==nullptr) return node;

    while(head->next != nullptr){
        head = head->next;
    }
    head->next = node;
    return result;
}