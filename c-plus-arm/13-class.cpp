class C{
    public:
        C(){ c=1;cc=2;ccc=3;}
    private:        
        int c,cc,ccc;    
};
class B{
    public:
        B(){b=1;bb=2;}
    private:
        int b, bb;
        C c;
};
class A{
    public:
        A(){a=1;}
    private:
        int a;
        B b;
};
int main(){
    A a;
    return 0;
}

