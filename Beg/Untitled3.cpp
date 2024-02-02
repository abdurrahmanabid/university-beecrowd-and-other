#include <bits/stdc++.h>
using namespace std;
void sumPower(long int x) {
   vector<long int> powers;
   while (x > 0){
      powers.push_back(x % 2);
      x = x / 2;
   }
   for (int i = 0; i < powers.size(); i++){
      if (powers[i] == 1){
            cout<<"2^";
         cout << i;
         if (i != powers.size() - 1)
            cout<<"+";
      }
   }
   cout<<endl;
}
int main() {
   int number ;
   int loop ;
   cin>>loop;
   for (int i=0;i<loop ;i++ ){
   cin>>number;
   sumPower(number);

   }
   return 0;
}
