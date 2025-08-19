#include <iostream>
using namespace std;
class rectangle
{
private:
    float length ; 
    float width;
public:
   void setlength(float len){
    if(len>0) length=len;
    else cout<<"Error, Please Enter Positive Number";
   }
   void setwidth(float wid){
    if(wid>0) width=wid;
    else cout<<"Error, Please Enter Positive Number";
   }
   float getlength(){
    cout<<length;
    return length;
   }
   float getwidth(){
    cout<<width<<endl;
    return width;
   }
   float getarea(){
   cout<<"The Area Of Rectangle is  "<<width*length<<endl;
   return width*length;
   }

};
int main(){
    rectangle box;
    box.setlength(12.0);
    box.setwidth(20.0);
    box.getarea();
    box.getwidth();
    box.getlength();

    return 0 ;
}