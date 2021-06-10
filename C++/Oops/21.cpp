#include<bits/stdc++.h>
using namespace std;


    void findMaxConsecutiveOnes(int nums[]) {
        int length = sizeof(nums)/sizeof(nums[0]);
        int maxm_ones = 0;
        int max_so_far = 0;
        for(int i=0;i<length;i++){
            while(nums[i]==1){
                maxm_ones++;
                i++;
                
            }  
            if(max_so_far < maxm_ones){
                    max_so_far = maxm_ones;
                maxm_ones = 0;
                 }
        }
        cout << max_so_far;
    }
        
    


int main()
{
    int nums[6]={1,0,1,1,1,0};
    findMaxConsecutiveOnes(nums);
    
    return 0;
}