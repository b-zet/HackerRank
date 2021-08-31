// https://www.hackerrank.com/challenges/compare-two-linked-lists/problem

// solution code
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    while(head1!=nullptr && head2!=nullptr){
        if (head1->data != head2->data) return 0;
        head1 = head1->next;
        head2 = head2->next;
    }

    if ((head1!=nullptr && head2==nullptr) || (head2!=nullptr && head1==nullptr)) return 0;

    return 1;
}