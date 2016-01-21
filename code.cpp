
//first sort numbers
void sort(int numbers[], int size)
{
  for(int i=1;i<size;i++)
  { 
    int value = A[i];
    int hole = i;
    
    while(hole>0 && A[hole-1]>value)
    { 
      A[hole] = A[hole-1];
      hole--;
    }
    A[hole] = value;
  }
}
//now the array is sorted
int findRepeatedNumber(int numbers[],int size)
{
  for(int i = 0;i<size-1;i++)
  { 
    if(A[i]==A[i+1]) return A[i];
  }
  return -1;
}

int main()
{
  //given an array , say A[], and its size , say N, we can find repeated number as..
  sort(A,N);
  cout<<findRepeatedNumber(A,N);
  return 0;
}
//DONE!!! It was nice helping sheeba!!


