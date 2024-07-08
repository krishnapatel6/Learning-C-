#include<stdio.h>
void display();// function prototype
int main(){
    printf ("Line 1\n");
    display(); // function call
    printf("line 3\n");
    printf("Line 4\n");
    return 0;
}
// function definition
void display(){
    printf("Line 2\n");
}