#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....

typedef unsigned long long int ulld;
typedef long long int lld;
typedef long int ld;


lld mat[1000][1000] ;
lld ans[1000][1000] ;
lld r , c ;

lld fl = 0 ;

bool che_r_one(lld i ) {
    for(lld h = 0   ; h<c ;h++)
        if(mat[i][h] == 0) return false ;
    return true ;

}
bool che_c_one(lld i ) {
    for(lld h = 0 ; h<r ;h++)
        if(mat[h][i] == 0 ) return false;
    return true ;

}

bool eve_ze(){
    for(lld  i = 0  ; i<r ;i++)
        for(lld j = 0 ; j<c; j++)
            if(mat[i][j] == 1) return false ;
    return true ;
}

int is_che(){
    int re = mat[0][0] ;

    for(lld i = 0  ; i<r ; i++){
        for(lld j = 0 ; j<c ;j++){
            if(mat[i][j]!= re) return -1 ;
        }
    }

    return re ;

}
int main(void) {
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);
    cin>>r>>c  ;


    for(lld  i = 0; i<r ; i++)
        for(lld j = 0 ; j<c; j++)
            cin>>mat[i][j] ;

    if(r==1 && c==1){
        cout<<"YES"<<endl;
        cout<<mat[0][0]<<endl;
        return 0 ;
    }

    if(r==1 || c==1){
        lld re  = is_che() ;
        if(re == -1) {
            cout<<"NO"<<endl;
            return  0 ;
        }
        else{
            cout<<"YES"<<endl;
            for(lld  i  = 0 ; i<r; i++){
                for(lld j = 0 ; j<c ;j++){
                    cout<<re ;
                    if(j!=c-1) cout<<" ";
                }
                cout<<endl ;
            }
            return 0 ;
        }

    }

    for(lld  i = 0 ; i<r; i++){
        for(lld j = 0 ;j<c; j++){
            if(mat[i][j] == 0 ) ans[i][j] = 0 ;
            else{
                if(che_r_one(i) && che_c_one(j)) {
                    ans[i][j] = 1 ;
                    fl = 1 ;
                }
                else if(che_r_one(i) || che_c_one(j)) ans[i][j] = 0 ;
                else {
                    cout<<"NO"<<endl;
                    return  0 ;
                }
            }
        }
    }

    if(fl == 0 && !eve_ze()){
        cout<<"NO"<<endl ;
        return  0 ;
    }

    cout<<"YES"<<endl ;
    for(lld  i  = 0 ; i<r; i++){
        for(lld j = 0 ; j<c ;j++){
            cout<<ans[i][j] ;
            if(j!=c-1) cout<<" ";
        }
        cout<<endl ;
    }

    return 0;
}


