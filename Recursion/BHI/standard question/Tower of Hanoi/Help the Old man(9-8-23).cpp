long long count=0;

    void solve(vector<int> &v,int s,int d,int h,int n,int S){
        if(n==1){
            count++;
            if(count==S){
                v.push_back(s);
                v.push_back(d);
                return;
            }
            
            return;
            
        }
        
        
        solve(v,s,h,d,n-1,S);
        count++;
        if(count==S){
            v.push_back(s);
            v.push_back(d);
            return;
        }
        
        solve(v,h,d,s,n-1,S);
        
        
    }
    vector<int> shiftPile(int n, int S){
        
        vector<int> v;
        int s=1;
        int d=3;
        int h=2;
        
        solve(v,s,d,h,n,S);
        
        return v;
        
    }