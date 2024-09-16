#include <bits/stdc++.h>
using namespace std;
int n=0;
double s=0;
double a;
int tinhtong(double a){

	while (s<a){
		n++;
		s+=1/n;
	}
	return n;
}
int main()
{
  ios_base::sync_with_stdio(NULL);
  cin.tie(NULL);

	cin >> a;
	int small = tinhtong(a);
	cout << small << endl;
    return 0;
}