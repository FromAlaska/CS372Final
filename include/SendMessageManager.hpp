// Jim Samson
// CS372 Final
// This is the Sending Message Handler class

#ifndef SendMessageManager_HPP_INCLUDED
#define SendMessageManager_HPP_INCLUDED

#include "MessageHandler.hpp"

class SendMessageManager : public MessageHandler {
public:
  SendMessageManager();
  void handler(string); // Virtual Function
private:
};

#endif /* SendMessageManager_HPP_INCLUDED */
