#include <iostream>

using namespace std;
class Rectangle{
    public:
    float width;
    float height;

    float area(float w, float h){
        return w*h;
    };
    float obw(float w, float h){
        return 2*w+2*h;
    };
};
int main()
{
    Rectangle rect;

    cout<<"podaj bok a: ";
    cin>> rect.width;
    cout<<"\npodaj bok b: ";
    cin>> rect.height;
    float wynik = rect.area(rect.width, rect.height);
    cout <<"Pole: "<<wynik;
    float wynik2 = rect.obw(rect.width, rect.height);
    cout <<"\nObwod: "<<wynik2;
    return 0;
}
