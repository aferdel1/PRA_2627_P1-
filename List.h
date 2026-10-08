#ifndef LIST_H
#define LIST_H

template <typename T> 
class List {
    public:
        virtual void insert() = 0;
        virtual void append() = 0;
        virtual void prepend() = 0;
        virtual void remove() = 0;
        virtual T get() = 0;
        int search() = 0;
        bool empty() = 0;
        int size() = 0; 
        virtual ~List() = 0;

};

#endif