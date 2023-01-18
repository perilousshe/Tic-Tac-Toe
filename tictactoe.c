#include<stdio.h>
#include<stdlib.h>
char board[]={'0','1','2','3','4','5','6','7','8','9'};

void draw()
{  
    system("cls");
    printf("===Welcome to Tic Tac Toe===\n");
    printf("\n");
    printf("      |      |\n");
    printf("  %c   |   %c  |  %c\n",board[1],board[2],board[3]);
    printf("______|______|_____\n");
    printf("      |      |\n");
    printf("  %c   |   %c  |  %c\n",board[4],board[5],board[6]);
    printf("______|______|_____\n");
    printf("      |      |\n");
    printf("  %c   |   %c  |  %c\n",board[7],board[8],board[9]);
    printf("      |      |\n");

}
int checkwin()
{
    if(board[1]==board[4]&&board[4]==board[7])
    {
        return 1;
    }
    else if(board[2]==board[5]&&board[5]==board[8])
    {
        return 1;
    }
    else if(board[3]==board[6]&&board[6]==board[9])
    {
        return 1;
    }
    else if(board[1]==board[2]&&board[2]==board[3])
    {
        return 1;
    }
    else if(board[4]==board[5]&&board[5]==board[6])
    {
        return 1;
    }
    else if(board[7]==board[8]&&board[8]==board[9])
    {
        return 1;
    }
    else if(board[3]==board[5]&&board[5]==board[7])
    {
        return 1;
    }
    else if(board[1]==board[5]&&board[5]==board[9])
    {
        return 1;
    }
    int count=0;
    for(int i=1;i<=9;i++)
    {
        if(board[i]=='X'||board[i]=='O')
        {
            count++;
        }
    }
if(count==9)
{
    return 0;
}
return -1;
}

void main()
{    int input,status=-1,player=1;
char name[20],name2[20];
     draw();
     printf("Enter your name Player 1 :\n");
     scanf("%s",&name);
     printf("Enter your name Player 2 :\n");
     scanf("%s",&name2);

     while(status==-1)
     {
     player=(player%2==0)?2:1;
     char mark;
     if(player==1)
     {
        mark='X';
     }
     else{
        mark='O';
     }
     printf("Enter your Input player %d:\n",player);
     scanf("%d",&input);

     if(input<1||input>9)
     {
        printf("Invalid Input\n");
     }
    
    
     board[input]=mark;
     draw();
     int result=checkwin();
     if (result==1)
     {
       if(player==1)
       {
        printf(" %s Wins !\n",name);
        exit(0);
       }
       else{
        printf(" %s Wins !\n",name2);
         exit(0);
       }
     }
     else if(result==0)
     {
        printf(" Match Draw!\n");
        exit(0);
     }   
     
     
     player++;
}

}