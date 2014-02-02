#include <iostream>
#include<ctime>
#include<string>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("netlog.txt",ofstream::out | ofstream::app);
  time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );
cout<<"\t\t/*NETLOG*/\n\n";
myfile<<now->tm_hour<<":"<<now->tm_min<<":"<<now->tm_sec<<"\t"<<now->tm_mday<<":"<<now->tm_mon+1<<":"<<now->tm_year+1900<<endl;
cout<<"\n#####   #####Enter Your NetLog#####   #####\n\n "<<endl;
string s;
  getline(cin,s);
  myfile<<s<<endl;
  myfile.close();
  return 0;
}
