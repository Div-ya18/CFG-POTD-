class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int A[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		int startRow=0;
    int startCol=0;
    int endRow=n-1;
    int endCol=m-1;
    int count=0;
while(startRow<=endRow && startCol<=endCol&&count!=k)
{
   //top
   for(int j=startCol;j<=endCol;j++)
   {
        count++;
       if(count==k)
       {
        return A[startRow][j];
       }
      }
   //right
   for(int i=startRow+1;i<=endRow;i++)
   {
          count++;
       if(count==k)
       {
       return A[i][endCol];
       }
     }
   //bottom
   for(int j=endCol-1;j>=startCol;j--)
   {
       count++;
       if(count==k)
       {
           return A[endRow][j]; 
       }
       }
   //left
   for(int i=endRow-1;i>=startRow+1;i--)
   {
       count++;
       if(count==k)
       {
          return A[i][startCol];
       }
       }
   startRow++;
   startCol++;
   endRow--;
   endCol--;
}
 return -1;
    }    
};


