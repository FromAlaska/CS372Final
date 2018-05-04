#ifndef MessageHandler_HPP_INCLUDED
#define MessageHandler_HPP_INCLUDED

#include <iostream>
using std::cout;
using std::endl;
#include <vector>
#include <memory>

class MessageHandler {
public:
  MessageHandler();
  void setNext(MessageHandler *);
  void add(MessageHandler *);
  virtual void handler(int i) {
    nextManager_->handler(i);
  }
private:
  //std::unique_ptr<MessageHandler> nextManager_;
  MessageHandler * nextManager_;
};

#endif /* MessageHandler_HPP_INCLUDED */
