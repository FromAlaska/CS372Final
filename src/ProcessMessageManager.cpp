#include "../include/ProcessMessageManager.hpp"

ProcessMessageManager::ProcessMessageManager() {

}
void ProcessMessageManager::handler(string message) {
  if (message == "Message processed") {
    cout << "Processor managed: " << message << endl;
    // MessageHandler::handler(message);
  }
  else {
    MessageHandler::handler(message);
    //cout << "ProcessMessageManager: " << message << endl;
  }
}
