#include<stdio.h>

struct stack{
    int arr[5];
    int tos;
};

// function Declarations
void push(struct stack *,int);
int pop(struct stack *);
void peep(struct stack *);
void display(struct stack *);

//function definitions ...
void push(struct stack * s,int n){
    if(s->tos==4){
        printf("\nStack Overflow !!");
        return ;
    }
    s->tos=s->tos+1;
    s->arr[s->tos]=n;
    printf("Successfully pushed %d\n",n);
    return ;
} 

int pop(struct stack *s){

    int num;

    if(s->tos==-1){
        printf("\nStack underflow !!");
        return -1;
    }

    num = s->arr[s->tos];
    s->tos=s->tos-1;

    return num;

}

void peep(struct stack *s){
    int n;

    if(s->tos==-1){
        printf("\nstack underflow !!");
        return ;
    }
    n = s->arr[s->tos];
    printf("Element present at top is : %d",n);
}

void display(struct stack *s){
     if(s->tos==-1){
        printf("stack underflow !!");
        return ;
    }
    printf("Elements present in stack are :\n");

    for(int i = s->tos ; i >= 0 ; i--){
       printf("%d ",s->arr[i]);
    }
    return ;
}

// we have completed all are functions ....
// now we complete the int main();.....

int main(){
    struct stack s;
    s.tos=-1;

    int choice;

    do{
        printf("\nAvailable options :\n1 for push\n2 for pop\n3 for peep\n4 for display\n5 for Quit\n");
       
        printf("Enter Choice :");
        scanf("%d",&choice);
       
       switch(choice){

         case 1:{
            int n;
            printf("\nEnter number to be pushed :");
            scanf("%d",&n);
            push(&s,n);
            
            break;
         }

         case 2:{
            int n;
            n = pop(&s);
            if(n!=-1)
                printf("Successfully poped %d",n);  

            break;
         }

         case 3:{
            peep(&s);
            break ; 
         }

         case 4:{
            display(&s);
            break ; 
         }

         case 5:{
            printf("\nThanks for using application");
            break;
         }

         default:
            printf("\nWrong choice Dear friend !!");

       }

      
    }while(choice!=5);

    return 0;
}