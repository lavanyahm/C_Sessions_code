//Struct with typedef
#include<stdio.h>

struct Line_Point{
  int x;
  int y;
};
typedef struct Line_Point LP;
int main() {
    LP p1;
    p1.x = 1;
    p1.y = 3;
    printf("%d \n", p1.x);
    printf("%d \n", p1.y);
    return 0;
}
