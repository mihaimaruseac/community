/* Copyright 2022 The TensorFlow Authors. All Rights Reserved.                                                                                                                                                                   

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_PLUGIN_SRC_UTILS_STRINGPIECE_H_
#define TENSORFLOW_PLUGIN_SRC_UTILS_STRINGPIECE_H_

#include "absl/strings/string_view.h" // IWYU pragma: export

// StringPiece is a simple structure containing a pointer into some external
// storage and a size.  The user of a StringPiece must ensure that the slice
// is not used after the corresponding external storage has been
// deallocated.
//
// Multiple threads can invoke const methods on a StringPiece without
// external synchronization, but if any of the threads may call a
// non-const method, all threads accessing the same StringPiece must use
// external synchronization.

namespace demo_plugin {

using StringPiece = absl::string_view;

} // namespace demo_plugin

#endif // TENSORFLOW_PLUGIN_SRC_UTILS_STRINGPIECE_H_