#include "../../include/reader.hpp"
#include <bits/stdc++.h>

int readFile(string filename)
{
     ifstream ifs(filename);

     if(!ifs.is_open())
     {
        cerr<<"Error opening the file: "<<filename<<endl;
	return 1;
     }

     string s;

     while(getline(ifs, s))
     {
        cout<<s<<endl;
     }

     ifs.close();
     
     cout<<"Check pollingi again::::"<<endl;

     return 0;
}

