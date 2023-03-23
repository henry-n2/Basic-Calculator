#  include <stdio.h>
#  include <math.h>

int main(){
    printf("Hi!\n");
    printf("This is a Calculator\n");
    printf("**It can only perform basic maths operation\n");
    printf("Created by @henry-n2\n");
    printf("Booting.......\n");
    printf("Start!\n");
    int choice ; double a ; double b; 
    printf("Which operation you want to do?\n");
    printf("For '+' Enter 1\nFor '-' Enter 2\nFor 'x' Enter 3\nFor '/' Enter 4\n==>");
    scanf("%d",&choice);
    //Wrong Input handle
    if (choice > 4)
    {
        printf("Wrong Input\n");
        printf("Exiting.....\n");
        printf("Thanks---@henry-n2");
    }else if (choice<1)
    {   
        printf("Wrong Input\n");
        printf("Exiting\n");
        printf("Thanks---@henry-n2");
    }else{
        printf("Now enter a number\n==>");
    }
    scanf("%lf",&a);
    printf("Now enter another number\n==>");
    scanf("%lf",&b);
    //Main
    if (choice==1)
    {
        printf("The result of adding %lf and %lf is= %lf" , a ,b ,a+b);
    }else if (choice==2)
    {
        printf("The result of substracting %lf and %lf is= %lf" , a ,b ,a-b);
    }else if (choice==3)
    {
        printf("The result of multiplying %lf and %lf is= %lf" , a ,b ,a*b);
    }else if (choice==4)
    {
        printf("The result of devidig %lf and %lf is= %lf" , a ,b ,a/b);
    }
    return 0;
}