public class Stack{
    int[] arr;
    int top;
    int capacity;

    // stack constructor
    Stack(int capacity){
        this.arr = new int[capacity];
        this.top = -1;
        this.capacity = capacity;
    }

    // methods for stack operation

    // stack push method
    public void push(int x){
        if(!isFull())
            arr[++top] = x;
        else
            System.out.println("\nUnable to push to stack: Stack overflow detected");
    }

    // stack pop method
    public int pop(){
        if(!isEmpty())
            return arr[top--];
        else
            System.out.println("\nUnable to pop from stack: Stack underflow detected");
            return Integer.MIN_VALUE;
    }

    public void peek(){
        if(!isEmpty())
            System.out.println("\nTOS element is: " + arr[top]);
    }

    // helper methods for stack 

    // checks whether the stack is full or not
    public boolean isFull(){
        return top == capacity -1;
    }

    // checks if the stack is empty
    public boolean isEmpty(){
        return top == -1;
    }

    // returns number of elements in the stack 
    public int size(){
        return top + 1;
    }

    // prints the stack
    public void printStack(){
        for(int i:arr){
            System.out.print(" " + i);
        }
    }

    public static void main(String args[]){
        Stack s = new Stack(6);
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);
        s.push(6);

        s.printStack();

        // will result in stack overflow
        s.push(7);

        // print TOS element
        s.peek();

        // pop TOS element
        s.pop();
        s.peek();
    }    
}