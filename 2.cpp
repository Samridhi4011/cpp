// #include<iostream>
// using namespace std;

// int main(){
//     int a = 123;
//     cout<<a<<endl;
//     char b = '2'; //only single variable can be used in char in single inverted commas
//     cout<<b<<endl;
//     bool c = true;
//     cout<<c<<endl;
//     bool d = false;
//     cout<<d<<endl;
//     float f = 3.3;
//     cout<<f<<endl;
//     double e = 3.33;
//     cout<<e<<endl;
//     int size = sizeof (a);
//     cout<<"Size of a is : "<< size <<endl;
//     int size2 = sizeof (b);
//     cout<<"Size of b is : "<< size2 <<endl;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"sam"<<'\n';
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"sam\n";
// }

//how data is stored
    // int a = 8
    // int is of 4 bytes=8 bits

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 'a';
//     cout<<a<<endl;

//     char ch = 98;
//     cout<<ch<<endl;

//     char ch1 = 123456;  //age badi value chhote me dalne ka try krenge 
//     cout<<ch1<<endl;    //to last k kuchh bits utha k vo isme daal dega
//                         //fir uski jo bhi value bnegi vo print ho jayegi
// }

//how neg numbers are stored
//first bit shows -ve or +ve number
//if first bit +ve then it shows 0 and if -ve it shows 1
//to store neg num  ignore the neg sign
//convert it to binary
//#take 2's compliment
//to display the number
//take 2's com of above#



// #include<iostream>
// using namespace std;

// int main(){
//     unsigned int a = -123  ;
//     cout<<a<<endl;
// }
   

// % module op
// +,-,*,/

#include<iostream>
using namespace std;
int main(){
    int a = 2/5;   //int/int=int  float/int=float   double/int=double
    cout<<a<<endl;
    int b = 2.0/5;
    cout<<b<<endl;
    cout<<2.0/5<<endl;
    float c=2.0/5;
    cout<<c<<endl;

    int x = 2;
    int y = 3;
    bool first = (a==b);
    cout<<first<<endl;

    int k = 21;
    cout<<!k<<endl;
}


//relational op = < > >= <= != ==
//assignment op =
//logical op &&(and) ||(or) !(not)
//bitwise op

#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;

    //cout << "value of n is : " << n <<endl;
    if (n>0) {
        cout<<"Positive"<<endl;
    }

}