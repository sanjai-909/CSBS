#include<iostream>
#include<algorithm>
#include<limits.h>
#include<vector>
#include<bits/stdc++.h>

#define maxsize 10

using namespace std;


namespace TravellingSalespersonProblem{
    
    int TSP(int cost[][maxsize],int n,int s){
      
      vector<int> vertex;
    
      for(int i=0;i<n;i++){
        if(i!=s){
          vertex.push_back(i);
        }
      }
      
      int minPath =INT_MAX;
  
     
     
	   while(next_permutation(vertex.begin(),vertex.end())){

	    int currentPathWeight =0;
	    int k=s;
	    
	    //n-1 must
	    for(int i=0;i<n-1;i++){
	      currentPathWeight +=cost[k][vertex[i]];
	    
	      k=vertex[i];

	    }
	    
	    currentPathWeight += cost[k][s];
	    minPath= min(minPath,currentPathWeight);
	    
	  }
	  
	 
	  return minPath;
	
	}
}


int main(){


  int cost[][maxsize]={ {INT_MAX,20,30,10,11},
                 {15,INT_MAX,16,4,2},
                 {3,5,INT_MAX,2,4},
                 {19,6,18,INT_MAX,3},
                 {16,4,7,16,INT_MAX}
                 };
 
 
 int n=sizeof(cost)/sizeof(cost[0]);
 
 int S;
 cout<<"Enter the Starting Vertex : ";
 cin>>S;
 
 cout<<"THE MINIMUM COST OF TRAVELLING FROM THR INDEX "<< S<< " IS "<<TravellingSalespersonProblem::TSP(cost,n,S);

  
}
