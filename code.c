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
           

        }
        printf("\n");
        } 
return 0;

}
int ball_bounce(int arr[10][20]){
    int j =0;
    int ydir=1;
    int xdir=1;
    int i =0;
    while(i<10&&j<20&&i>=0&&j>=0){
        
         arr[i][j]=0;
         arr[i+ydir][j+xdir]=1;
         if (arr[i-2*(xdir)][j-2*(ydir)]==4)
         {
          ydir=1;
         }
         if (arr[i+2*(xdir)][j+2*(ydir)]==5)
         {
          ydir=-1;
         }
         if (arr[i+2*(xdir)][j+2*(ydir)]==2)
         {
          xdir=1;
         }
         if (arr[i+2*(xdir)][j+2*(ydir)]==3)
         {
          xdir=-1;
         }
          if (xdir==1)
         {
          j++;
         }
         if (xdir==-1)
         {
          j--;
         }
         if (ydir==1)
         {
          i++;
         }
          if(ydir==-1){
          i--;
         }
         
         
         
         
         
         
         system("cls");
         
         printer(arr);
         Sleep(150);

    }
    return 0;
}
int main(){
     int arr[10][20]={
    //   1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 20
        {2,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,3},
        {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {2,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,3}

    };
    
    ball_bounce(arr);
}