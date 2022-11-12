#include<iostream>
#include<thread>
#include<chrono>

#define lli unsigned long long 
lli oddSum=0,evenSum=0;

void findEven(lli start,lli end){
    while(start<=end){
        if(start%2==0){
            evenSum+=start;
        }
        start++;
    }
}

void findOdd(lli start,lli end){
    while (start<=end)
    {
        if(start%2==1) oddSum+=start;
        start++;
    }
    
}

int main(){
    lli start=0,end=1900000000;
    auto startTime=std::chrono::high_resolution_clock::now();
    findEven(start,end);
    findOdd(start,end);
    auto stopTime=std::chrono::high_resolution_clock::now();
    auto duration=std::chrono::duration_cast<std::chrono::seconds>(stopTime-startTime);
    std::cout<<duration.count()<<std::endl;
}