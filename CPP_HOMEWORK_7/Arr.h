#pragma once
#include "NewExceptions.h"
class IntegerArr {
private:
    int* _arr = nullptr; //указатель для выделения памяти под массив
    int _size = 0; //размер массива
    int _count = 0; //фактическое кол-во элементов
public:
    // КОНСТРУКТОРЫ И ДЕСТРУКТОР
    IntegerArr(IntegerArr&);
    IntegerArr();
    IntegerArr(int size);
    IntegerArr(int size, int value);
    ~IntegerArr();


    bool isEmpty();
    bool isFull();

    int getSize() const;
    int getCount() const;

    void showSize() const;
    void showCount() const;

    void printArr();
    void resize(int size);
    void erase();
    //ФУНКЦИИ УДАЛЕНИЯ ЭЛЕМЕНТА
    void removeElement();
    void removeBeginElement();
    void removeByIndex(int index);
    //ФУНКЦИИ ДОБАВЛЕНМЯ ЭЛЕМЕНТА
    void addElement(int value);
    void addBeginElement(int value);
    void addByIndex(int value, int index);

    void copyContainer(int arr[], int arr_size);
    void copyContainer(IntegerArr& other);

    int& operator[](int index);
    IntegerArr& operator=(const IntegerArr& A);
};