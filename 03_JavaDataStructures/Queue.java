public class Queue {
    int[] arr;
    int capacity, rear, front;

    // queue constructor
    Queue(int capacity){
        this.capacity = capacity;
        this.arr = new int[capacity];
        this.rear = -1;
        this.front = -1;
    }

    // queue methods
    public void enqueue(int x){
        if(!isFull())
            arr[++rear] = x;
        else
            System.out.println("\nQueue is full.");
    }

    public int dequeue(){
        if(!isEmpty())
            return arr[++front];
        else{
            System.out.println("\nQueue is empty.");
            return Integer.MIN_VALUE;
        }    
}

    public void peek(){
        if(!isEmpty())
            System.out.println("\nFront element is: " + arr[front+1]);
    }

    // queue helper methods
    public boolean isFull(){
        return rear == (capacity - 1);
    }

    public boolean isEmpty(){
        return rear == front;
    }

    public void printQueue(){
        if(!isEmpty()){
            for(int i = front+1; i <= rear; i++)
                System.out.print(" " + arr[i]);
        }
    }

    public static void main(String args[]){
        Queue q = new Queue(5);
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        q.enqueue(4);
        q.enqueue(5);
        // will result in queue overflow
        q.enqueue(1);
        q.printQueue();

        q.dequeue();
        q.peek();
        q.dequeue();
        q.peek();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
    }
}
