
/*
- It is used to find Largest Sum Contiguous Subarray.
- Concept is based on DP.
- Time Complexity : O(N)
- Space Complexity : O(1)
/*

int maxSubarraySum(int arr[], int n){
    
    int max_so_far = 0;
    int max_ending_here=0;
    
    for(int i=0;i<n;i++)
    {
      max_ending_here = max_ending_here+arr[i];
      if(max_so_far<max_ending_here)
      {
          max_so_far = max_ending_here;
      }
      
      if(max_ending_here<0)
      {
          max_ending_here=0;
      }
    }
    
    return max_so_far;
}
