#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll;

map<ll ,string >lists ;

void init(){
	lists[1] = "A" ;
	lists[2] = "B" ;
	lists[3] = "C" ;
	lists[4] = "D" ;
	lists[5] = "E" ;
	lists[6] = "F" ;
	lists[7] = "G" ;
	lists[8] = "H" ;
	lists[9] = "I" ;
	lists[10] = "J" ;
	lists[11] = "K" ;
	lists[12] = "L" ;
	lists[13] = "M" ;
	lists[14] = "N" ;
	lists[15] = "O" ;
	lists[16] = "P" ;
	lists[17] = "Q" ;
	lists[18] = "R" ;
	lists[19] = "S" ;
	lists[20] = "T" ;
	lists[21] = "U" ;
	lists[22] = "V" ;
	lists[23] = "W" ;
	lists[24] = "X" ;
	lists[25] = "Y" ;
	lists[26] = "Z" ;
	lists[27] = "Ab" ;
	lists[28] = "Ac" ;
	lists[29] = "Ad" ;
	lists[30] = "Ae" ;
	lists[31] = "Af" ;
	lists[32] = "Ag" ;
	lists[33] = "Ah" ;
	lists[34] = "Ai" ;
	lists[35] = "Aj" ;
	lists[36] = "Ak" ;
	lists[37] = "Al" ;
	lists[38] = "Am" ;
	lists[39] = "An" ;
	lists[40] = "Ao" ;
	lists[41] = "Ap" ;
	lists[42] = "Aq" ;
	lists[43] = "Ar" ;
	lists[44] = "As" ;
	lists[45] = "At" ;
	lists[46] = "Au" ;
	lists[47] = "Av" ;
	lists[48] = "Aw" ;
	lists[49] = "Ax" ;
	lists[50] = "Ay" ;
	lists[51] = "Az" ;
}

int main(){
	init() ;
	vector<string >ans;
	ll n , m ;
	cin>>n>>m ;
	ans.push_back("a") ;
	for(ll i = 1 ; i<= n ; i++)
        ans.push_back(lists[i]);
    for(ll i = 1 ; i<=n-m+1 ; i++){
        string ss ;
        cin>>ss ;
        if(ss == "NO")
            ans[i + m - 1] = ans[i] ;
    }
    for(ll i = 1 ; i<= n ; i++) cout<<ans[i]<<" "  ;
    cout<<endl;
	return  0 ;
}
