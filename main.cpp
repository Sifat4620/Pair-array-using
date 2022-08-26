#include <bits/stdc++.h>
using namespace std;

int main(){
  pair<int,int> p_array[3];
  p_array[0]={1,3};
  p_array[1]={4,5};
  p_array[2]={7,8};
  //  before  swap
  for(int i=0;i<3;i++){
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
  }
  // after swap
  swap(p_array[0],p_array[2]);
cout<<"swap"<<endl;
  for(int i=0;i<3;i++){
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;

  }


}
