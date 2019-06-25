#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
template<typename T>
class MySet
{
	T* data;
	int count;
public:
	MySet():count(0){data=new T[100];};
	~MySet(){delete [] data;};
	int addSet(T elem){
		int res=-1;
		if(count==100) cout<<"Full Set."<<endl;
		else if(findElem(elem)!=-1) cout<<elem<<" is already exist!"<<endl;
		else res=count,data[count++]=elem;
		return res;
	}

	int deleSet(T elem){
		int del=findElem(elem,true);
		if(del!=-1){
			for(int i=del;i<count-1;i++) data[i]=data[i+1];
			count--;
		}
		return del;
	}

	int findElem(T elem,bool printerr=false){
		int res=-1;
		for(int i=0;i<count;i++) { if(data[i]==elem) {res=i;break;}}
		if(res==-1 && printerr)cout<<elem<<" is not exist!"<<endl;
		return res;

	}
};
template<typename T>
int op(int op,MySet<T> &set){
	T elem;
	cin>>elem;
	switch(op){
		case 1:return set.addSet(elem);break;
		case 2:return set.deleSet(elem);break;
		case 3:return set.findElem(elem,true);break;
		default:return -1;
	}

}

int main(){
	MySet<int> intSet;

	MySet<double> douSet;
	MySet<string> strSet;

	int a,b;
	int res;
	
	while(1){
		cin>>a;
		if(a==0) break;

		cin>>b;
		switch(a){
			case 1:
				res=op(b,intSet);
				break;
			case 2:
				res=op(b,douSet);
				break;
			case 3:
				res=op(b,strSet);
				break;
			
		}
		if(res!=-1) cout<<res<<endl;
	}
	return 0;
}