#include<bits/stdc++.h>
using namespace std;   
struct Triple{
	int u,v,w;   
}; 
 int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);

#endif  
 	int n;  
 	int m; 
 	cin>>n>>m;  
 	vector<Triple>adj;  
 	for(int i=0;i<m;i++){
 		int u,v,w;  
 		cin>>u>>v>>w; 
 		adj.push_back({u,v,w});  
 	}
 	
 	int distance[n+1];  
 	for(int i=0;i<=n;i++){
 		distance[i]=INT_MAX; 
 	}
 	
 	distance[0]=0;  
 	
 	for(int k=1;k<=n-1;k++){
 		for(int i=0;i<m;i++){
                int u=adj[i].u;  
                int v=adj[i].v;  
                int w=adj[i].w;  
 				if(distance[u]!=INT_MAX and distance[u]+w<distance[v]){
 					distance[v]=distance[u]+w;  
 				}

 		}
    for(int i=0;i<n;i++){
        cout<<distance[i]<<" "; 
    }
    cout<<endl;
 	}
    for(int i=0;i<n;i++){
        cout<<distance[i]<<" "; 
    }
    cout<<endl;
 	
 	
 }
 
 /*
sample:
6
7
0 1 100
0 2 50
0 5 5
3 1 1
2 3 1
5 1 50
3 4 10
 */
