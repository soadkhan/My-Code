#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....

int main(void) {
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);

    long long int  n ,  a, b, c, real ;
    cin>>n>>a>>b>>c;
    real = n%4 ;

    if(real == 0 ) cout<<0<<endl;
    else if (real == 1){
        long long int min1 = 3*a ;
        long long int min2 = a + b ;
        long long int min3 = c ;
        cout <<min ( min( min1 , min2) , min3 )<<endl;
    }
    else if(real == 2){
        long long int min1 = 2*a ;
        long long int min2 = b ;
        long long int min3  = 2*c ;
        cout<<min ( min(min1 , min2) , min3 )<<endl;
    }
    else if(real == 3){
        long long int min1 = a ;
        long long int min2 = 3*c ;
        long long int min3  = b+c ;
        cout<<min (min(min1 , min2 ) , min3 )<<endl;
    }

    return 0;
}


