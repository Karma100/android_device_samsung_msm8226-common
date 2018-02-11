/*
 * Copyright (C) 2016 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdlib.h>
#include <stdint.h>
#include <media/IMediaSource.h>

/* MediaBufferGroup::MediaBufferGroup */
extern "C" int _ZN7android16MediaBufferGroupC1Ej(unsigned int);
extern "C" int _ZN7android16MediaBufferGroupC1Ev() {
    return _ZN7android16MediaBufferGroupC1Ej(0);
}

extern "C" {
    // getSeekTo(int64_t *time_us, SeekMode *mode)
    void _ZNK7android12IMediaSource11ReadOptions9getSeekToEPxPNS1_8SeekModeE(int64_t*, int32_t*);
    // bool getNonBlocking()
    bool _ZNK7android12IMediaSource11ReadOptions14getNonBlockingEv();
    void _ZNK7android11MediaSource11ReadOptions9getSeekToEPxPNS1_8SeekModeE(int64_t *time_us, int32_t *mode) {
	_ZNK7android12IMediaSource11ReadOptions9getSeekToEPxPNS1_8SeekModeE(time_us, mode);
    }
    bool _ZNK7android11MediaSource11ReadOptions14getNonBlockingEv() {
	return _ZNK7android12IMediaSource11ReadOptions14getNonBlockingEv();
    }
}