void deleteRepeats(char array[],int& size)
{
  int n = size;
  int start = 0;
  while(start != n)
  {
    char test = array[start];
    for(int i = start+1; i <= n;i++)
    {
      if(test==array[i])
      {
        for(int j = i;j<n;j++)
        {
          array[j] = array[j+1];
        }
        n-=1;
        start-=1;
      }
    }
    start +=1;
    }
  size = n;
}
