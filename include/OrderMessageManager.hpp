// Jim Samson
// CS372 Final
// This is the Order Messager handling classes

#ifndef OrderMessageManager_HPP_INCLUDED
#define OrderMessageManager_HPP_INCLUDED

#include "MessageHandler.hpp"

class OrderMessageManager : public MessageHandler {
public:
  OrderMessageManager();
  void handler(string); // Virtual Function
private:
};

#endif /* OrderMessageManager_HPP_INCLUDED */
