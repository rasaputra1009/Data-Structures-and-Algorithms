bool isSafe(int row,int col,int k,int matrix[9][9])
{
    for(int i=0;i<9;i++)
    {
        if(matrix[row][i]==k) return false;
    }
    for(int i=0;i<9;i++)
    {
        if(matrix[i][col]==k) return false;
    }
    int start=row-row%3;
    int end=col-col%3;
    for(int i=start;i<(start+3);i++)
    {
        for(int j=end;j<(end+3);j++)
        {
            if(matrix[i][j]==k) return false;
        }
    }
    return true;
}
bool findSudoku(int row,int col,int matrix[9][9])
{
    if(row==8 && col==9) return true;
    if(col==9)
    {
        row+=1;
        col=0;
    }
    if(matrix[row][col]>0)
    {
        return findSudoku(row,col+1,matrix);
    }
    for(int k=1;k<=9;k++)
    {
        if(isSafe(row,col,k,matrix))
        {
            matrix[row][col]=k;
            if(findSudoku(row,col,matrix))
            {
                return true;
            }
        }
          matrix[row][col]=0;
    }
    return false;
}

bool isItSudoku(int matrix[9][9]) {
      return findSudoku(0,0,matrix);
}
