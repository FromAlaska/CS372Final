#ifndef ProcessMessageManager_HPP_INCLUDED
#define ProcessMessageManager_HPP_INCLUDED

#include "MessageHandler.hpp"

class ProcessMessageManager : public MessageHandler {
public:
  ProcessMessageManager();
  void handler(int); // Virtual Function
private:
};

#endif /* ProcessMessageManager_HPP_INCLUDED */
