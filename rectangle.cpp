string solve(vector<vector<int>> coordinates) {
    
    int minx=coordinates[0][0];
    int miny=coordinates[0][1];
    int maxx=coordinates[0][0];
    int maxy=coordinates[0][1];
    int n=coordinates.size();
    for(int i=0;i<n;i++){
        minx=min(minx,coordinates[i][0]);
        maxx=max(maxx,coordinates[i][0]);
        
        maxy=max(maxy,coordinates[i][1]);
        miny=min(miny,coordinates[i][1]);
    }
    
    
    for(int i=0;i<n;i++){
        if(coordinates[i][0]==minx or coordinates[i][0]==maxx){
            if(coordinates[i][1]<=maxy and coordinates[i][1]>=miny){
                
            }else{
                return "NO";
            }
        }else if(coordinates[i][1]==miny or coordinates[i][1]==maxy){
            if(coordinates[i][0]<=maxx and coordinates[i][0]>=minx){
                
            }else{
                return "NO";
            }
        }else{
            return "NO";
        }
    }
    return "YES";
}