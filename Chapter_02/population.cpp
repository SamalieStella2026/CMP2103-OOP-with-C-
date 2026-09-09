// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.


#include<iostream>
using namespace std;

int main(){
constexpr int pop = 312032486 ;
    int year1=(pop+(365*86400/7)+(365*86400/45))-(365*86400/13);
    int year2=(((365*86400/7)+(365*86400/45))-(365*86400/13))+year1;
int year3=((365*86400/7)+(365*86400/45))-(365*86400/13)+year2;
int year4=((365*86400/7)+(365*86400/45))-(365*86400/13)+year3;
int year5=((365*86400/7)+(365*86400/45))-(365*86400/13)+year4;


cout<<"Population for next year "<<year1<<endl;
cout<<"Population for the 2nd year "<<year2<<endl;
cout<<"Population for the 3rd year "<<year3<<endl;
cout<<"Population for the 4th year "<<year4<<endl;
cout<<"Population for the 5th year "<<year5<<endl;







return 0;
}
