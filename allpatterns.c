#include<stdio.h>

int main(){

    //4x4 rectangle 

    // int a=4;
    // for (int i=0;i<4;i++){

    //     for (int j=0;j<4;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // code for pyramid
    // int a=5;
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<2*(a-i)-1;j++){

    //         printf(" ");
    //     }
    //     for (int k = 0; k < 2 * i + 1; k++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }


    // hollow rectangle of 4x5

    // int n=4;
    // int m=5;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         if(i==n || j==m || i==1 || j==1){
    //             printf("* ");
    //         }
    //         else{
    //             printf("  ");
    //         }
        
    //     }
    //     printf("\n");
    // }



    // left triangle
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    // right triangle(top down with spaces)
    // for(int i=1;i<=4;i++){
    //     for(int k=1;k<i;k++){
    //         printf(" ");
    //     }
    //     for(int j=1;j<=5-i;j++){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }


    //Floyd's triangle
    // int a=1;
    // for(int i=1;i<=5;i++){
        
    //     for(int j=1;j<=i;j++){
            
    //         printf("%d ",a);
    //         a++;
    //     }
    //     printf("\n");
    // }

    //hollow right triangle 
    // int a=10;

    // for (int i=1;i<=a;i++){
    //     for(int j=1;j<=i;j++){
    //         if(i==a||j==1||i==j){
    //             printf("*");
    //         }
    //         else{
    //             printf(" ");
    //         }
            
    //     }
    //     printf("\n");
    // }



    // Pascals triangle(3 diff questions )
    // int a=7;
    // for(int row=1;row<=a;row++){

    //     for(int j=1;j<=a-row;j++){
    //         printf(" ");
    //     }
    //     int x=1;

    //     for(int col=1;col<=row;col++){
    //         printf("%d ",x);
    //         x=x*(row-col)/col;
    //     }
    //     printf("\n");
    // }


    return 0;
}