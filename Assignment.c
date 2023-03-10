#include <stdio.h>
int main(){
    int m;
    printf("Enter the value of m : ");
    scanf("%d",&m);
    if(m%3==0 && m%5==0){
    printf("Good number\n");
    }else if(m%3==0){
    printf("Bad number\n");
    }else if(m%5==0){
    printf("Poor number\n");
    }else{
    printf("-1\n");
    }
    return 0;
}
