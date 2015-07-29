/*
 *
 *  Data Differential YATL (i.e. libtest)  library
 *
 *  Copyright (C) 2012 Data Differential, http://datadifferential.com/
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are
 *  met:
 *
 *      * Redistributions of source code must retain the above copyright
 *  notice, this list of conditions and the following disclaimer.
 *
 * Portions Copyright 2012-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"). You may not use this file except in
 * compliance with the License. A copy of the License is located at
 *
 *    http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations under the License.
 */

/*
  Structures for generic tests.
*/

#include <cstdio>
#include <cstdlib>
#include <arpa/inet.h>

#include <libtest/visibility.h>
#include <libtest/version.h>

#include <libtest/vchar.hpp>
#include <libtest/fatal.hpp>

#include <libtest/has.hpp>
#include <libtest/error.h>
#include <libtest/strerror.h>
#include <libtest/timer.hpp>
#include <libtest/stream.h>
#include <libtest/comparison.hpp>
#include <libtest/server.h>
#include <libtest/server_container.h>
#include <libtest/wait.h>
#include <libtest/callbacks.h>
#include <libtest/test.h>
#include <libtest/dream.h>
#include <libtest/core.h>
#include <libtest/runner.h>
#include <libtest/port.h>
#include <libtest/is_local.hpp>
#include <libtest/socket.hpp>
#include <libtest/collection.h>
#include <libtest/framework.h>
#include <libtest/get.h>
#include <libtest/cmdline.h>
#include <libtest/dynamic_mode.h>
#include <libtest/string.hpp>
#include <libtest/binaries.h>
#include <libtest/http.hpp>
#include <libtest/cpu.hpp>
#include <libtest/tmpfile.hpp>
