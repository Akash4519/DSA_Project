#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX_TREE_HT 100
#define MAX_SIZE 100
 


struct MinHeapNode {

        char data;

        unsigned freq;
     
       struct MinHeapNode *left, *right;

};

struct MinHeap {

        unsigned size;

        unsigned capacity;

        struct MinHeapNode** array;

};


struct MinHeapNode* newNode(char data, unsigned freq)

{

        struct MinHeapNode* temp = (struct MinHeapNode*)malloc(

                                                   sizeof(struct MinHeapNode));

     

        temp->left = temp->right = NULL;

        temp->data = data;

        temp->freq = freq;

     

        return temp;

}

struct MinHeap* createMinHeap(unsigned capacity)

 

{

     

        struct MinHeap* minHeap

            = (struct MinHeap*)malloc(sizeof(struct MinHeap));

        minHeap->size = 0;

     

        minHeap->capacity = capacity;

     

        minHeap->array = (struct MinHeapNode**)malloc(

                                         minHeap->capacity * sizeof(struct MinHeapNode*));

        return minHeap;

}

void swapMinHeapNode(struct MinHeapNode** a,

                                          struct MinHeapNode** b)

 

{

     

        struct MinHeapNode* t = *a;

        *a = *b;

        *b = t;

}

void minHeapify(struct MinHeap* minHeap, int idx)

 

{

     

        int smallest = idx;

        int left = 2 * idx + 1;

        int right = 2 * idx + 2;

     

        if (left < minHeap->size

                        && minHeap->array[left]->freq

                               < minHeap->array[smallest]->freq)

                smallest = left;

     

        if (right < minHeap->size

                        && minHeap->array[right]->freq

                               < minHeap->array[smallest]->freq)

                smallest = right;

     

        if (smallest != idx) {

                swapMinHeapNode(&minHeap->array[smallest],

                                                                &minHeap->array[idx]);

                minHeapify(minHeap, smallest);

            
    }

}

int isSizeOne(struct MinHeap* minHeap)

{

     

        return (minHeap->size == 1);

}

struct MinHeapNode* extractMin(struct MinHeap* minHeap)

 

{

     

        struct MinHeapNode* temp = minHeap->array[0];

        minHeap->array[0] = minHeap->array[minHeap->size - 1];

     

        --minHeap->size;

        minHeapify(minHeap, 0);

     

        return temp;

}

void insertMinHeap(struct MinHeap* minHeap,

                                      struct MinHeapNode* minHeapNode)

 

{

     

        ++minHeap->size;

        int i = minHeap->size - 1;

     

        while (i

                              && minHeapNode->freq

                                     < minHeap->array[(i - 1) / 2]->freq) {

         

                minHeap->array[i] = minHeap->array[(i - 1) / 2];

                i = (i - 1) / 2;

            
    }

     

        minHeap->array[i] = minHeapNode;

}

void buildMinHeap(struct MinHeap* minHeap)

 

{

     

        int n = minHeap->size - 1;

        int i;

     

        for (i = (n - 1) / 2; i >= 0; --i)

                minHeapify(minHeap, i);

}

void printArr(int arr[], int n)

{

        int i;

        for (i = 0; i < n; ++i)

                printf("%d", arr[i]);

     

        printf("\n");

}

int isLeaf(struct MinHeapNode* root)

 

{

     

        return !(root->left) && !(root->right);

}

struct MinHeap* createAndBuildMinHeap(char data[],

                                                                            int freq[], int size)

 

{

     

        struct MinHeap* minHeap = createMinHeap(size);

     

        for (int i = 0; i < size; ++i)

                minHeap->array[i] = newNode(data[i], freq[i]);

     

        minHeap->size = size;

        buildMinHeap(minHeap);

     

        return minHeap;

}


struct MinHeapNode* buildHuffmanTree(char data[],

                                                                          int freq[], int size)

 

