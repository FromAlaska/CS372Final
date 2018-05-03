#ifndef MessageHandler_HPP_INCLUDED
#define MessageHandler_HPP_INCLUDED

#include <iostream>
#include <vector>
#include <memory>

class MessageHandler {
public:
  MessageHandler();
  void setNext(MessageHandler *);
  void add(MessageHandler *);
  virtual void handler(int);
private:
  std::unique_ptr<MessageHandler> nextManager_;
};

#endif /* MessageHandler_HPP_INCLUDED */
