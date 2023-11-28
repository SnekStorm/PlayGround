// #pragma once
#ifndef MY_CLASS_H // include guard
#define MY_CLASS_H
class message
{
private:
    struct signal
    {
        int msg;
    };
    
    
    /* data */
public:
    signal input;
    signal output;
    message(/* args */);
    ~message();
    
    void setOutput(int data);
    int getInput();

};

#endif /* MY_CLASS_H */