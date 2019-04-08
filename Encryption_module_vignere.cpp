#include <iostream>
#include <string>
#include <vector>
using namespace std;

string vignere(string text,string key){
    
    int len=text.size();
    std::string cipher (len, 'x');
    int i=0;
    for(;i<len;i++){
        if(text[i]==' ')
        cipher[i]=' ';
        else{
            int datat=(int)text[i];
            int datak=(int)key[i];
            
            char c=(char)((datat+datak)%26 + 65);
            cipher[i]=c;
            }
        }
    
    return cipher;
}

int main()
{
  string plaintext,key,ciphertext;
  cout<<"Enter plaintext :";
  getline(cin,plaintext);
  cout<<"\nEnter key of same length :";
  getline(cin,key);
  
  ciphertext=vignere(plaintext,key);
  
  cout<<"\nEncrypted Text : "<<ciphertext;
  
  return 0;
}