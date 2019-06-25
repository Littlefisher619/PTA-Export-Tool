#include<iostream>
#include<iomanip>
using namespace std;
class vehicle{
    protected:
    int wheels,weight;
    public:
    vehicle(int wheels,int weight):wheels(wheels),weight(weight){}
    int get_wheels(){return wheels;}
    int get_weight(){return weight;}
    double wheel_load(){return 1.0*weight/wheels;}
    void print(){
        cout<<"weight "<<weight<<" Kg and wheels "<<wheels<<endl;
    }
};
class car:public vehicle
{
private:
    int passenger_load;
public:
    car(int wheels,int weight,int load):vehicle(wheels,weight),passenger_load(load){};
    int get_passengers(){return passenger_load;}
    void print(){
        cout<<"passenger_load "<<passenger_load<<" weight "<<weight<<" Kg and wheels "<<wheels<<endl;
    }
};
class truck:public vehicle
{
private:
    int passenger_load,payload;
public:
    truck(int wheels,int weight,int load,int payload):vehicle(wheels,weight),passenger_load(load),payload(payload){};
    int get_passengers(){return passenger_load;}
    double efficieny(){return 1.0*payload/(payload+weight);}
    void print(){
        cout<<"passenger_load "<<passenger_load<<" weight "<<weight<<" Kg wheels "<<wheels<<" and efficiency "<<setprecision(2)<<efficieny()<<endl;
    }
};

int main(){

    string type;  
    int ID,wheel,weight,passenger_load,payload,i=1;  
    cin>>type;  
    while(type!="-1")  
    {  
		cin>>ID>>wheel>>weight;  
		cout<<"The "<<i<<"";
		if(i==1)
			cout<<"st";  
		else if(i==2)  
			cout<<"nd";  
		else if(i==3)  
			cout<<"rd";  
		else  
			cout<<"th";  
		i++;  
		cout<<" object is ";  
		if(type=="vehicle")  
		{  
			cout<<"Vehicle"<<" No. "<<ID<<": ";  
			vehicle t(wheel,weight);  
			t.print();  
		}  
		if(type=="car")  
		{  
			cin>>passenger_load;  
			cout<<"Car"<<" No. "<<ID<<": ";  
			car t(wheel,weight,passenger_load);  
			t.print();  
		}  
		if(type=="truck")  
		{  
			cin>>passenger_load>>payload;  
			cout<<"Truck"<<" No. "<<ID<<": ";  
			truck t(wheel,weight,passenger_load,payload);  
			t.print();  
		}  
		
		cin>>type;  
    }  

}