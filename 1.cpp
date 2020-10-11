#include <stdio.h>
struct score{
    float point[5];
    float weight[5];
}var;
struct score input();
void grade(struct score temp);

int main(){
    input();
    return 0;
}

struct score input(){
    int i;
    struct score studentScore;

    for(i = 0 ; i < 5 ; i++){
        printf("#%d student score : ",i+1);
        scanf("%f",&studentScore.point[i]);
        printf("#%d weight : ",i+1);
        scanf("%f",&studentScore.weight[i]);
    }
    grade(studentScore);
    return studentScore;
}

void grade(struct score temp){
    float ave,gradeSum=0,wSum=0;
    int i;
    for(i=0 ; i<5 ; i++){
        ave = temp.point[i];
        wSum += temp.weight[i];
        if(ave >= 80 && ave < 100) {
            gradeSum += 4 * temp.weight[i];
        }
        if(ave >= 75 && ave < 80) {
            gradeSum += 3.5 * temp.weight[i];
        }
        if(ave >= 70 && ave < 75) {
            gradeSum +=  3 * temp.weight[i];
        }
        if(ave >= 65 && ave < 70) {
            gradeSum += 2.5 * temp.weight[i];
        }
        if(ave >= 60 && ave < 65) {
            gradeSum += 2 * temp.weight[i];
        }
        if(ave >= 55 && ave < 60) {
            gradeSum += 1.5 * temp.weight[i];
        }
        if(ave >= 50 && ave < 55) {
            gradeSum += 1 * temp.weight[i];
        }
    }
    printf("Your ave grade is %.2f",gradeSum/wSum);
}