int main() 
{
  int r,c;
  cin >>r>>c;
  int matrix[r][c];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>matrix[i][j];
    }
  }
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<matrix[i][j];
    }
    cout<<endl;
  }
    
    return 0;
}