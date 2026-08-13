#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter the rows of 1st matrix:";
    cin >> m;
    int n;
    cout << "enter the coloms 1st matrix:";
    cin >> n;
      int arr[m][n];
    cout << "enter the  1st matrix element of the array:\n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        cout<<endl;
        // spiral 
        int minr =0,minc=0;
        int maxr=m-1,maxc=n-1;
        int tne =n*m;
        int count=0;
        while(minr<=maxr && minc<=maxc){
        // right 
        for(int j=minc;j<=maxc && count<tne;j++){
            cout<<arr[minr][j]<<" ";
            count++;
        }
        minr++;
        //
        if(minr>maxr ||minc>maxc) break; // ye condition lga skte ho  and count<tne; bhi lga skte ho for loop me bhi ye lgana padega  four times  
        // down 
        for(int i=minr;i<=maxr && count<tne;i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;
        //if(minc>maxr ||minc>maxc) break;
        // left 
        for(int j=maxc;j>=minc &&count<tne;j--){
            cout<<arr[maxr][j]<<" ";
            count++;

        }
        maxr--;
        //if(minc>maxr ||minc>maxc) break;

        // top
        for(int i=maxr;i>=minr &&count<tne;i--){
            cout<<arr[i][minc]<<" ";
            count++;

        }
        minc++;
        //if(minc>maxr ||minc>maxc) break;
    }
}
// enter the rows of 1st matrix:3
// enter the coloms 1st matrix:4
// enter the  1st matrix element of the array:
// 1 2 3 4 5 6 7 8 9 10 11 12

// 1 2 3 4 8 12 11 10 9 5 6 7 
// enter the rows of 1st matrix:3
// enter the coloms 1st matrix:4
// enter the  1st matrix element of the array:
// 1 2 3 4 5 6 7 8 9 10 11 12

// 1 2 3 4 8 12 11 10 9 5 6 7 
