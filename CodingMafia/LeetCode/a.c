// Stack with integers
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10

// void pop();
// void push(char ch);
// void display();

struct stack
{
  char item;
  char stack[size];
}s;

int top=-1;

void push(char ch)
{
  if(top==size-1)
  {
    printf("\n stack is full");
  }
  else
  {
    // top=top+1;
    // printf("\n\n Enter element in stack: ");
    fflush(stdin);
    // scanf("%c",&s.item);
    s.stack[++top]= ch;
  }
}

void pop()
{
  if(top==-1)
  {
    printf("\nStack is empty: ");
  }
  else
  {
    s.item=s.stack[top];
    top=top-1;
    printf("deleted data is: %c",s.item);
  }
}

  void display()
  {
    int i;
    if(top==-1)
    {
    printf("\n Stack is empty: ");
    }
    else
    {
      for(i=top;i>=0;i--)
      {
        printf("\n%c",s.stack[i]);
      }
    }
  }

int main()
{
  int inp;
  char ch;
  do
  {
  printf("\n1: push");
  printf("\n2: pop");
  printf("\n3: display");
  printf("\n4: exit");
  printf("\nEnter your choice: ");
  scanf("%d",&inp);
    switch(inp)
    {
      case 1:
      {
        printf("Enter the character : ");
        fflush(stdin);
        scanf("%c",&ch);
        // push(ch);
        printf("%c",&ch);
      	break;
      }
      case 2:
      {
        pop();
      	break;
      }
      case 3:
      {
        display();
      	break;
      }
      case 4:
      {  
        exit(0);
      	break;
      }
      default:
      {
        printf("\nwrong choice");
        break;
      }
    }
  }
  while(1);
return 0;  
}
