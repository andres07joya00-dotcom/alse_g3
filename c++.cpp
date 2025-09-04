#include <iostream>
#define debug

struct point
{
    int x;
    int y;
};
int main(){
    point a;
    point b;
    a.x=0;
    a.y=0;
    b.x=1;
    b.y=1;
    #ifdef debug
        std::cout << "Punto A: (" << a.x << ", " << a.y << ")\n";
    #endif
    std::cout << "Punto B: (" << b.x << ", " << b.y << ")\n";
    /* code */
    return 0;
}
