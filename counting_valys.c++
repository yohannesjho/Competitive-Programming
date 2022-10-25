int countingValleys(int steps, char* path) {
     int level=0;
     int count=0;
    for(int i=0;i<steps;i++){
        if(path[i]=='U') level++;
        else if(path[i]=='D') level--;
        
        (level==-1 && path[i+1]=='U')? count++:2+4;
    }
    return count;
}