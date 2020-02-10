/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

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
#ifndef TENSORFLOW_CORE_PROFILER_CONVERT_XPLANE_TO_PROFILE_RESPONSE_H_
#define TENSORFLOW_CORE_PROFILER_CONVERT_XPLANE_TO_PROFILE_RESPONSE_H_

#include "absl/container/flat_hash_set.h"
#include "absl/strings/string_view.h"
#include "tensorflow/core/platform/status.h"
#include "tensorflow/core/profiler/profiler_service.pb.h"
#include "tensorflow/core/profiler/protobuf/xplane.pb.h"

namespace tensorflow {
namespace profiler {

// Collect profiled data, converts to tools data based on the specified list
// of tools, and save to ProfileResponse. The accepted tools are:
// "overview_page", "input_pipeline" and "tensorflow_stats".
// TODO(b/148617985) Avoid passing start/end timestamps to this converter.
void ConvertXSpaceToProfileResponse(const XSpace& xspace,
                                    const ProfileRequest& req,
                                    uint64 start_time_ns, uint64 end_time_ns,
                                    ProfileResponse* response);

}  // namespace profiler
}  // namespace tensorflow

#endif  // TENSORFLOW_CORE_PROFILER_CONVERT_XPLANE_TO_PROFILE_RESPONSE_H_
