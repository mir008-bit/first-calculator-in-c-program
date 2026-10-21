#include<stdio.h>
int main(){
 // we will make a calculator in c programming
 // this calculator , will have a +,-,*,/,% and //
    int x;
    int y;
    int z;
    printf("to select a particular function in the calculator \n");
    printf("+ sign is given with 1 number\n");
    printf("- sign is given with 2 number\n");
    printf("* sign is given with 3 number\n");
    printf("/ sign is given with 4 number\n");
    printf("%% sign is given with 5 number\n");
   
    printf("choose your number:\n");
    scanf("%d",&x);
    printf("choose the first number:\n");
    scanf("%d",&y);
    printf("choose your second number:\n");
    scanf("%d",&z);

    if(x==1){
        printf("sum of the numbers =%d \n",y+z);

    }else if(x==2){
        printf("subtraction of one number with the second =%d\n",y-z);
    }else if(x==3){
        printf("multiplication of one number with the second =%d\n",y*z);
    }else if(x==4){
        printf("divide of one number with the second =%d\n",y/z);
    }else if(x==5) {
        printf("modulous of one number with the second =%d\n",y%z);
    } else {
        printf("Invalid function\n");
    }
  printf("PROGRAM FINISHED THANKS!!\n");
    return 0;
}


