//operaotr overloading 
#include<bits/stdc++.h>
using namespace std;

class Vector2{
    float x,y;
    public:
    Vector2(float x1,float y1){
        x = x1;
        y = y1;
    }

    Vector2 Add(const Vector2 &other) const{
        return Vector2(x +other.x, y +other.y);
    }
    Vector2 Multiply(const Vector2 &other) const{
        return Vector2(x *other.x, y *other.y);
    }

};

int main()
{
    Vector2 position(3.0f,5.0f);
    Vector2 speed(2.0f,4.0f);
    Vector2 boost(2.0f,2.0f);

    return 0;
}