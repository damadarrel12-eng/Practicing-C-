#include<stdio.h>
#include<math.h>

int exist;
int r;
int counter = 0;
int hash[];
int result[];

int hash(int N){
    do{
        exist = 0;
        r = rand()%N +11;
        if(r%2 !== 0){
            for(i=count-1;i<=0){
                if(i == hash[i]){
                    exist = 1;
                    break;
                }
            }
            if(exist == 0){
                hash[count] = r;
                count++;
            }
        }

    }while(count != 5)
}
struct studInfo{

    int hashcode;
    int average;

}
struct studInfo studResult = {11,15};
int initStudInfo(){
    int Sn, average
    printf("Enter value of Sn");
    scanf("%d", &Sn);
    printf("Enter value of average");
    scanf("%d", &average);

    return Sn,average;
}