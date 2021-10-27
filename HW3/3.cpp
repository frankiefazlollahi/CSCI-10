#include<iostream>
using namespace std;
void input1(double ft, double in);
void calc1(double& ft, double& in, double& m, double& cm);
void output1(double& ft, double& in, double& m, double& cm);
void input2(double m, double cm);
void calc2(double& m, double& cm, double& ft, double& in);
void output2(double& m, double& cm, double& ft, double& in);
void inputP(double lb, double oz);
void calcP(double& lb, double& oz, double& kg, double& g);
void outputP(double& lb, double& oz, double& kg, double& g);
void inputK(double kg, double g);
void calcK(double& kg, double& g, double& lb, double& oz);
void outputK(double& kg, double& g, double& lb, double& oz);
int main()
{
 double feet, inches, meters, centimeters,pounds,ounces,kilograms,grams;
 char ans;
 int which;
 int lORw;
 cout << "Would you like to convert lengths (1) or weights (2)?" << endl;
 cin >> lORw;
 if (lORw == 1)
 {
   cout << "Would you like to convert from feet and inches or meters and centimeters? (1)" << endl << " Or meters and centimeters to feet and inches? (2)" << endl;
   cin >> which;
     if(which == 1)
     {
       do
       {
        input1(feet,inches);
        calc1(feet,inches,meters, centimeters);
        output1(feet,inches,meters, centimeters);
        cout<<"Would you like to calculate again? y/n : "<< endl;
        cin>>ans;
       }
       while(ans == 'y' || ans == 'Y');
     }
    else if(which == 2)
    {
       do
       {
        input2(meters,centimeters);
        calc2(meters,centimeters,feet, inches);
        output2(meters,centimeters,feet, inches);
        cout<<"Would you like to calculate again? y/n : "<< endl;
        cin>>ans;
       }
       while(ans == 'y' || ans == 'Y');
    }
    else
    cout << "You did not enter 1 or 2.";
  }
  else if(lORw == 2){
    cout << "Would you like to convert from pounds and ounces to kilograms and grams? (1)" << endl << " Or kilograms and grams to pounds and ounces? (2)" << endl;
    cin >> which;
if(which == 1)
{
  do
  {
   inputP(pounds,ounces);
   calcP(pounds,ounces,kilograms,grams);
   outputP(pounds,ounces,kilograms,grams);
   cout<<"Would you like to calculate again? y/n : "<< endl;
   cin>>ans;
  }
  while(ans == 'y' || ans == 'Y');
}
else if(which == 2)
{
  do
  {
   inputK(kilograms,grams);
   calcK(kilograms,grams,pounds,ounces);
   outputK(kilograms,grams,pounds,ounces);
   cout<<"Would you like to calculate again? y/n : "<< endl;
   cin>>ans;
  }
  while(ans == 'y' || ans == 'Y');
}
else
cout << "You did not enter 1 or 2.";
}
else
cout << "You did not enter 1 or 2.";
 return 0;
}
void input1(double ft, double in)
{
 cout<<"Enter feet: "<< endl;
 cin>>ft;
 cout<<"Enter inches: "<< endl;
 cin>>in;
}
void calc1(double& ft, double& in, double& m, double& cm)
{

 m = ft * 0.3048;
 cm = in * 2.54; // 2.54 inches per centimeter
}
void output1(double& ft, double& in, double& m, double& cm)
{
 calc1(ft,in,m,cm);
 cout<<"Meters: "<< m <<" Centimeters: "<< cm << endl;
}

void input2(double m, double cm)
{
 cout<<"Enter meters: "<< endl;
 cin>>m;
 cout<<"Enter centimeters: "<< endl;
 cin>>cm;
}
void calc2(double& m, double& cm, double& ft, double& in)
{

  ft = m / .3048;
  in = cm / 2.54;
}
void output2(double& m, double& cm, double& ft, double& in)
{
 calc2(m,cm,ft,in);
 cout<<"Feet: "<< ft <<" Inches: "<< in << endl;
}
void inputP(double lb, double oz)
{
 cout<<"Enter pounds: "<< endl;
 cin>>lb;
 cout<<"Enter ounces: "<< endl;
 cin>>oz;
}
void calcP(double& lb, double& oz, double& kg, double& g)
{

  kg = lb / 2.2046;
  g = oz / 28.3495;
}
void outputP(double& lb, double& oz, double& kg, double& g)
{
 calcP(lb,oz,kg,g);
 cout<<"Kilograms: "<< kg <<" Grams: "<< g << endl;
}
void inputK(double kg, double g)
{
 cout<<"Enter kilograms: "<< endl;
 cin>>kg;
 cout<<"Enter grams: "<< endl;
 cin>>g;
}
void calcK(double& kg, double& g, double& lb, double& oz)
{

  lb = kg * 2.2046;
  oz = g * 28.3495;
}
void outputK(double& kg, double& g, double& lb, double& oz)
{
 calcK(kg,g,lb,oz);
 cout<<"Pounds: "<< lb <<" Ounces: "<< oz << endl;
}
