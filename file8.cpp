   //read and write class objects

#include<iostream>
#include<fstream>
using namespace std;
class student
{
int roll;
char name[20];
float avg;
public:
 void get()
{
 cout<<"enter roll,name aand average mark ";
  cin>>roll>>name>>avg;
}
void show()
{
cout<<"roll = "<<roll<<"name is "<<name<<" average mark = "<<avg<<endl;
}
};
int main()
{
  student s1,s2;
  s1.get();
  s1.show();
  ofstream out;
  out.open("helloworld");
  out.write((char*)&s1,sizeof(s1));
  out.close();

  ifstream in;
  in.open("helloworld");
  in.read((char*)&s2,sizeof(s2));
  cout<<"after reading from file in s2 object the values are: "<<endl;
  s2.show();
}
