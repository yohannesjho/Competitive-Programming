void countSwaps(vector<int> a) {
    int n=a.size();
    int temp;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
           if(a[j]>a[j+1]){
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
               count++;
           } 
        }
    }
    cout<<"Array is sorted in "<<count<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1];
}