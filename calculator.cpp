#include<iostream>
using namespace std;
//referred from chatgpt(linear search method)
// Function to calculate the square root by linear search
double sqrt(double number) {
    if (number < 0) return -1; 
    if (number == 0) return 0; 

    double guess = 0;
    double increment = 0.01; 

    // Increment guess until its square is close to the number
    while (guess * guess <= number) {
        guess += increment;
    }
    return guess;
}

int main(){
cout<<"WELCOME TO CALCULATOR"<<endl;
int b;
long double first_number,second_number;
while (true){

cout<<"NOW PLEASE CHOOSE A FUNCTION BY PRESSING THE CORRESPONDING NUMBER TO CONTINUE. "<<endl;
cout<<" 1-ADDITION\n 2-SUBTRACTION\n 3-MULTIPLICATION\n 4-DIVISION\n 5-TRIGONOMETRIC FUNCTIONS\n 6-MODULO\n 7-LOGARITHM\n 8-SQUAREROOT\n 9-QUADRATIC EQUATION SOLVER"<<endl;
cin>>b;
if (b==1)
{

    cout<<"select your first number to continue "<<endl;
    cin>>first_number;
    cout<<"select your second number to continue "<<endl;
    cin>>second_number;
    cout<<"your answer is "<<first_number+second_number;
    break;
}
else if (b==2)
{
    
        cout<<"select your first number to continue "<<endl;
    cin>>first_number;
    cout<<"select your second number to continue "<<endl;
    cin>>second_number;
    cout<<"your answer is "<<first_number-second_number;
    break;

}
else if (b==3)
{
    
        cout<<"select your first number to continue "<<endl;
    cin>>first_number;
    cout<<"select your second number to continue "<<endl;
    cin>>second_number;
    cout<<"your answer is "<<first_number*second_number;
    break;
}
else if (b==4)
{
    
        cout<<"select your first number to continue "<<endl;
    cin>>first_number;
    cout<<"select your second number to continue "<<endl;
    cin>>second_number;
    cout<<"your answer is "<<first_number/second_number;
    break;
}
else if (b==5)
{   int trig; 
    cout<<"select the function you want"<<endl;
    cout<<"1)sinx   2)cosx "<<endl;
    cin>>trig;
    double x;
    cout<<"enter the angle(in radians)"<<endl;
    cin>>x;
      long double sinx;
     long double cosx;
           if (trig==1)
               {
                sinx= x-((x*x*x)/6)+((x*x*x*x*x)/120)-((x*x*x*x*x*x*x)/5040)+((x*x*x*x*x*x*x*x*x)/362880)-((x*x*x*x*x*x*x*x*x*x*x)/39916800);
                cout<<"the value of sinx is "<<sinx<<endl;
                   }
            else if (trig==2)
            {
                  cosx= 1-((x*x)/2)+((x*x*x*x)/24)-((x*x*x*x*x*x)/720)+((x*x*x*x*x*x*x*x)/40320)-((x*x*x*x*x*x*x*x*x*x)/3628800);
                  cout<<"the value of cosx is "<<cosx<<endl;
            }
            
             break;
       
}
else if (b==6){
    int d,m;
cout<<"enter the dividend "<<endl;
cin>>d;
cout<<"enter the modulus "<<endl;
cin>>m;
int remainder = d % m;
cout<<"the remainder is "<<remainder<<endl; 
break;
}

 else if (b==7)
 { { //used chatgpt for the logarithm
            cout<<"Assuming the general form to be y=lnx "<<endl;
            cout<<"Enter the value of x ";
            double x;
            cin>>x;
            double r;
            if(x>=1){
                for(r=0.0001; ;r+=0.0001){
                long int c=1;
                double b=1;
                double a=0;
                for(int i=1;i<=10;i++){
                    c=c*i;
                    b=b*r;
                    a=a+(b/c);}
                    if(a>=(x-1)){
                        break;
                    }
            
            }   
                
            cout<<"The value is "<<r-0.0001<<endl;}
            else if(x<1 && x>0 ){
                double r;
                for(r=0.5; ;r-=0.0001){
                    long int c=1;
                    double b=1;
                    double a=0;
                    for (int i = 1; i <=10; i++)
                    {
                    c=c*i;
                    b=b*r;
                    a=a+(b/c);}
                    if(a>=(x-1)){
                        break;
                    }
                    }
                cout<<"The value of logarithm is "<<r<<endl;
            }
            else if(x<=0){
                cout<<"The input is not valid for the logarithm calculation"<<endl;
                cout<<"Please enter a valid number"<<endl;
                continue;
            }
            
        }break;   
   
 }
 else if (b==8)
 {cout<<"enter the number"<<endl;
  cin>>first_number;
  cout<<"the approximate square root is"<<sqrt(first_number)<<endl;
    
 break;}
 else if (b==9)
 {   double a,b,c;
    cout<<"the general form of quadratic equation is ax^2+bx+c"<<endl;
    cout<<"type the value of a according to the general form"<<endl;
    cin>>a;
    cout<<"type the value of b according to the general form"<<endl;
    cin>>b;
    cout<<"type the value of c according to the general form"<<endl;
    cin>>c;
    double D;
    D=(b*b-4*a*c);
    if (D<0)
    {
        cout<<"the discriminant is less than zero so no roots exist"<<endl;
    }
    else if (D>=0)
    { double r1,r2;
    r1=(-b+sqrt(D))/(2*a);
    r2=(-b-sqrt(D))/(2*a);
      cout<< "the roots of the quadratic equation are"<<r1<<"and"<<r2<<endl;
    }
    
    
    break; }
else
{  cout << "Invalid input. Please enter the assigned number.\n" << endl;
            continue;  
   
    
}
}
return 0;
}