using namespace std;
int main(){
int r,c;
cout<<"Enter The Number Of Rows:";
cin>>r;
cout<<"Enter The Number Of Column:";
cin>>c;
for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
        if(i==1 or j==1 or i==r or j==c or i==j or i+j==r ){
            cout<<" * ";
        }
        else{
            cout<<"   ";
        }
    }
     cout<<endl;
}
}