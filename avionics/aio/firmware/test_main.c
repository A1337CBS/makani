/*
 * Copyright 2020 Makani Technologies LLC
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

#include "avionics/firmware/comms/tether_message_test.h"
#include "avionics/firmware/cpu/adc_test.h"
#include "avionics/firmware/cpu/io_test.h"
#include "avionics/firmware/cpu/memcpy_test.h"
#include "avionics/firmware/test/test.h"
#include "avionics/firmware/test/test_main.h"
#include "avionics/firmware/test/test_test.h"
#include "common/macros.h"

static const TestSuite *kAioTestSuites[] = {
  &kAdcTest,
  &kIoTest,
  &kMemcpyTest,
  &kTetherMessageTest,
  &kTestTest,
};

int main(void) {
  return TestMain(ARRAYSIZE(kAioTestSuites), kAioTestSuites);
}
