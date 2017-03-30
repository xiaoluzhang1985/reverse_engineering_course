#include<string>
#include<iostream>
#include<malloc.h>

using namespace std;
class Inkbox{
    public:
        Inkbox(){
            cout<<"inkbox"<<endl;
        }

        void build(){
            cout<<"building inkbox"<<endl; 
        }
        int id;
        
};

class Printer{
    public:
        Printer(){
            
            //p = (int *) malloc (sizeof(int)*128);
            //brand = "HP";
            year = 2017;
            id = 12345;
            q = 'V';
        }
        void printing(){
            cout<<" printer is printing"<<endl;
        }
        void setbrand(string brand){
            //this->brand = brand;
        }
        void init_inkbox(Inkbox inkbox,Inkbox inkbox2){
            this->inkbox1=inkbox;
            this->inkbox2=inkbox2;
            
        }
        void build_inkbox(){
            this->inkbox1.build();
            this->inkbox2.build();
        }
    private:
        short year;
        int id;
        char q;
        //int* p;
        //string brand;
        Inkbox inkbox1;
        Inkbox inkbox2;
};


int  main(){
    Printer my_printer;
    //my_printer.setbrand("dell");
    my_printer.printing();
    Inkbox inkbox1;
    Inkbox inkbox2;
    my_printer.init_inkbox(inkbox1,inkbox2);
    //Printer mywife_printer;
    //mywife_printer.setbrand("apple");
    //mywife_printer.printing();

    return 0;
}
