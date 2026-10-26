#include<stdio.h>
void display(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d is even ",a);
    }
    else{
        printf("%d is odd",a);
    }
    return ;
}
int main(){
    display();
    return 0;
    
}