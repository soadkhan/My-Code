#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <map>
#include <cstring>

using namespace std;

int main()
{
    int caseno, t;
    cin >> t;
    int dist[30000];

    for( caseno=1; caseno<=t; caseno++)
    {
        int n, num;
        cin >> n;

        int u,v,w;
        map < pair<int,int>, int> weight;
        vector <int> adj[30000];

        for( num=1; num<n; num++)
        {
            cin >> u >> v >> w;
            adj[u].push_back(v);
            adj[v].push_back(u);
            weight[make_pair(u,v)] = w;
            weight[make_pair(v,u)] = w;
        }

        int st = 0;
        int max_dist = 0;
        memset( dist, -1, sizeof(dist));
        queue <int> q;
        q.push(st);
        dist[0] = 0;

        while( !q.empty())
        {
            int pop = q.front();
            q.pop();

            vector <int>:: iterator it;

            for( it=adj[pop].begin(); it!=adj[pop].end(); it++)
            {
                if( dist[*it]<0)
                {
                    q.push( *it);
                    dist[*it] = dist[pop] + weight[make_pair(pop,*it)];
                    if( max_dist<dist[*it])
                    {
                        max_dist = dist[*it];
                        st = *it;
                    }
                }
            }
        }

        memset( dist, -1, sizeof(dist));
        q.push(st);
        dist[st] = 0;
        max_dist = 0;

        while( !q.empty())
        {
            int pop = q.front();
            q.pop();

            vector <int> :: iterator it;

            for( it=adj[pop].begin(); it!=adj[pop].end(); it++)
            {
                if( dist[*it]<0)
                {
                    q.push( *it);
                    dist[*it] = dist[pop] + weight[make_pair(pop,*it)];
                    if( max_dist<dist[*it]) max_dist = dist[*it];
                }
            }
        }
        cout << "Case " << caseno << ": " << max_dist << endl;
    }
    return 0;
}
