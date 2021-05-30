#include <iostream>

using namespace std;

int main ()
{
   int sayi1;
   
   int sayi2;
   
   char islem;
   
   int sonuc;
   
   cout<<"Birinci sayiyi giriniz:"<<endl;
   
   cin>>sayi1;
   
   cout<<"ikinci sayiyi giriniz:"<<endl;
   
   cin>>sayi2;
   
   cout<<"Bir islem secin(+,-,*,/):"<<endl;
   
   cin>>islem;
   
   if(islem == '+')
   {
   	sonuc=sayi1+sayi2;
   	
   	cout<<"Sonuc:"<<sonuc<<endl;
   }
   
   else if(islem == '*')
   {
   	sonuc=sayi1*sayi2;
   	
   	cout<<"Sonuc:"<<sonuc<<endl;
   }
   
   else if(islem == '-')
   {
   	sonuc=sayi1-sayi2;
   	
   	cout<<"Sonuc:"<<sonuc<<endl;
   }
   
   else if(islem == '/')
   {
   	sonuc=sayi1/sayi2;
   	
   	cout<<"Sonuc:"<<sonuc<<endl;
   }
   
   else
   {
   	cout<<"uzgunum,islemi anlayamadim"<<endl;
   }
   
	return 0;
}
