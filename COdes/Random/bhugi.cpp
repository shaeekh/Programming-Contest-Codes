#include <bits/stdc++.h>
using namespace std;

#define pi acos(-1)

#define ull unsigned long long
#define ll long long
#define ld long double

#define VI vector<int>
#define QI queue<int>
#define SI stack<int>
#define LI list<int>
#define max 10007

int bfs(vector< int > conn[], int head, int TTL)
{
    int cnt=1;
    bool visit[max];
    memset(visit,false,sizeof(visit)/sizeof(visit[0]));
    int dist[max];
    //memset(dist,0,sizeof(dist)/sizeof(dist[0]));
    queue<int> level;
    level.push(head);
    visit[head] = true;
    dist[head] = 0;
    while(!level.empty()){
        int x = level.front();
        level.pop();
        for(int j=0; j<conn[x].size(); j++){
            if(!visit[conn[x][j]]){
                dist[conn[x][j]] = dist[x] + 1;
                if(dist[conn[x][j]]<=TTL){
                    cnt++;
                }
                level.push(conn[x][j]);
                visit[conn[x][j]] = true;
            }
        }
    }

    return cnt;

}

int main()
{
    int edge,cas=0;
    int a,b,p;
    while(1){
        cin>>edge;
        if(edge==0){
            break;
        }
        int cou=0;
        bool taken[max];
        memset(taken,false,sizeof(taken)/sizeof(taken[0]));
        vector< int > conn[max];
        for(int i=0; i<edge; i++){
            cin>>a>>b;
            conn[a].push_back(b);
            conn[b].push_back(a);
            if(taken[a]==false){
                taken[a]=true;
                cou++;
            }
            if(taken[b]==false){
                taken[b]=true;
                cou++;
            }
        }
        while(1){
            int initial,TTL;
            cin>>initial>>TTL;
            if(initial==0 && TTL==0){
                break;
            }
            int res = bfs(conn,initial,TTL);
            //cout<<cou<<" "<<res<<endl;
            cout<<"Case "<<++cas<<": "<<(cou-res)<<" nodes not reachable from node "<<initial<<" with TTL = "<<TTL<<"."<<endl;
        }
    }
    return 0;
}

