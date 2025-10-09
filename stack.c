#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct stack
{
    int top;
    int data[SIZE]
};
int top = -1;
int data[SIZE];

void push(int item)
     {
         if(top==SIZE-1)
            printf("\n Stack overflow");
         else
         {
             top=top+1;
             data[top]=item;
         }
     }
void pop()
     {
         if(top==-1)
            printf("\n Stack Underflow");
         else
         {


            printf("\n Element popped is %d",data[top]);
         top = top-1;
         }
     }
void display()
     {
        int i;
        if(top==-1)
            printf("\n Stack is empty");
        else
        {
          printf("\n Stack content are in \n");
            for(i=top;i>=0;i--)
                printf("%d\n",data[i]);
        }
     }
int main()
{
    int ch,item;
    for(;;)
    {
        printf("\n 1.PUSH");
        printf("\n 2.POP");
        printf("\n 3.DISPLAY");
        printf("\n 4.EXIT");
        printf("\n Read Choice");
        scanf("%d",&ch);

        switch(ch)
              {
                  case 1 : printf("\n Read element");
                           scanf("%d",&item);
                           push(item);
                           break;

                  case 2 : pop();
                           break;

                  case 3 : display();
                           break;

                  case 4 : exit(0);
              }
    }

    return 0;
}

