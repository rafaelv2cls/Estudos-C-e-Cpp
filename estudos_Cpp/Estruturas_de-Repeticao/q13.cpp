#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int n,pos=0,neg=0;
	float soma=0;
	ifstream arq("q13.txt");

	while(arq >> n && n != 0) {
		(n > 0) ? pos++ : neg++;
		soma+=n;
	}

	cout << (soma)/(pos+neg) << endl;
	cout << pos << " " << neg << endl;
	cout << float(pos)/(pos+neg) << endl;
	cout << float(neg)/(pos+neg) << endl;
	
	return 0;
}
