#include<stdio.h>
#include<windows.h>



int printer(int arr[10][20]){
        for (int i = 0; i < 10; i++)
        {   
          for (int j = 0; j < 20; j++)
         {
           if(arr[i][j]==0){
                printf(" ");
           }
           if(arr[i][j]==2){
                printf("|");
           }
           if(arr[i][j]==3){
                printf("|");
           }
           if(arr[i][j]==4||arr[i][j]==5){
                printf("-");
           }
           if(arr[i][j]==1){
                printf("O");
           }
           if(arr[i][j]==8||arr[i][j]==10||arr[i][j]==12||arr[i][j]==15){
                printf("+");
           }

           

        }
        printf("\n");
        } 
return 0;

}
int ball_bounce(int arr[10][20]){
    int j =1;
    int ydir=1;
    int xdir=1;
    int i =1;
    arr[i][j]=1;
    int ni =0;
    int nj =0;
    while(i<9&&j<19&&i>=0&&j>=0){
           system("cls");
           printer(arr);
           Sleep(150);
           arr[i][j]=0;
           ni=i+ydir;
           nj=j+xdir;
          if (arr[ni][nj]==5||arr[ni][nj]==4){
               ydir=-ydir;
          }
          if (arr[ni][nj]==3||arr[ni][nj]==2){
               xdir=-xdir;
          }
          if (arr[ni][nj]==8||arr[ni][nj]==12||arr[ni][nj]==15||arr[ni][nj]==10){
               ydir=-ydir;
               xdir=-xdir;
          }
          i+=ydir;
          j+=xdir;
          arr[i][j]=1;
          
    }
    return 0;
}
int main(){
     int arr[10][20]={
    //   1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 20
        {8,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,12},
        {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {10,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,15}

    };
    
    ball_bounce(arr);
}