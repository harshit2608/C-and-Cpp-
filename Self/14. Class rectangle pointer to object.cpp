#include <iostream>
using namespace std;

class rectangle
{
public:
    float breadth;
    float length;
public:
    float area()
    {
        cout<<"\nArea of the rectangle is "<<endl;
        return length*breadth;
    }
    float perimeter()
    {
        cout<<"\nPerimeter of the rectangle is "<<endl;
        return 2*(length+breadth);
    }
};

int main()
{
    rectangle *p = new rectangle;
    rectangle *q = new rectangle;
    p->length = 10;
    p->breadth = 5;
    q->length = 100;
    q->breadth = 19;
    cout<<p->area();
    cout<<p->perimeter();
    cout<<q->area();
    cout<<q->perimeter();
    return 0;
}


