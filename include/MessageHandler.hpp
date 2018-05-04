// Jim Samson
// CS372 Final
// This is the base class handler for messages

#ifndef MessageHandler_HPP_INCLUDED
#define MessageHandler_HPP_INCLUDED

#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <memory>
#include <string>
using std::string;

class MessageHandler {
public:
  MessageHandler();
  void setNext(MessageHandler *);
  void add(MessageHandler *);
  virtual void handler(string i) {
    nextManager_->handler(i);
  }
  virtual bool checkMessage(string&) {return true;}
  virtual void addToMessages(string&) = 0;
  virtual void printMessages() = 0;
private:
  MessageHandler * nextManager_;
};

#endif /* MessageHandler_HPP_INCLUDED */
