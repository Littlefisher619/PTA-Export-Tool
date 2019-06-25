Node* add(Node* head,Node* p){
    
    if(head==NULL) {
        head=new Node;
        head->start=-1;
        head->end=-1;
        head->next=p;
        return head;
    }
    //4 --> 1 | 5
    Node *cur=head;
    while(cur->next!=NULL){
 
        if(cur->next->start > p->start){
            p->next=cur->next;
            cur->next=p;
            return head;
        }
        cur=cur->next;
    }
    cur->next=p;
    return head;
 
}
void display(Node *head){
 
    Node *p=head;
