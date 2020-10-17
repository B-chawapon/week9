#include <stdio.h>
struct Number{
    int num[10];
}number;
struct Number getNum(int enterNum);

int main(){
    int enterNum,i,j,max=0;
    struct Number array;
    printf("Enter number : ");
    scanf("%d",&enterNum);
    array = getNum(enterNum);
    for(i=0 ; i < 10 ; i++){
        if(array.num[i] > max){
            max = array.num[i];
        }
    }
    for(i = max ; i != 0 ;i-- ){
        for(j = 0 ; j<10 ;j++){
            if((i - array.num[j]) ==0 ){
                printf("*");
                array.num[j]--;
            }
            else if((i - array.num[j]) >0 ){
                printf(" ");
            }
            printf(" ");
            
        }
        
        printf("\n");
    }
    for(i=0 ; i < 10 ; i++){
        printf("%d ",i);
    }
    return 0;
}

struct Number getNum(int enterNum){
    int temp;
    while(true){
        temp = enterNum % 10 ;
    
        if(temp == 0 ){
            if((enterNum-1)%10 > 0){
                number.num[temp]++;
                enterNum = enterNum / 10;
            }
            if((enterNum-1)%10 < 0){
                break;
            }
        }
        if(temp !=0){
            number.num[temp]++;
            enterNum = enterNum / 10;
        }
    }
    getchar();
    return number;
} 

