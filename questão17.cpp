#include<iostream>


class Vetor2d
{
    float x, y;
public:
    Vetor2d(float mx=0, float my=0);
    Vetor2d soma(Vetor2d v);
    Vetor2d operator+(Vetor2d v);
    void print();
};

using namespace std;

int main()
{

    float x,y;
    float z,w;
    std::cout<<"digite os elementos x e y do vetor 1:\n";
    cin>>x>>y;
    std::cout<<"digite os elementos z e w do vetor 1:\n";
    cin>>z>>w;
    Vetor2d v1(x,y), v2(z,w), v3;
    v1.print();
    v2.print();

    v3 = v1 + v2;
    v3.print();
    return 0;
}

Vetor2d::Vetor2d(float mx, float my)
{
    x = mx;
    y = my;
}



Vetor2d Vetor2d::operator+(Vetor2d v)
{
    Vetor2d ret;
    ret.x = x + v.x;
    ret.y = y + v.y;
    return ret;
}

void Vetor2d::print()
{
    std::cout << "("  << x << "," << y << ")\n";
}
