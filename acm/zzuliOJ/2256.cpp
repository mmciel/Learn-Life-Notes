 #include  <bits/stdc++.h>
 using namespace std;


 int main()
 {
     priority_queue<int,vector<int>, greater<int> > a;
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push(x);
     }
     int sum=0;
     while(a.size()>1){
        int k1=0,k2=0;
        k1 = a.top();
        a.pop();
        k2 = a.top();
        a.pop();
        sum+=k1+k2;
        //cout<<sum<<endl;
        a.push(k1+k2);
     }
    // sum += a.top();
     cout<<sum<<endl;
    return 0;
 }
