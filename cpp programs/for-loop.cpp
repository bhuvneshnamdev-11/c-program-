//loop: to print name 
#include<iostream>
using namespace std;
int main() {
   //int i; 
   //for(i=1; i<=5; i++) {
    //cout << "bhuvnesh" << endl;
   //}   

   //int i=1;
   //for (; i<=5; i++){
   //cout << "bhuvnesh" << endl;
   //}



    // for (int i = 1; ;i++)
    //{
    //cout << "bhuvensh" << endl;   
    //if(i == 5) 
      //break; 
    //}

   // for(int i=1; i<=10; i++) {
     //   cout << " " << i ;
       // if(i == 5) {
         //   break;
        //}
        //cout << "iteration" << i << endl;
    //}
    
    for(int i=1; i<=5; i++) {
        if(i == 3) {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}