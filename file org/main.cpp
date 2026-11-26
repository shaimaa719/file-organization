#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("names.txt");
   vector<string> data;
   string line;
   while(getline(in,line)){
    data.push_back(line);
   }
    sort(data.begin(),data.end());
   in.close();
   cout<<"names sorted successfully"<<endl;
   for(int i=0;i<data.size();i++){
    cout <<data[i]<<endl;
   }
    return 0;
}
