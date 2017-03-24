#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <bitset>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<string,int> si;
typedef pair<int,ii> iii;
typedef vector <si> vsi;
typedef vector <ii> vii;
typedef vector <int> vi;
typedef vector <char> vc;
typedef vector <string> vs;
typedef map <string,vs> msvs;
typedef map <string,int> msi;
typedef map <string,string> mss;
#define INF 1000000000

msi visited;
mss route;

int dx[]={0, 1, 0, -1};
int dy[]={-1, 0, 1, 0};

void bfs(string s, string e, msvs graph){
	queue<string> q;
	visited[s]=0;
	q.push(s);
	while(!q.empty()){
		string top = q.front();q.pop();
		if(top==e)
			break;
		for (int i = 0; i < graph[top].size(); ++i)
		{
			if(!visited.count(graph[top][i])){
				visited[graph[top][i]]=visited[top]+1;
        		q.push(graph[top][i]);
        		route[graph[top][i]]=top;
			}
		}
	}
}

void printPath(string e,string s){
	if(e==s){printf("%c",s[0]);return;}
  printPath(route[e],s);
  printf("%c",e[0]);
}

void print_them(string start , string endi ){
    vector<string>lists ;
    lists.push_back(endi) ;
    string hand = route[endi] ;
    while(hand != start ){
        lists.push_back(hand) ;
        hand = route[hand] ;
    }

    lists.push_back(start) ;

    ll l = lists.size() ;
    for(ll i = l-1 ; i>=0 ; i--)
        cout<<lists[i][0] ;

}


int main(){
    freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);
	int t;scanf("%d",&t);
	while(t--){
		int m,n;
		scanf("%d %d",&m,&n);
		msvs grahp;
		string a,b;
		for (int i = 0; i < m; ++i)
		{
			cin>>a>>b;
			grahp[a].push_back(b);
			grahp[b].push_back(a);
		}
		string s,e;
		for (int i = 0; i < n; ++i)
		{
			cin>>s>>e;
			visited.clear();
			route.clear();
			bfs(s,e,grahp);
			//printPath(e,s);
			print_them(s,e) ;
			printf("\n");
		}
		if(t != 0){
	      printf("\n");
	    }
	}
 return 0;
}
