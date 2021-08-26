// https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem

// solution code
void reversePrint(SinglyLinkedListNode* llist) {
    if (llist!=nullptr) {
        reversePrint(llist->next);
        cout << llist->data << endl;
    }
}