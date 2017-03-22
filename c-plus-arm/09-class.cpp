#include<string>
#include<iostream>

using namespace std;
class Printer{
    public:
        Printer(){
        }
        void printing(){
            cout<<this->brand<<" printer is printing"<<endl;
        }
        void setbrand(string brand){
            this->brand = brand;
        }
    private:
        short year;
        string brand;
};

int  main(){
    Printer my_printer;
    my_printer.setbrand("dell");
    my_printer.printing();
    Printer mywife_printer;
    mywife_printer.setbrand("apple");
    mywife_printer.printing();

    return 0;
}
