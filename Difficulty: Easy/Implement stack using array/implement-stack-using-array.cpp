class MyStack {
  public:
   int arr[100];
   int top =-1;
    void push(int x) {
        // code here
        
        top ++;
        arr[top] = x;
    }

    int pop() {
        
        // code here
        if(top==-1){
            return -1;
        }
        int p = arr[top];
        top--;
        return p;
    }

};