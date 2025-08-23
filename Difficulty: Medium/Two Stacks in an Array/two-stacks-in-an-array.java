class twoStacks {
    int arr[];
    int t1,t2;
    twoStacks() {
        arr = new int[100];
        t1 =-1;
        t2= 100;
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        // code here
        if(t1+1 == t2){
            return ;
        }
        else{
            t1++;
            arr[t1] = x;
        }
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        
        // code here
        if(t2-1 == t1 ){
            return ;
        }
        else{
            t2--;
            arr[t2] = x;
        }
    }

    // Function to remove an element from top of the stack1.
        
    int pop1() {
        // code here
        int data;
        if(t1 ==-1){
            return -1;
        }
        else{
            data = arr[t1];
            t1--;
        }
        return data;
    }

        
    // Function to remove an element from top of the stack2.
    int pop2() {
        // code here
        int data;
        if(t2 == 100){
            return -1;
        }
        else{
            data  = arr[t2];
            t2++;
        }
        return data;
    }
}