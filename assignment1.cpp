#include <iostream>
#include<string>
#include <sha256>
bool check(string s){
for(int i=0;i<5;i++){
    if(s[i]!='0'){
        return false;
    }
}
return true;
}
int main() {
   string s;
   cin>>s;
   string temp; int i=0;
   while(true){
       if(check(s+to_string(i))){
           cout<<i;
           return 0;
       }
       i++;
   }
   

    return 0;
}
