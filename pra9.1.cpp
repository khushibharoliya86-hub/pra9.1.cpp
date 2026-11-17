//practical 9.1
#include<iostream>
using namespace std;
int main()
{
    cout<<"*********************************************\n";
    cout<<"MEMORY ADDRESS EXPLORER\n";
    cout<<"*********************************************\n";
    cout<<"--------Variable Information----------\n";

//PART A-ADDRESS AND VALUE
    int a;
    int *p=&a;
    cout<<"Enter Integer Value:";
    cin>>a;
    cout<<"Integer Value   :"<<a<<endl;
    cout<<"Memory Address  :"<<p<<endl;
    cout<<"----------------------------------------\n\n";

    char b;
    char *q=&b;
    cout<<"Enter Character Value:";
    cin>>b;
    cout<<"Character Value   :"<<b<<endl;
    cout<<"Memory Address  :"<<(void*)q<<endl;
    cout<<"----------------------------------------\n\n";

    float c;
    float *r=&c;
    cout<<"Enter float Value:";
    cin>>c;
    cout<<"Floating Value   :"<<c<<endl;
    cout<<"Memory Address  :"<<r<<endl;
    cout<<"----------------------------------------\n\n";

//PART B-INDIRECT REFERECING
    cout<<"Indirect Referencing\n";
    int val=25;
    int *ptr1=&val;
    int **ptr2=&ptr1;
    cout<<"Stored Value    :"<<*ptr1<<endl;
    **ptr2=30;
    cout<<"Modified value  :"<<*ptr1<<endl;
    cout<<"----------------------------------------\n";
    cout<<endl<<endl;

//PART C-SEQUENTIAL DATA COLLECTIONS
    int arr[]= {10,20,30,40,50};
    cout<<"Sequential Data Collection\n\n";

//1.Array Indexing
    cout<<"Array using Index\n";
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl<<endl;

//2.Address-based Acesss
    cout<<"Array using Address-based Acesss\n";
    for(int i=0; i<5; i++)
    {
        cout<<*(arr+i)<<"  ";
    }
    cout<<endl;
    cout<<"----------------------------------------\n";
    cout<<"Observation\n\n";
    cout<<"Both approaches access the same memory locations.\n";
    cout<<"----------------------------------------\n";

    return 0;
}

