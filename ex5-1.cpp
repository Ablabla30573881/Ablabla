#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<10;i++){
        cout<<endl;
      for(int j=1;j<10;j++){
          if ((i*j)<10){
              cout<<i<<"*"<<j<<"=0"<<(i*j)<<"  ";
          }
          if ((i*j)>=10){
              cout<<i<<"*"<<j<<"="<<(i*j)<<"  ";
          }
            
      }
    }
}
