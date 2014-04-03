//Standard Deviation Pluss is a program that calculates the mean, Variance and Standard Deviation
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const int N = 1000;

// Function prototypes
void Info();
int SampleSize();
double Mean(double [], int);
double StandardDeviation(double);
double Variance(double [], double, int);
double DisplayResults(int,double,double,double);

 //*************************
 // Start of Main Program. *
 //*************************
int main()
{
//Declaration of variables
    int n, counter = 0;
    double sum = 0, mean, variance, std, 
           Acumulator1 = 0, X[N];

//Call Display Indroduction of the Program
    Info();
// Set up numeric output formatting.
    cout << fixed << showpoint << setprecision(2);
//Call Sample Size Function
    n = SampleSize();
   
    while(counter < n)
    {
        cout << "Enter a number ";
        cin >> X[counter];
        counter += 1;
    } 
//Call Mean Function
    mean = Mean(X,n);
//Call Variance Function
    variance = Variance(X, mean, n);
//Call Standard Deviation Function
    std = StandardDeviation(variance);
//Call Display Result Function
    DisplayResults(n, mean, variance, std);

return 0;
} 

 //*************************
 // End of Main Program. ***
 //*************************

 //*****************************************************************
 // From this point forward the Function Codes will start **********
 //*****************************************************************


//Information about the program Function
void Info()
{
cout <<"Standard Deviation Pluss is a program that\n";
cout << "calculates the mean, Variance and Standard\n";
}

//Sample Size Function
int SampleSize()
{   
    int n;
    cout << "Enter the size of the sample " << endl;
    cin >> n;
return n;
}

//Mean Function
double Mean(double X[], int n)
{  int i;
   double average, sum = 0;
   if (n > N)
    {  
       cout << "The number exceeds the parameter N = " << N << endl;
       return 0;
    }

    for (i = 0; i < n; i++)
    { 
       sum += X[i];
    }
    
       average = sum / n;
    return average;
}

//Variance Function
double Variance(double X[], double mean, int n)
{    int counter=0;
     double Acumulator1=0.0, sum =0.0,variance=0.0;
     while(counter < n)
    {
        Acumulator1 = pow((X[counter] - mean),2);
        sum += Acumulator1;
        counter++;
     }
    variance= sum / (n - 1);
    return variance;
}

//Standard Deviation Function
double StandardDeviation(double variance)
{
    return sqrt(variance);
}

//Display Result Function
    double DisplayResults(int n,double mean,double variance,double std)
    {
    cout << "The sample size is: " << n << endl;
    cout << "The sample mean is: " << mean << endl;
    cout << "The Variance of the sample is: " << variance << endl;
    cout << "The Standard Deviation of the sample is: " 
         << std << endl;
    }
 