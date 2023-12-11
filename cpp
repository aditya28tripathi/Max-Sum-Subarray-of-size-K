class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long sum = 0;
        
        for(int i = 0;i<K;i++){
            sum = sum + Arr[i];
        }
     long max_sum = sum;
     
     for(int i=K;i<N;i++){
         sum = sum + Arr[i];
         
         sum = sum - Arr[i-K];
         max_sum = max(max_sum,sum);
         
     } 
     
     return max_sum;
     }
};
