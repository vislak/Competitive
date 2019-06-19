#include<iostream>
using namespace std;

void StoreArea(int**arr, int**dp, int r, int c) {

 cout<<"check 1";
	dp[r - 1][c - 1] = arr[r - 1][c - 1];
	// intialising last row and coloumn

	for (int i = r - 2; i >= 0; i--) {
		dp[i][c - 1] = dp[i + 1][c - 1] + arr[i][c - 1]; //last colomn filled
	}
	cout<<"function check 2";
	for (int j = c - 2; j >= 0; j--) {
		dp[r - 1][j] = dp[r - 1][j + 1] + arr[r - 1][j]; //last row filled
	}
	cout<<"f3";

	for(int j=c-2;j>=0;j--){                        //coulomn fixed i.e coloumn j is selected for filling ;
		for(int i=r-2;i>=0;i--){
                 dp[i][j]=dp[i][j+1]+dp[i+1][j]-dp[i+1][j+1]+arr[i][j];
		}
	}
	cout<<"dp array fileed";

}



	int main() {
		int c, r;
		cin >> r >> c;
		int**arr = new int*[r];
		for (int i = 0; i < r; i++) {
			arr[i] = new int[c];
		}
		int**dp = new int*[r];
		for (int i = 0; i < r; i++) {
			dp[i] = new int[c];
		}


		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> arr[i][j];
				dp[i][j]=0;
			}
		}
		// create an dp array which will store  sum of area of rectangle wiht row i to n and col j to n;
				StoreArea(arr, dp, r, c); //each i,j will store row and coloum starting from i,j and ending at r,c ;

   int max=-100;

   //gnereating all rectangle pairs 

cout<<" check 2";

       for(int i=0;i<r;i++){
       	for(int j=i;j<r;j++){
       		for(int k=0;k<c;k++){
       			for(int l=i;l<c;l++){
       				int ans=0;

          cout<<"run"<<i<<" "<<j  <<" "<<k<<" "<< l<<" ";cout<<endl;

       				//write code for genrating  rectangle area of dimension (i,k),(i,l)&&(j,k)(j,l);
       				//when i,j,k,l all diffrent use ans=dp[j][k]-dp[i][l]-dp[j][k]+dp[j][l];
       				//handle cases like when i==j ,when all equal ,when k==l
                    //if  ans > max than update maxe ;
                          if(i==r-1||j==r-1||l===r-1||k==r-1){
                          	

                          }
                    ans=dp[j][k]-dp[i][l+1]-dp[j+1][k]+dp[j+1][l+1];
                    if(ans>max)max=ans;

       			}
       		}
       	}
       }
      cout<<max;
        return max;


	}