#include<iostream>
using namespace std;

int main()
{
int i,subjects;
float marks, total,averageMarks, percentage;

//input number of subjects
cout<<"Enter the total number of subjects: \n" ;
cin>>subjects;

//Takes marks of each subjects
cout<<"Enter marks of each subjects: \n";
for(i=0;i<=subjects;i++)
{
cin>>marks;
total+=marks;
}

//calculate Average

averageMarks = total / subjects;

//each subjects is of 100 marks

percentage = (total/(subjects*100)) *100;

cout<<"Total marks =" << total;
cout<<"\nAverage marks=" << averageMarks;
cout<<"\nPercentage"<<percentage;

return 0;

}
