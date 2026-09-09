// Write a program that prompts the user to enter a weight in pounds and height in inches and
// then displays the BMI. Note that one pound is 0.45359237 kilograms and one inch is
// 0.0254 meters. Listing 4.6 gives the program.

// Conditions
// Below 18.5 Underweight
// 18.5–24.9 Normal
// 25.0–29.9 Overweight
// Above 30.0 Obese

// Enter weight in pounds:
// Enter Weight in pounds: 146
// Enter height in inches: 70
// BMI is 20.95
// Normal

#include<iostream>
using namespace std;

int main(){
double weight;
cout<<"Enter weight in pounds ";
cin>>weight;
double height;
cout<<"Enter height in inches ";
cin>>height;
double square=height*height;

double formula= (weight/square);
cout<<"The BMI is"<<formula<<endl;

if(formula<18.5){
cout<<"underweight";
}
else if(formula<24.9){
cout<<"Normal";

}
 else if (formula<29.9){
    cout<<"overweight";

}
else{

cout<<"obese";
return 0;
}
















