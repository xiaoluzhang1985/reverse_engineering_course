#include <iostream>
using namespace std;
class date
{
    public:
        void getdate();
        int getyear();
        int getmonth();
        int getday();
        void setdate(int y,int m,int d);
    private:
        int year,month,day;
};
int date::getyear(){ return year; }
int date::getmonth(){ return month; }
int date::getday(){ return day; }
void date::getdate()
{ cout<<"today is:"<<year<<"-"<<month<<"-"<<day<<endl; }
void date::setdate(int y,int m,int d)
{ year=y; month=m; day=d;  }
int main()
{
    date d;
    date e;
    d.setdate(2011,2,1);
    e.setdate(2017,3,18);
    cout<<"year="<<d.getyear()<<endl;
    cout<<"month="<<d.getmonth()<<endl;
    cout<<"day="<<d.getday()<<endl;
    d.getdate();
    
    return 0;
}
