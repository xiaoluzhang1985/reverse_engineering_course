class A{
    public:
        A(){
        }
        void printout(){
            a=0x3412;
        
        }
    private:
        int a; 
};

class B{
    public:
        A printA  (A a){
            a.printout();
            return a;
        }
};
int main(){
    A a;
    B b;
    b.printA(a).printout();
    
    return 0;
}

