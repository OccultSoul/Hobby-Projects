#include <iostream>
#include <string>

using namespace std;

string ceasercipher(string text){
    string val;
    
    for(int i=0;i<text.size();i++)
        text[i]=(char)((((int)text[i]-97)+3)%26 + 97);
        
    val=text;
    
    return val;
}

string decrypt(string text){
    string val;
    
    for(int i=0;i<text.size();i++)
        text[i]=(char)((((int)text[i]-97)-3 + 26 )%26 + 97);
        
    val=text;
    
    return val;
}

int main()
{
  string text,cipher,decry;
  cout<<"Enter the text : ";
  cin>>text;
  
  cipher=ceasercipher(text);
  decry=decrypt(cipher);
  cout<<"\nCiphertext :"<<cipher;
  cout<<"\nDecrypted text :"<<decry;
  
  return 0;
}