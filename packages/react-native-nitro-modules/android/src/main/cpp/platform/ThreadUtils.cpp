//
//  ThreadUtils.cpp
//  react-native-nitro
//
//  Created by Marc Rousavy on 14.07.24.
//

#include "ThreadUtils.hpp"
#include <pthread.h>
#include <sstream>
#include <string>
#include <thread>

namespace margelo::nitro {

std::string ThreadUtils::getThreadName() {
#ifdef HAVE_ANDROID_PTHREAD_SETNAME_NP
  // Try using pthread APIs
  pthread_t this_thread = pthread_self();
  char thread_name[16]; // Thread name length limit in Android is 16 characters

  int result = pthread_getname_np(this_thread, thread_name, sizeof(thread_name));
  if (result == 0) {
    return std::string(thread_name);
  }
#endif

  // Fall back to this_thread ID
  std::stringstream stream;
  stream << std::this_thread::get_id();
  std::string threadId = stream.str();
  return "Thread #" + threadId;
}

} // namespace margelo::nitro
