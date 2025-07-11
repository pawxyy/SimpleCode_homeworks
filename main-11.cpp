 #include<iostream>
 using namespace std;

int srtlength(const char *arr){
   int value;
   while (arr[value] != '\0')
   {
      value++;
   }
   return value;
}

 int main(){
   const char *arr = "Hello dide";
   cout<<srtlength(arr)<<endl;
 }