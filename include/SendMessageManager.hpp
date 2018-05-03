#ifndef SendMessageManager_HPP_INCLUDED
#define SendMessageManager_HPP_INCLUDED

#include "MessageHandler.hpp"

class SendMessageManager : public MessageHandler {
public:
  SendMessageManager();
  void handler(int); // Virtual Function
private:
};

#endif /* SendMessageManager_HPP_INCLUDED */
