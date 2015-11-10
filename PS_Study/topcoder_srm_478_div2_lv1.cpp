#include<iostream>
#include<vector>
using namespace std;
class KiwiJuiceEasy{
public :
  vector<int> thePouring(vector<int> capacities, vector<int> bottles, vector<int> fromId, vector<int> toId){
    for(int i=0;i<fromId.size();i++){
        int temp= bottles[fromId[i]]+bottles[toId[i]];
        if(temp>capacities[toId[i]]){
            bottles[toId[i]]=capacities[toId[i]];
            bottles[fromId[i]]=temp-capacities[toId[i]];
        }
        else{
            bottles[toId[i]]=temp;
            bottles[fromId[i]]=0;
        }
    }
    for(int i=0;i<bottles.size();i++)
    cout<<bottles[i] << " ";
    return bottles;

  }
};
int main(){
  int a[]={14, 35, 86, 58, 25, 62};
 vector<int> c,b,f,t,ans;
 for(int i=0;i<5;i++)
 b.push_back(5);
 b.push_back(8);
 f.push_back(0);
 t.push_back(1);
  KiwiJuiceEasy temp;
  temp.thePouring(c,b,f,t);

 return 0;
}



