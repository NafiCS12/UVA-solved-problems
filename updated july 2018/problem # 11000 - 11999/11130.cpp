#include <cmath>
#include <iostream>

using namespace std;

const double conv = 3.14159265 / 180;

int bouncesV(int L, int v, int A, int s){
	return int((L + v * cos(A * conv) * s) / (L * 2));
}

int bouncesH(int L, int v, int A, int s){
	return int((L + v * sin(A * conv) * s) / (L * 2));
}

int main(void){
    int a, b, v, A, s;
    while(cin>>a>>b>>v>>A>>s && (a | b | v | A | s))
		cout<<bouncesV(a, v, A, s)<<" "<<bouncesH(b, v, A, s)<<endl;
	return 0;
}
