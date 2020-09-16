#include <iostream>
using namespace std;
struct Rectangle
{
int length;
int width;
int area;
int perimeter;
};
int main(){
Rectangle rec;
rec.length=23;
rec.width=22;
rec.area=rec.length*rec.width;
rec.perimeter=2*(rec.length+rec.width);
cout<<"area of rectangle is ="<<rec.area;
cout<<"perimeter of rectangle is ="<<rec.perimeter;}