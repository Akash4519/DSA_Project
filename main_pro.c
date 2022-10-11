#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX_TREE_HT 100
#define MAX_SIZE 100
 


int main()

{

         struct MinHeapNode *t;

       
    char* arr[] = { 'electronic','grocery', 'clothes'};

        int size = sizeof(arr) / sizeof(arr[0]);

         char elec[100][100]= {"tv","phone","wm"};    // array of string
    char cro[100][100]= {"vegetables","fruits","milk"};
    char clothes[100][100]= {"kurta","party_wear","traditional"};
    char ever[100][100]= {"tv","phone","wm","vegetables","fruits","milk","kurta","party_wear","traditional"};
    int array[3]={0,0,0};//0-elec,1-grocery,2-clothes
    char user[1000]={"poo12"};
    char pass[1000];
    int i=1;
    char *name;
    char *aadhar;
    char *username;
    char *password;
    printf("Enter your Name :");
    scanf("%s",&name);
    printf("Enter aadhar number :");
    scanf("%d",&aadhar);
    printf("Enter Username :");
    scanf("%s",&username);
    user[i]=username;
    printf("Enter password :");
    scanf("%d",&password);
    pass[i]=password;
    printf("\n1) Shopping\n2) Recommendation\n");
        int size1 = sizeof(array) / sizeof(array[0]);
    int a;
    while(1){
    printf("\n\nEnter your preferred choice : ");
    scanf("%d",&a);
    if(a==1){
    frequency(array,elec,cro,clothes,ever);
    //break;
    }
    //printf("%d,",array[0]);
    //printf("%d,",array[1]);
    //printf("%d",array[2]);
    if(a==2){
    HuffmanCodes(arr, array, size1);
    
}
}
        return 0;

}
