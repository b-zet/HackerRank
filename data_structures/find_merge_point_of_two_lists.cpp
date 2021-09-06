// https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem

// solution code
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    vector<SinglyLinkedListNode*> arr;

    while(head1!=nullptr){
        arr.push_back(head1);
        head1=head1->next;
    }
    while(head2!=nullptr){
        for(int i=0;i<arr.size();i++){
            if(head2==arr[i]) return arr[i]->data;
        }

        head2=head2->next;
    }
    return -1;
}