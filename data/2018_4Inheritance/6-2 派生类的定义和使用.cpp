class Animal{
    public:
    void speak(){
        cout<<"animal language!"<<endl;
    }
};
class Cat: public Animal{
    private:
    string m_strName;
    public:
    Cat(string name):m_strName(name){}
    void print_name(){cout<<"cat name: "<<m_strName<<endl;}
};
