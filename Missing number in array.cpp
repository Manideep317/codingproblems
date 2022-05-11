class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
         int sum=0;
        int missingnumber;
        for(int i:array){
            sum=sum+i;
        }
        int sumofallnumber;
        sumofallnumber= (n*(n+1))/2;
        missingnumber= sumofallnumber-sum;
        return missingnumber;
    }
};
