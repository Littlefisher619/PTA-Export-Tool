class Car:public Vehicle{
    protected:
    int guest,weight;
    public:
    Car(string no,int guest,int weight):Vehicle(no),guest(guest),weight(weight){}
    int fee(){
        return guest*8+weight*2;
    }
};
class Truck:public Vehicle{
    protected:
    int weight;
    public:
    Truck(string no,int weight):Vehicle(no),weight(weight){}
    int fee(){
        return weight*5;
    }
};
class Bus:public Vehicle{
    protected:
    int guest;
    public:
    Bus(string no,int guest):Vehicle(no),guest(guest){}
    int fee(){
        return guest*3;
    }
};
