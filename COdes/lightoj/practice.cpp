

#include<cstdio>
#include<cmath>
#include<vector>
#include<cstring>
#include<map>
#include<queue>

using namespace std;

#define sf scanf
#define pf printf
#define psb push_back

const int high = 20009;
const int BLACK = 1;
const int RED = 2;
const int WHITE = 0;

vector<int>adj[high];
int ans=0 , color[high] , vampire=0 , lykan=0;

void adj_clear()
{
    for(int i=0; i<high; i++)
    {
        adj[i].clear();
    }
}

void BFS(int s)
{
    queue<int>Q;
    color[s] = BLACK; // consider it as a vampire=black
    vampire++;
    Q.push(s);

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        //printf("size is  %d\n",adj[u].size());

        for(int i=0; i<adj[u].size(); i++)
        {
            int v = adj[u][i];

            if(color[v] == WHITE)
            {
                Q.push(v);

                if(color[u] == BLACK)
                {
                    color[v] = RED;
                    lykan++;
                }

                else
                {
                    color[v] = BLACK;
                    vampire++;
                }
            }
        }
    }
}

int main()
{
    int t , tc=0 , u , n , v , i=0;

    sf("%d", &t);

    while(t--)
    {
        adj_clear();
        memset(color , 0 , sizeof color);

        vampire = 0;
        lykan = 0;
        ans = 0;

        sf("%d", &n);

        for(i=0; i<n; i++)
        {
            sf("%d %d", &u , &v);

            adj[u].psb(v);
            adj[v].psb(u);
        }

        for(i=0; i<high; i++)
        {
            if(!adj[i].empty() and color[i] == WHITE)
            {
                vampire = 0;
                lykan = 0;

                BFS(i);

                ans += max(vampire , lykan);
            }
        }

        pf("Case %d: %d\n" , ++tc , ans);
    }

    return 0;
}
