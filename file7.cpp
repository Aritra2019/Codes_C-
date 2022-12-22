//append mode

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream out;
out.open("orange.txt");
out<<"KIIT University\n";
int y;
cout<<"Before append mode";

y=out.tellp();
cout<<y;
out.close();



out.open("orange.txt",ios::app);
int k;
k=out.tellp();
cout<<"after opening in append mode position is at"<<k<<endl;
out<<"hello";
out.close();
ifstream in;
in.open("orange.txt");
char ch[100];
in.getline(ch);
cout<<ch;

}
