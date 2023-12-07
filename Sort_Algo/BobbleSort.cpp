#include <iostream>
/*
    冒泡排序算法
*/
void sort(int array[], int size);

int main(){

    int numbers[] = {2, 10, 3, 6, 7, 8, 9, 4, 1, 5};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    
    sort(numbers, size);
    for(int element : numbers){
        std::cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size){
    
    int temp;

    for(int i = 0; i < size-1; i++){        // 最后一个数不用和任何数比较，i表示遍历的轮数
        for(int j = 0; j < size-i-1; j++){  // 第一个轮回可以确定最大的数，即最后一位元素被固定（下一次遍历不用管）
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }

    }

}