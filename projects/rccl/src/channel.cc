/*************************************************************************
 * SPDX-FileCopyrightText: Copyright (c) 2015-2026 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 *
 * See LICENSE.txt for more license information
 *************************************************************************/

#include "channel.h"
#include "param.h"
#include "gdrwrap.h"
#include "transport.h"

ncclResult_t initChannel(struct ncclComm* comm, int channelId) {
