#include <string>
#include <iostream>
using namespace std;
class Printer{
    public:
        Printer(string brand){
            cout<<"Your "<<brand<<" printer is built!"<<endl;
    
        }
        void printing(){
            cout<<"Test printing."<<endl;
        }        
};
class People{

    public:
        People(){

            this->name="";
            this->age=0;
            this->id=0;
            this->gender='F';
        }
        void setName(string onesname){            
            this->name = onesname;
        } 
        void setAge(int onesage){
            this->age = onesage;
        }
        string getName(){
            return this->name;
        }        
        Printer orderPrinter (string brand){
            cout<<"you have ordered a "<<brand<<" printer"<<endl;
            Printer printer(brand);
            return printer;
        }
    private:
        char gender;
        short age;
        int id;
        string name;
        
};

class Animal{
    public:
        
        string getOwnerName(){
            return this->master.getName();
        }
    
        void setOwner(People master){
            this->master=master;
        }
        static int dog;
    private:
        People master;

};
int main(){
    People xiaolu;
    xiaolu.setName("xiaolu");
    xiaolu.setAge(32);
    Printer myprinter = xiaolu.orderPrinter("dell");
    myprinter.printing();
    Animal buddy;
    buddy.setOwner(xiaolu);
    cout<<"buddy's master is "<<buddy.getOwnerName()<<endl;   
    return 0;
}
