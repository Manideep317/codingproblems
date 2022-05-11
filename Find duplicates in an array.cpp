  class solution{
    public:
      vector<int> duplicates(int arr[], int n) {
        // code here
          vector <int>v;
          int num=0;
          sort(arr,arr+n);
          for(int i=1;i<n;++i){
              if(arr[i-1]==arr[i] && arr[i]!=arr[i+1]){
                  v.push_back(arr[i]);
              }
          }
          if(v.size()==0){
              return {-1};
          }
          else{
              return v;
          }
        
        
      }
};
