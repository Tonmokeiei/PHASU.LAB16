#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int x[] = {*a,*b,*c,*d};
	int y[] = {0,0,0,0};

	for(int i = 0 ; i < 4 ; i++){
		y[i] = rand()%4;
		for(int j = 0 ; j < i ; j++){
			if(y[i] == y[j]){
				i--;
			}
		}
	}
	*a = x[y[0]];
	*b = x[y[1]];
	*c = x[y[2]];
	*d = x[y[3]];

}