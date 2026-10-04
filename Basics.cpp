#include<iostream>
int main(){
using namespace std;
int score[100];
int i;
cout<<"Enter the scores of 10 students: ";
for(i=0;i<10;i++){
    cin>>score[i];
}
cout<<"The scores of the students are: ";
for(i=0;i<10;i++){
    cout<<score[i]<<" ";


}
return 0;
}