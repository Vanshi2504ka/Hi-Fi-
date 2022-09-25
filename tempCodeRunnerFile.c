#include <stdio.h>
#include<conio.h>
#include<malloc.h>
#include<ctype.h>
typedef struct stack
{
    int info;
    struct Stack *next;
}Stack;
Stack *start;
Stack* push(Stack *,int);
Stack*pop(Stack*);
int peep(Stack*);
int peep(Stack *rec)
{
    if(rec==NULL)
             printf("Stack is empty:");
    else
    {
        return rec->info;
    }
}
Stack* push(Stack*rec,int c)
{
    Stack*new race;
    new_rec = (Stack*)malloc(sizeof(Stack));
    new_rec->info=c;
    new_rec->next=rec;
    rec=new_rec;
    return rec;
}
