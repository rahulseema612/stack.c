#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX];
int top=-1;
// void clrscr() {
//     // \e[1;1H moves the cursor to row 1, column 1
//     // \e[2J clears the entire screen
//     printf("\033[1;1H\033[2J");
// }
int push(){
    if(top==MAX-1){
        printf("Stack overflow");
        int emni;
        scanf("%d",&emni);
        return 0;
    }
    int count=0;
    printf("Enter how many data you want to push\ntotal data is %d\n",top+1);
    scanf("%d",&count);
    if(count<=(MAX-top)){
        printf("Enter data\n");
        int temp=0;
        for(int i=1;i<=count;++i){
            scanf("%d",&temp);
            stack[++top]=temp;
        }
        return 1;
    }
    else{
        printf("you cant insert total %d data in stack try less\n",count);
        int emni;
        scanf("%d",&emni);
        return 0;
    }
    return 0;
}
int pop(){
    if(top==0){
        printf("Stack underflow\n");
        int emni;
        scanf("%d",&emni);
        return 0;
    }
    else{
        --top;
        return 1;
    }
    return 0;
}
void disp(){
    for(int i=top;i>=0;--i){
        printf("%d ",stack[i]);
    }
    int emni;
    scanf("%d",&emni);
}
int main(){
    rahul:
        system("cls");
        printf("Enter 1 for push\nEnter 2 for pop\nEnter 3 for display\nEnter 4 for exit\n");
        int op;
        scanf("%d",&op);
        switch(op){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                disp();
                break;
            case 4:
                return 0;
        }
        goto rahul;

}
