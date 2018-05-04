// Jim Samson
// CS372 Final
// This is the Process Messanger Class
#include "../include/ProcessMessageManager.hpp"

// ProcessMessageManager() constructor
// Add messages to the white-list
ProcessMessageManager::ProcessMessageManager() {
  whiteListedMessages_.push_back("Message processed");
}

// handler() function
// Handles messages by checking the whitelist
void ProcessMessageManager::handler(string message) {
  if (checkMessage(message)) {
    cout << "Processor managed: " << message << endl;
    addToMessages(message);
  }
  else {
    MessageHandler::handler(message);
  }
}

// checkMessage() function
// Checks to see if the message is in the whitelist
bool ProcessMessageManager::checkMessage(string& message) {
  bool checkMessage = false;
  for(auto index : whiteListedMessages_) {
    if(message == index) {
      checkMessage = true;
    }
  }
  return checkMessage;
}

// addToMessages() Function
// Adds messages to memory if the whitelist check passes
void ProcessMessageManager::addToMessages(string& message) {
  recentMessages_.push_back(message);
}

// printMessages() Function
// Prints all the messages that are added to memory
void ProcessMessageManager::printMessages() {
  cout << endl << "Order received (ProcessMessageManager): " << endl;
  for(auto index : recentMessages_) {
    cout << index << endl;
  }
}
