#include "MessageHandler.hpp"
#include "OrderMessageManager.hpp"
#include "ProcessMessageManager.hpp"
#include "SendMessageManager.hpp"

int main() {
  OrderMessageManager messageReciever;
  ProcessMessageManager messageProcesser;
  SendMessageManager sendingManager;

  messageReciever.add(&messageProcesser);
  messageReciever.add(&sendingManager);
  sendingManager.setNext(&messageReciever);

  for(int i = 1; i < 10; ++i) {
    messageReciever.handler(i);
    cout << endl;
  }
  return 0;
}
