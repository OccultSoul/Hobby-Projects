#include <iostream>
#include <string>

using namespace std;

string ceasercipher(string text,int key){
    string val;
    
    for(int i=0;i<text.size();i++)
        text[i]=(char)((((int)text[i]-97)+key)%26 + 97);
        
    val=text;
    
    return val;
}

string decrypt(string text,int key){
    string val;
    
    for(int i=0;i<text.size();i++)
        text[i]=(char)((((int)text[i]-97)-key + 26 )%26 + 97);
        
    val=text;
    
    return val;
}

int main()
{
  string text,cipher,decry;
  cout<<"Enter the text : ";
  cin>>text;
  
  int key;
  cin>>key;
  
  cipher=ceasercipher(text,key);
  decry=decrypt(cipher,key);
  cout<<"\nCiphertext :"<<cipher;
  cout<<"\nDecrypted text :"<<decry;
  
  return 0;
}