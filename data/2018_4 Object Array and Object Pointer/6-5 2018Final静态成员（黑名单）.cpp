int Group::size=0;
int Group::blackList[N];
Group::Group(){}
Group::Group(int num, bool bSign):num(num){if(bSign)addToList(num);}
void Group::addToList(int num){
    if(size==N){
        --size;
        for(int i=0;i<size;i++)blackList[i]=blackList[i+1];
    }
    blackList[size++]=num;
}
void Group::removeFromList(int num){
    int id;
    for(id=0;id<size;id++)if(blackList[id]==num) break;
        //1 2 3 
        //0 1 2
    --size;
    for(int i=id;i<size;i++)blackList[i]=blackList[i+1];
}
 
 
