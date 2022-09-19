/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

    int num,idnum,amount,age;
    char username[50],password[20],location[500],c;
    FILE *fptr;

    printf("Please choice number (insert=1,find=2,update=3): ");
    scanf("%d",&num);
    if(num=1){
    fptr=fopen("information.txt","a");
    if(fptr==NULL){
        puts("File cannot open");
        exit(1);
    }
    else{
        puts("Enter your ID number,name,password,amount,age,location ");
        puts("Enter EOF to end input:");
        printf(">:");

        scanf("%d%s%s%d%d%s", &idnum, username, password, &amount, &age,location);

       while(!feof(stdin)){
            fprintf(fptr,"%d%10s%10s%10d%10d%10s%c", idnum, username, password, amount, age,location, '\n');
            printf(">:");
            scanf("%d%s%s%d%d%s", &idnum, username, password, &amount, &age, location);
        }
    }
     fclose(fptr);
}else if(num==2){

            fptr = fopen("information.txt","r");

            if(fptr == NULL){
                printf("File opening error");
                exit(0);
            }

           while(1){
            c=getc(fptr);
            if(c==EOF){
                break;
            }else{
                printf("%c",c);
            }
           }

           fclose(fptr);
          }else if(num==3){

            printf("Your update information is ");
    }
return 0;
}
