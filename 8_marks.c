#include<stdio.h>

int main(){
    int marks [5][1];
    printf("Enter marks for subject: \n");
    for(int i=0; i<5; i++){
        scanf("%d", &marks[i][0]);
    }
    int tmarks =0;
    for(int i=0; i<5; i++){
        tmarks += marks[i][0];
    }
    printf("Total marks: %d\n", tmarks);

    float percentage = (tmarks / 500.0) * 100;
    printf("Percentage: %.2f\n", percentage);
    
    //Pass/Fail
    int pass = 1;
    for(int i=0; i<5; i++){
        if(marks[i][0] < 40){  
            pass = 0;
            break;
        }
    }
    if(pass){
        printf("Result: Pass\n");
    } else {
        printf("Result: Fail\n");
    }

    if(percentage >= 75){
        printf("Grade: Distinction\n");
        }
        else if(percentage >= 60 && percentage <75){
            printf("Grade: First Division\n");
        }
        else if(percentage >= 50 && percentage <60){
            printf("Grade: Second Division\n");
        }
        else if(percentage >= 40 && percentage <50){
            printf("Grade: Third Division\n");
        }
        else{
            printf("Grade: F\n");
    } 
    return 0;
}