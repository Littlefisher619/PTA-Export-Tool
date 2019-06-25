Node node[1005];
int _n;
struct Node* buildLinkedList(int* arr, int n){
    int i;
    _n=n;
    for (i = 0; i < n; ++i) {
        node[i].data=arr[i];
        if(i==n-1) node[i].next=NULL;
        else node[i].next=&node[i+1];
    }
    return node;
}
struct Node* getMax(struct Node* head){
    if(_n==0) return NULL;
    Node* maxi=head;
    int i;
    for (i = 0; i < _n; ++i) {
        maxi=head[i].data>maxi->data?&head[i]:maxi;
    }
    return maxi;
}