{


        struct MinHeapNode *left, *right, *top;

        struct MinHeap* minHeap

            = createAndBuildMinHeap(data, freq, size);

     

     
        while (!isSizeOne(minHeap)) {

         
                left = extractMin(minHeap);

                right = extractMin(minHeap);
         
                top = newNode('$', left->freq + right->freq);

         

                top->left = left;

                top->right = right;



                insertMinHeap(minHeap, top);

            
    }

    printf("%c",top->left->data);
    if(top->left->data == 99){
        printf("\nCategory : Electronic");//electronic items are listed as below will be down not onwards se your soon why not now hey you Yes you com fast when are you come on
        printf("\n\nProducts : \n1) iPhone+ \tCost : Rs 100000\n2) OnePlus A9 pro \tCost : Rs90000\n3)Samsung 32\' Tv \tCost : Rs50000\n4)LG automatic washing machine \tCost : Rs 35000");}
    if(top->left->data == 110){
        printf("\nCategory : Clothes");
        printf("\n\nProducts : \n1) Party wear for boys\tCost : Starting at Rs 1000 only (2 shirts combo)\n2)Traditional Dress\tCost : Starting Rs900 only\n3)Formals \tCost : Starting at Rs1500\n4)Sarees \tCost : Starting at Rs 3500");}
    if(top->left->data == 105){
        printf("\nCategory : Grocery");
        printf("\n\nProducts : \n1)Vegetable   Cost : Starting at Rs 22/kg\n2)Fruits    Cost : Starting Rs 30/kg\n3)Rice    Cost : Starting at Rs27/kg\n4)Wheat   Cost : Starting at Rs 23/kg");
        }
        return extractMin(minHeap);


}

void HuffmanCodes(char data[], int freq[], int size)

 

{
        struct MinHeapNode* root

            = buildHuffmanTree(data, freq, size);
        int arr[MAX_TREE_HT], top = 0;

}

void frequency(int array[],char elec[100][100],char cro[100][100],char clothes[100][100],char ever[100][100]) {

    char str[100];
    int i,j,k;
    int t=1;
    int u=0;
    int flag=0;
    while(t) {
        int p;

      /*  printf("\nEnter any string: ");
        //gets(str);
        scanf("%s",str);

        for(p=0; str[p]!='\0'; p++)
        {
            if(str[p]>='A' && str[p]<='Z')
            {
                str[p] = str[p] + 32;
            }
        }

        for (u = 0; u< 9; ++u) {
            if (!strcmp(str, ever[u])) {
                flag=0;

            }

        }*/
        if(flag==1) {

            printf("Not available");

        }
        else {

            /*for (i = 0; i < 3; ++i) {
                if (!strcmp(str, elec[i])) {
                    array[0]=array[0]+1;
                    break;
                }
            }


            for (j = 0; j < 3; ++j) {
                if (!strcmp(str, cro[j])) {
                    array[1]=array[1]+1;
                    break;
                }

            }

            for (k = 0; k < 3; ++k) {
                if (!strcmp(str, clothes[k])) {
                    array[2]=array[2]+1;
                    break;
                }

            }*/

            int num =0;
            char word[2000];
            char string[50];
            char student[100] = {0};
            FILE *in_file = fopen("electric.txt", "r");
            if (in_file == NULL)
            {
                printf("Error file missing\n");
                exit(-1);
            }
            printf("please enter a word(enter 0 to end)\n");
            scanf("%s", student);
            while(student[0]!= '\0')
            {
                while ( fscanf(in_file,"%s", string) == 1)
                {

                    if(strstr(string, student)!=0) {
                        array[0]=array[0]+1;
                        break;
                    }
                }
                printf("we found the word %s in the file %d times\n",student,num );
                break;
            }
            fclose(in_file);
//New file
            if(num==0) {
                FILE *in_file1 = fopen("grocery.txt", "r");
                if (in_file == NULL)
                {
                    printf("Error file missing\n");
                    exit(-1);
                }

                while(student[0]!= '\0')
                {
                    while ( fscanf(in_file1,"%s", string) == 1)
                    {

                        if(strstr(string, student)!=0) {
                            array[1]=array[1]+1;
                            break;
                        }
                    }
                    printf("we found the word %s in the file %d times\n",student,num );
                    break;
                }
                fclose(in_file1);
//New file
                if(num==0) {
                    FILE *in_file2 = fopen("clothes.txt", "r");
                    if (in_file2 == NULL)
                    {
                        printf("Error file missing\n");
                        exit(-1);
                    }

                    while(student[0]!= '\0')
                    {
                        while ( fscanf(in_file2,"%s", string) == 1)
                        {

                            if(strstr(string, student)!=0) {
                                array[2]=array[2]+1;
                                break;
                            }
                        }
                        printf("we found the word %s in the file %d times\n",student,num );
                        break;
                    }
                    fclose(in_file2);

                }
                printf("we found something\n");
                printf("%d\n",array[0]);
                printf("%d\n",array[1]);
                printf("%d\n",array[2]);
                printf("\nDo you want to continue : ");
                scanf("%d",&t);
                if(t==1) {
                    t=1;
                }
                else {
                    break;
                }
            }
        }

    }
}

 
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
