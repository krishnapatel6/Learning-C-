#include<stdio.h>

int main(){
    int physics, chemistry, maths;
    float total;
    printf ("Enter the physics marks\n");
    scanf ("%d", &physics);

    printf ("Enter the chemistry marks\n");
    scanf ("%d", &chemistry);

    printf ("Enter the maths marks\n");
    scanf ("%d" , &maths);
    total =( physics+chemistry+maths)/3;    
    if ((total<40) || physics<33 || chemistry<33 || maths<33 ){
    printf ("Your total percantage is %f and you are fail\n", total);
    }
    else {
        printf ("Your total percantage is %f and you are pass\n", total);
    }
    return 0;
}