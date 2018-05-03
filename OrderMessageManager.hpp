#ifndef OrderMessageManager_HPP_INCLUDED
#define OrderMessageManager_HPP_INCLUDED

#include "MessageHandler.hpp"

class OrderMessageManager : public MessageHandler {
public:
  OrderMessageManager();
  void handler(int); // Virtual Function
private:
};

#endif /* OrderMessageManager_HPP_INCLUDED */
