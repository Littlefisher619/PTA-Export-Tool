#include<iostream>
using namespace std;
/* 请在这里填写答案 */
void DispList(DLinkNode *L){
    if(L->next==L) {cout<<endl;return;}
    DLinkNode *cur=L->next;
    while(L!=cur){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
    cout<<endl;
 
}
int Symm(DLinkNode *L){
    if(L->next==L) return -1;
    DLinkNode *p=L->next,*q=L->prior;
    while(p!=q&&q->next!=p){      
        if(p->data==q->data){
            p=p->next;
            q=q->prior;
        }else{
            return 0;
        }
    }return 1;
}
 
