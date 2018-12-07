#include <iostream>
#include<sstream>

using namespace std;

int count=1;

string obfuscate(string input, int charOffset, map<String, String> wordMap){
string* sp = split(input);
int cnt,test;
string result;
if(wordMap.find(sp[0]) == wordMap.end())
{
    //check if all numbers
    if(stringstream(sp[0]) >> test){
        for(int i=0;i<strlen(sp[0])-1;i++)
        {
            int a=sp[0][i];
            sp[0][i]=charOffset*a;//multiply with charoffset and send it
        }
    }
    else{//if word not in map and also not all are numbers
        for(int i=0;i<strlen(sp[0])-1;i++){
            int a=sp[0][i];
            sp[0][i]=a+charOffset;//add charoffset and replace
        }
    }

}
else//if the word is in map
{
    string rep = wordMap.find(sp[0])->second;
    sp[0]=rep;//replace with the value using key
}
for(int i=0;i<count;i++){
    result+ = sp[i];
}
return result;
}

string* split(string input){

    int i = 0;
    stringstream ssin(input);
    for(int j=0;line[j]!='\0';++j)
    {
        if(line[j]==' ')
            count++;
    }
    string* arr[count];
    while (ssin.good() && i < count){
        ssin >> arr[i];
        ++i;
    }
    for(i = 0; i < count; i++){
        cout << arr[i] << endl;
    }
    return arr;

}
//main function
