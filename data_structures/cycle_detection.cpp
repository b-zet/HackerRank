// https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem

// solution code
bool has_cycle(SinglyLinkedListNode* head) {
    vector<SinglyLinkedListNode*> arr;

    arr.push_back(head);
    head = head->next;

    while(head!=nullptr){

        for(int i=0;i<arr.size();i++){
            if(arr[i]==head) return 1;
        }

        arr.push_back(head);
        head = head->next;
    }

    return 0;
}
