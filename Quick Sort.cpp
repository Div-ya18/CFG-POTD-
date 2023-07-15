class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low<high){
        int pi = partition(arr, low, high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1, high);}
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int pivot =arr[low];
       int i = low+1;
       for(int j=low+1; j<=high; j++){
           if(arr[j]<pivot){
               swap(arr[i],arr[j]);
               i++;
           }
       }
       swap(arr[i-1],arr[low]);
       return i-1;
    }
};
