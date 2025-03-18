#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>

class Message {
public:
    int id;
    std::string content;
    int sender;
    int receiver;

    Message(int id, const std::string& content, int sender, int receiver);

};

#endif // MESSAGE_H


