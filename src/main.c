#include <stdio.h>

<<<<<<< HEAD
// declare function defined in asm
int procedure(char c1, char c2);

int main() {

    // declare input charactersand result
    char c1, c2, r;

    // get the input character from stdin
    printf("Please enter two single digit numbers separated with a return.\n");
    scanf("%c\n%c", &c1, &c2);

    // run the procedure and place value in r
    r = procedure(c1, c2);

    // print the result
    printf("The result is %d\n", r);
    
    // return success code 0
=======
int procedure(int x, int y, int z);
int procedure2(char c);

int main() {
    int x = 1, y = 10, z = 100, r1;

    //scanf("%d%d%d", &x, &y, &z);

    r1 = procedure(x,y,z);
    
    printf("The result is %d\n", r1);

    char c = '2', r2;
    r2 = procedure2(c);
    printf("The second result is %d\n", r2);
    

>>>>>>> 4a4ee21
    return 0;
}
