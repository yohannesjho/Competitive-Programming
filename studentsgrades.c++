vector<int> gradingStudents(vector<int> grades) {
  int n= grades.size();
  for(int i=0;i<n;i++){
      if(grades[i]>37){
          int temp;
          for(int j=grades[i];j<grades[i]+5;j++){
              if(j%5==0) {
                  temp=j;
                  break;
              }
          }
          if(temp-grades[i]<3) grades[i]=temp;
      }
  }
  return grades;
  
}