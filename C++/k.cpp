#include<bits/stdc++.h>
using namespace std;

typedef long long int lld;
typedef long int ld;

vector<int> people;
vector<int> combination;

void pretty_print(const vector<int>& v)
{
    static int count = 0;
    //cout << "combination no " << (++count) << ": [ ";
    for (int i = 0; i < v.size(); ++i)
    {
        if(i!=0) cout<<" ";
        cout << v[i] ;
    }
    cout << endl;
}

void go(int offset, int k)
{
    if (k == 0)
    {
        pretty_print(combination);
        return;
    }
    for (int i = offset; i <= people.size() - k; ++i)
    {
        combination.push_back(people[i]);
        go(i+1, k-1);
        combination.pop_back();
    }
}

int main()
{
    //freopen("inp.txt","rt",stdin);
    int n , k = 6;

    lld cases = 0;
    while(cin>>n){
        cases++;

        if(n==0) break;
        if(cases!=1) cout<<endl;
        while(n--){
            int k;
            cin>>k;
            people.push_back(k);
        }
        sort(people.begin(),people.end());
        go(0, k);
        //cout<<endl;
        people.clear();
        combination.clear();
    }

    return 0;
}
