double stddev(double a[], int size)
{
  double sum = 0;
  double s = 0;
  for(int i = 0; i < size; i++)
  {
    sum += a[i];
  }
  double m = sum / size;
  for(int j = 0; j < size; j++)
  {
     s += ((a[j] - m) * 2);
  }
  return sqrt(s / size);
}
