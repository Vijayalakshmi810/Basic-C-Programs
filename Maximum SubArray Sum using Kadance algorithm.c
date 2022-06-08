//Sum of maximum subarray 
int main() 
{
  int a[] = {-3, 1, -8, 12, 0, -3, 5, -9, 4};
  int n = sizeof(a) / sizeof(a[0]);
  int max_sum = 0;
  int current_sum = 0;

  for(int i=0; i<n; i++) 
  {
    current_sum = current_sum + a[i];
    if (current_sum < 0)
      current_sum = 0; 
    if(max_sum < current_sum)
      max_sum = current_sum; 
  }
  printf("%d",max_sum);
  return 0;
}
