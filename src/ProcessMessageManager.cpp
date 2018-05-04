// Jim Samson
// CS372 Final
// This is the Process Messanger Class
#include "../include/ProcessMessageManager.hpp"

ProcessMessageManager::ProcessMessageManager() {

}
void ProcessMessageManager::handler(string message) {
  if (message == "Message processed") {
    cout << "Processor managed: " << message << endl;
    // Do something related to Processing Messages
  }
  else {
    MessageHandler::handler(message);
  }
}
