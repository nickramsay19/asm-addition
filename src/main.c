#include <stdio.h>

int procedure(int x, int y, int z);

int main() {
    int x = 1, y = 10, z = 100, r;
    
    //scanf("%d%d%d", &x, &y, &z);

    r = procedure(x,y,z);
    
    printf("The result is %d\n", r);
    return 0;
}
