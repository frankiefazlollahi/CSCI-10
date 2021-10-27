double gravitationalForce (double m1, double m2, double d)
{
  const double G = 6.673/100000000;
  return (G * m1 * m2)/(d*d);
}
