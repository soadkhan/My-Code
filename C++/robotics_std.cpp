#include<bits/stdc++.h>
using namespace std;
bool flag  = true;
int led = 12;
int pori(int &ager){
  if(flag == true){
    if(ager==13){
        flag  = false;
        ager  = 12;
        return 12;
    }
    else{
        ager++;
        return (ager);
    }
  }
  else if(flag == false){
    if(ager == 9){
        flag = true;
        ager  = 10;
        return 10;
    }
    else {
        ager --;
        return (ager);
    }
  }
}
int main(){
    while(4){
        getchar();
        cout<<pori(led)<<endl;


    }
    return 0;
}
