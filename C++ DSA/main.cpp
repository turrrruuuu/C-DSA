#include <iostream>


class rectangle{

private:
int length;
int breadth;
public:
rectangle(){
length=0;
breadth=0;
}
rectangle(int l,int b);
int area(){
return length*breadth;
}
int perimeter(){
 int p;
 p=2*(length+breadth);
 return p;
}
int getLength(){
return length;
}
void setLength(int l){
  length=l;
}
~rectangle();
  };
rectangle::rectangle(int l,int b){
  length=l;
  breadth=b;}

int main() {
int l,b;
std::cout<<"Enter Length and Breadth"<<std::endl;
std::cin>>l>>b;
rectangle *r= new rectangle(l,b);
std::cout<<"Area motofoka"<< r->area();



}
