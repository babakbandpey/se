#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;

int main () {
   int status;
   char t[1024]="ps -eo lstart,cmd | grep ";
   cout << "Content-type:text/html\r\n\r\n"<<endl;
   cout << "Coden knaekker\r\n\r\n"<<endl;
   char *value = getenv("QUERY_STRING");
   cout << "Coden knaekker ikke\r\n\r\n"<<endl;
   cout << *value << endl;
   cout << "Coden knaekker ikke\r\n\r\n"<<endl;
   strcat(t,value);
   int i=system ("dir");
   cout << "i: " << i << endl;
   status = system(strcat(t," | grep -v grep | head -n 1 | awk '{ print $1\" \"$3\" \"$2\" \"$5\" \"$4}'"));
   cout << "Status: " << status << ";" << endl;
   return 0;
}
