/*
 * SPDX-FileCopyrightText: 2019-2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>

//freq 1220-312500 duty 0-255
bool    sigmaDeltaAttach(uint8_t pin, uint32_t freq);
bool    sigmaDeltaWrite(uint8_t pin, uint8_t duty);
uint8_t sigmaDeltaRead(uint8_t pin);
bool    sigmaDeltaDetach(uint8_t pin);


#ifdef __cplusplus
}
#endif
