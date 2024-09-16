#include <iostream>
#include <algorithm>
using namespace std;
	int c;
	int array[2000000005];
int main(){

	cin >> c;
	for (int i=0; i< c; i++){
		cin >> array[c];
	}
int best = 0, sum = 0;
 for (int k = 0; k < c; k++) {
 sum = max(array[k],sum+array[k]);
 best = max(best,sum);
 }
 cout << best << "\n";
 return 0;
}