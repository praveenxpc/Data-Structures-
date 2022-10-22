#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	   
	    int temp1 = 0;
	    while(n--){
	        int req,rating;
	        cin>>req>>rating;
	        if(rating>temp1){
	            if(req<=x){
	                temp1 = rating;
	                
	            }
	        }
	       // if(req>=temp){
	       //     if(req<=x){
	       //         temp=req;
	       //     }
	            
	       // }
	        
	    }
	    cout<<temp1<<endl;
	    
	    
	    
	    
	}
	return 0;
}
