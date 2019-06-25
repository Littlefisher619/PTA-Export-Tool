Dog* insert(string &no, int age){
    Dog* p=new Dog;
    p->no=no;
    p->age=age;
    p->next=NULL;
 
 
 
    if(head==NULL) {
        head=p;
        return p;
 
    }
 
    if(head->age >= p->age){
        p->next=head;
        head=p;
        return head;
    }
 
    Dog* cur=head;
    while(cur->next!=NULL){
        // 4 1 2 5
        if(cur->next->age >= p->age){
            p->next=cur->next;
            cur->next=p;
            return head;
