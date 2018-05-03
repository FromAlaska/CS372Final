#include "../include/MessageHandler.hpp"

MessageHandler::MessageHandler() {
  nextManager_ = 0;
}

void MessageHandler::setNext(MessageHandler *next) {
  nextManager_ = next;
}

void MessageHandler::add(MessageHandler *next) {
  if(nextManager_) {
    nextManager_->add(next);
  }
  else {
    nextManager_ = next;
  }
}
