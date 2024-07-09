#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main(){
    goodmorning();
    return 0;
}
void goodmorning(){
    printf ("goodmorning\n");
    goodafternoon();
}
void goodafternoon(){
    printf("goodafternoon\n");
    goodnight();
}
void goodnight(){
    printf("good night\n");
}