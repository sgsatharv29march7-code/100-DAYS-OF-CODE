//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.
 
 #include <stdio.h>

 int main(){
    int pc;
    printf("enter percentage");
    scanf("%d",&pc);
    if(pc>=90 && pc<=100){
        printf("Grade A");
    }
    if(pc>=80 && pc<90){
        printf("Grade B");
    }
    if(pc>=70 && pc<80){
        printf("Grade C");
    }
    if(pc>=60 && pc<70){
        printf("Grade D");
    }
    else {
        printf("Grade F");
        
    }


 }
