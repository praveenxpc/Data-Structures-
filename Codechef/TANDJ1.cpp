#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d,k;
        cin >> a >> b >> c >> d >> k;
        int moves = abs(d-b)+abs(c-a);
        if (moves>k)
            cout << "No" << endl;
        else if( (k-moves)%2==0 )
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
	return 0;
}
