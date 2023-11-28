
#include "message.hpp"
message::message(/* args */)
{
    input.msg = 0;
    output.msg = 0;
}

message::~message()
{
}

void message::setOutput(int data)
{
    output.msg = data;
}

int message::getInput()
{
    return input.msg;
}
