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


struct MinHeapNode* newNode(char data, unsigned freq);

void swapMinHeapNode(struct MinHeapNode** a,struct MinHeapNode** b);


void minHeapify(struct MinHeap* minHeap, int idx);

int isSizeOne(struct MinHeap* minHeap);

struct MinHeapNode* extractMin(struct MinHeap* minHeap);

void insertMinHeap(struct MinHeap* minHeap,struct MinHeapNode* minHeapNode);

void buildMinHeap(struct MinHeap* minHeap);

void printArr(int arr[], int n);

int isLeaf(struct MinHeapNode* root);

struct MinHeap* createAndBuildMinHeap(char data[],int freq[], int size);


struct MinHeapNode* buildHuffmanTree(char data[],int freq[], int size);

void HuffmanCodes(char data[], int freq[], int size);

void frequency(int array[],char elec[100][100],char cro[100][100],char clothes[100][100],char ever[100][100]);
