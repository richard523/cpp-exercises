class DynamicArray {
private:
    int* arr;
    int length;
    int capacity;
public:

    DynamicArray(int capacity) : capacity(capacity), length(0) {
        arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if(capicity == length){
            relength();
        }
        arr[length] = 
    }

    int popback() {
        
    }

    void relength() {
        capacity *= 2;
        int* newArr = arr;
        for (int i = 0; i < length; i++) {
            newArr[i] = arr[i];
     

