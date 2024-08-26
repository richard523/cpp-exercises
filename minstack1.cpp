class MinStack {
private:
int* arr;
int length;
public:
    MinStack() : length(0) {
        arr = new int[length];
    }
    
    void push(int val) {
        arr[length] = val;
        length++;
    }
    
    void pop() {
        length--;
        arr[length];
    }
    
    int top() {
        return arr[length];
    }
    
    int getMin() {
        int minVal = arr[length];
        for (int i = 0; i < length; i++){
            if (arr[i] < minVal){
                minVal = arr[i];
            }
        }
        return minVal;
    }
};

