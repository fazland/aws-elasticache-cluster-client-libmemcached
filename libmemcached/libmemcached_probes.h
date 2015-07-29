/*  vim:expandtab:shiftwidth=2:tabstop=2:smarttab:
 *
 *  Libmemcached library
 *
 *  Copyright (C) 2011 Data Differential, http://datadifferential.com/
 *  Copyright (C) 2006-2009 Brian Aker All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are
 *  met:
 *
 *      * Redistributions of source code must retain the above copyright
 *  notice, this list of conditions and the following disclaimer.
 *
 *      * Redistributions in binary form must reproduce the above
 *  copyright notice, this list of conditions and the following disclaimer
 *  in the documentation and/or other materials provided with the
 *  distribution.
 *
 *      * The names of its contributors may not be used to endorse or
 *  promote products derived from this software without specific prior
 *  written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
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

#pragma once


/*
 * This file contains the definition of the various probes supported by
 * libmemcached. Currently it only support DTRACE, but just create an
 * implementation of the following macros to create your own sort of
 * probing :)
 */

#ifdef HAVE_DTRACE
/*
 * Create the DTrace probes on the system using it (to support both Solaris
 * and MacOS X
 */
#include "libmemcached/dtrace_probes.h"

#else
/*
 * Provide dummy macros so that we don't need to clutter the code with
 * ifdefs when we want to use the probes.
 */

#define	LIBMEMCACHED_MEMCACHED_ADD_END()
#define	LIBMEMCACHED_MEMCACHED_ADD_END_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_ADD_START()
#define	LIBMEMCACHED_MEMCACHED_ADD_START_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_CONNECT_END()
#define	LIBMEMCACHED_MEMCACHED_CONNECT_END_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_CONNECT_START()
#define	LIBMEMCACHED_MEMCACHED_CONNECT_START_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_CONFIG_GET_START()
#define	LIBMEMCACHED_MEMCACHED_CONFIG_GET_START_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_CONFIG_GET_END()
#define	LIBMEMCACHED_MEMCACHED_CONFIG_GET_END_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_DECREMENT_END()
#define	LIBMEMCACHED_MEMCACHED_DECREMENT_END_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_DECREMENT_START()
#define	LIBMEMCACHED_MEMCACHED_DECREMENT_START_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_DECREMENT_WITH_INITIAL_END()
#define	LIBMEMCACHED_MEMCACHED_DECREMENT_WITH_INITIAL_END_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_DECREMENT_WITH_INITIAL_START()
#define	LIBMEMCACHED_MEMCACHED_DECREMENT_WITH_INITIAL_START_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_DELETE_END()
#define	LIBMEMCACHED_MEMCACHED_DELETE_END_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_DELETE_START()
#define	LIBMEMCACHED_MEMCACHED_DELETE_START_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_FLUSH_END()
#define	LIBMEMCACHED_MEMCACHED_FLUSH_END_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_FLUSH_START()
#define	LIBMEMCACHED_MEMCACHED_FLUSH_START_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_GET_END()
#define	LIBMEMCACHED_MEMCACHED_GET_END_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_GET_START()
#define	LIBMEMCACHED_MEMCACHED_GET_START_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_TOUCH_END()
#define	LIBMEMCACHED_MEMCACHED_TOUCH_END_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_TOUCH_START()
#define	LIBMEMCACHED_MEMCACHED_TOUCH_START_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_INCREMENT_END()
#define	LIBMEMCACHED_MEMCACHED_INCREMENT_END_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_INCREMENT_START()
#define	LIBMEMCACHED_MEMCACHED_INCREMENT_START_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_INCREMENT_WITH_INITIAL_END()
#define	LIBMEMCACHED_MEMCACHED_INCREMENT_WITH_INITIAL_END_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_INCREMENT_WITH_INITIAL_START()
#define	LIBMEMCACHED_MEMCACHED_INCREMENT_WITH_INITIAL_START_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_MGET_END()
#define	LIBMEMCACHED_MEMCACHED_MGET_END_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_MGET_START()
#define	LIBMEMCACHED_MEMCACHED_MGET_START_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_REPLACE_END()
#define	LIBMEMCACHED_MEMCACHED_REPLACE_END_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_REPLACE_START()
#define	LIBMEMCACHED_MEMCACHED_REPLACE_START_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_SERVER_ADD_END()
#define	LIBMEMCACHED_MEMCACHED_SERVER_ADD_END_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_SERVER_ADD_START()
#define	LIBMEMCACHED_MEMCACHED_SERVER_ADD_START_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_SET_END()
#define	LIBMEMCACHED_MEMCACHED_SET_END_ENABLED() (0)
#define	LIBMEMCACHED_MEMCACHED_SET_START()
#define	LIBMEMCACHED_MEMCACHED_SET_START_ENABLED() (0)

#endif
