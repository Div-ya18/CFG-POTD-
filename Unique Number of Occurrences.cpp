//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map <int, int> mp;
        
        for(int i=0; i<n; i++){   // 1 -> 2, 2 -> 1, 5 -> 2 {1,2,5,10,3} 
        mp[arr[i]]++; //mp[1]
        }
        
        unordered_set <int> s;
        
        for(auto i:mp){
            s.insert(i.second);   //2, 1, 2 set={1,4,2,3}
        }
       
        return (s.size()==mp.size()); // 2 == 5
    }
};
