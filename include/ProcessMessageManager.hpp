// Jim Samson
// CS372 Final
// This is the Process Message Handler class

#ifndef ProcessMessageManager_HPP_INCLUDED
#define ProcessMessageManager_HPP_INCLUDED

#include "MessageHandler.hpp"

class ProcessMessageManager : public MessageHandler {
public:
  ProcessMessageManager();
  void handler(string); // Virtual Function
private:
};

#endif /* ProcessMessageManager_HPP_INCLUDED */
