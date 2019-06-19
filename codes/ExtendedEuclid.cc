#include<iostream>
using namespace std ;
class triplet {
public:
	int g;
	int x;
	int y;
	triplet(){
	g=0;x=0;y=0;
	}
};

triplet EuclidExtended(int a,int b){


	if(b==0){
	triplet small;
	small.g=a;
	small.x=1;
	small.y=0;
	return small;
	}
	triplet small=EuclidExtended(b,a%b);
	triplet answer;
	answer.g=small.g;
	answer.x=small.y;
	answer.y=(small.x)-((a/b)*(small.y));
	return answer;
	
	
}

int main(){
	int a,b;
	cin>>a>>b;
	triplet answer=EuclidExtended(a,b);
	cout<<answer.g<<" "<<answer.x<<" "<<answer.y;
	
}