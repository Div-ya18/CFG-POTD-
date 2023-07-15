//Approach 1
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
         bool ans=false;
        //set<vector<int>>st;
        for(int i=0; i<n-1;i++){
            set<int> hashset;
            for(int j =i+1; j<n; j++){
                int third = -(arr[i]+arr[j]);
                if(hashset.find(third)!=hashset.end()){
                    ans = true;
                    break;
                }
                else 
                hashset.insert(arr[j]);
            }
            if(ans) break;
        }
        return ans;
    }
};

//Approach 2 

/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        sort(arr,arr+n);
        int i,m,l;
        for(i=0; i<n-1; i++){
            l=i+1;
            m=n-1;
            while(l<m){
            if(arr[l]+arr[m]+arr[i]==0)
            {
                return true;
            }
            else if(arr[l]+arr[m]+arr[i]<0){
                l++;
            }
            else 
            m--;
        }
        }
        return false;
        //Your code here
    }
};
