    ListNode* buildList(int *arr,int n){
        if(n==0) return NULL;
        ListNode *l=new ListNode(arr[0]);
        l->next=buildList(arr+1,n-1);
        return l;
    }
    ListNode* reverse(ListNode* head){
        //定义三个指针，保存原来的连接的状态
        //当前结点指针
        ListNode *pnow = head;
        //当前结点的前驱指针，初始化是 NULL
        ListNode *pre = NULL;
        //当前结点的后继指针，初始化也是 null
        ListNode *pnext = NULL;
        //定义尾指针
        ListNode *tail = NULL;
        //开始遍历链表
        while(pnow != NULL){
            //如果当前结点不是 null，那么初始化 pnext 指针指向当前结点的下一个结点
            pnext = pnow->next;
            //如果找到了尾结点，初始化 tail 指针
            if(NULL == pnext){
                tail = pnow;
            }
            //进行链表的反转，当前结点的 next 指针指向前一个结点，实现链表方向的反转，此时发生了断链
            pnow->next = pre;
            //勿忘断链的情形，需要使用 pre 指针保存状态，pre 等价于是后移一个结点
