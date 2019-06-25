#include <iostream>
#include <string>
using namespace std;
#define C 5

class Animal{
    public:
       string name;
       Animal(string name):name(name){ }
       virtual bool eat(Animal&)=0;
       virtual int getType()=0;
};

class Cage{
        Animal *a1, *a2;
        void setAnimal1(Animal&);
        void setAnimal2(Animal&);
   public:
        Cage();
        bool arrange(Animal&);
        bool remove(string&);
        Animal* getRoommate(Animal&);	
};

bool Cage::arrange(Animal& a){
    if(a1==NULL && a2==NULL) {
        setAnimal1(a);
        return true;
    }
    if(a1==NULL && a2!=NULL && !a2->eat(a) && !a.eat(*a2)){
        setAnimal1(a);
        return true;
    }
    if(a1!=NULL && !a1->eat(a) && !a.eat(*a1) && a2==NULL){
        setAnimal2(a);
       return true;
    }
    return false;
}

class Tiger: public Animal{
    public:
        Tiger(string name):Animal(name){}
        virtual bool eat(Animal& a){
            return a.getType()==2 || a.getType()==3;
        }
        int getType(){return 1;}
};

class Wolf: public Animal{
    public:
        Wolf(string name):Animal(name){}
        virtual bool eat(Animal& a){
            return a.getType()==3;
        }
        int getType(){return 2;}
};

class Sheep: public Animal{
    public:
        Sheep(string name):Animal(name){}
        virtual bool eat(Animal& a){
            return false;
        }
        int getType(){return 3;}
};

void Cage::setAnimal1(Animal& a){
    a1=&a;
}
void Cage::setAnimal2(Animal& a){
    a2=&a;
}
bool Cage::remove(string& s){
    if(a1!=NULL && a1->name==s) {a1=NULL;return true;}
    else if(a2!=NULL && a2->name==s) {a2=NULL;return true;}
    else return false;

}
void remove(Cage *cage,string& name){
    int i;
    for(i=0;i<C;i++){
        if(!cage[i].remove(name)) continue;
        cout<<"cage:"<<i<<endl;
        cout<<name<<" removed!"<<endl;
        return;
    }
    cout<<name<<" NOT found!"<<endl;;
}
Animal* Cage::getRoommate(Animal& a){
    
    if(a1!=NULL && a1->name!=a.name) return a1;
    else if(a2!=NULL && a2->name!=a.name) return a2;
    else return NULL;
}
Cage::Cage():a1(NULL),a2(NULL){}
/* 请在这里填写答案 */

bool arrange(Cage* cage, Animal& a){
    int i;
    Animal *p;
    for(i=0;i<C;i++){
        if(!cage[i].arrange(a)) continue;
        cout<<"cage:"<<i<<endl;
        p=cage[i].getRoommate(a);
        if(p!=NULL) cout<<"roommate:"<<p->name<<endl;
        return true;
    }
    return false;	
}

int main(){
    Cage cage[C];
    Wolf *pW;
    Tiger *pT;
    Sheep *pS;
    string name;
    bool state=true;
    int type;

    while(cin>>type){
        cin>>name;
        switch(type){
            case 1: pT= new Tiger(name); state=arrange(cage, *pT); break;
            case 2: pS= new Sheep(name); state=arrange(cage, *pS); break;
            case 3: pW= new Wolf(name); state=arrange(cage, *pW); break;
            case 4: remove(cage, name); break;
        }
        if(!state) break;
    }
    return 0;
}
