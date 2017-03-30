class Base{
    public:
        Base(){
            a=1;b=2;c=3;
        }
    private: 
        int a,b,c;
};
class A : public Base{
    public:
        A(){
            d='a';
        }
        void print(){
        
        }
    private:
        char d;
};

int main(){
    Base b;
    A a;
    return 0;
}
