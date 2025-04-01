/* XMRig
 * Copyright 2010      Jeff Garzik <jgarzik@pobox.com>
 * Copyright 2012-2014 pooler      <pooler@litecoinpool.org>
 * Copyright 2014      Lucas Jones <https://github.com/lucasjones>
 * Copyright 2014-2016 Wolf9466    <https://github.com/OhGodAPet>
 * Copyright 2016      Jay D Dee   <jayddee246@gmail.com>
 * Copyright 2017-2018 XMR-Stak    <https://github.com/fireice-uk>, <https://github.com/psychocrypt>
 * Copyright 2018      Lee Clagett <https://github.com/vtnerd>
 * Copyright 2018-2020 SChernykh   <https://github.com/SChernykh>
 * Copyright 2016-2020 XMRig       <https://github.com/xmrig>, <support@xmrig.com>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef XMRIG_CRYPTONIGHT_TEST_H
#define XMRIG_CRYPTONIGHT_TEST_H


#include <cstdint>


namespace xmrig {


const static uint8_t test_input[380] = {
    0x03, 0x05, 0xA0, 0xDB, 0xD6, 0xBF, 0x05, 0xCF, 0x16, 0xE5, 0x03, 0xF3, 0xA6, 0x6F, 0x78, 0x00,
    0x7C, 0xBF, 0x34, 0x14, 0x43, 0x32, 0xEC, 0xBF, 0xC2, 0x2E, 0xD9, 0x5C, 0x87, 0x00, 0x38, 0x3B,
    0x30, 0x9A, 0xCE, 0x19, 0x23, 0xA0, 0x96, 0x4B, 0x00, 0x00, 0x00, 0x08, 0xBA, 0x93, 0x9A, 0x62,
    0x72, 0x4C, 0x0D, 0x75, 0x81, 0xFC, 0xE5, 0x76, 0x1E, 0x9D, 0x8A, 0x0E, 0x6A, 0x1C, 0x3F, 0x92,
    0x4F, 0xDD, 0x84, 0x93, 0xD1, 0x11, 0x56, 0x49, 0xC0, 0x5E, 0xB6, 0x01,
    0x01, 0x00, 0xFB, 0x8E, 0x8A, 0xC8, 0x05, 0x89, 0x93, 0x23, 0x37, 0x1B, 0xB7, 0x90, 0xDB, 0x19,
    0x21, 0x8A, 0xFD, 0x8D, 0xB8, 0xE3, 0x75, 0x5D, 0x8B, 0x90, 0xF3, 0x9B, 0x3D, 0x55, 0x06, 0xA9,
    0xAB, 0xCE, 0x4F, 0xA9, 0x12, 0x24, 0x45, 0x00, 0x00, 0x00, 0x00, 0xEE, 0x81, 0x46, 0xD4, 0x9F,
    0xA9, 0x3E, 0xE7, 0x24, 0xDE, 0xB5, 0x7D, 0x12, 0xCB, 0xC6, 0xC6, 0xF3, 0xB9, 0x24, 0xD9, 0x46,
    0x12, 0x7C, 0x7A, 0x97, 0x41, 0x8F, 0x93, 0x48, 0x82, 0x8F, 0x0F, 0x02,
    0x07, 0x07, 0xB4, 0x87, 0xD0, 0xD6, 0x05, 0x26, 0xE0, 0xC6, 0xDD, 0x9B, 0xC7, 0x18, 0xC3, 0xCF,
    0x52, 0x04, 0xBD, 0x4F, 0x9B, 0x27, 0xF6, 0x73, 0xB9, 0x3F, 0xEF, 0x7B, 0xB2, 0xF7, 0x2B, 0xBB,
    0x3F, 0x3E, 0x9C, 0x3E, 0x9D, 0x33, 0x1E, 0xDE, 0xAD, 0xBE, 0xEF, 0x4E, 0x00, 0x91, 0x81, 0x29,
    0x74, 0xB2, 0x70, 0xE7, 0x6D, 0xD2, 0x2A, 0x5F, 0x52, 0x04, 0x93, 0xE6, 0x18, 0x89, 0x40, 0xD8,
    0xC6, 0xE3, 0x90, 0x6E, 0xAA, 0x6A, 0xB7, 0xE2, 0x08, 0x7E, 0x78, 0x0E,
    0x01, 0x00, 0xEE, 0xB2, 0xD1, 0xD6, 0x05, 0xFF, 0x27, 0x7F, 0x26, 0xDB, 0xAA, 0xB2, 0xC9, 0x26,
    0x30, 0xC6, 0xCF, 0x11, 0x64, 0xEA, 0x6C, 0x8A, 0xE0, 0x98, 0x01, 0xF8, 0x75, 0x4B, 0x49, 0xAF,
    0x79, 0x70, 0xAE, 0xEE, 0xA7, 0x62, 0x2C, 0x00, 0x00, 0x00, 0x00, 0x47, 0x8C, 0x63, 0xE7, 0xD8,
    0x40, 0x02, 0x3C, 0xDA, 0xEA, 0x92, 0x52, 0x53, 0xAC, 0xFD, 0xC7, 0x8A, 0x4C, 0x31, 0xB2, 0xF2,
    0xEC, 0x72, 0x7B, 0xFF, 0xCE, 0xC0, 0xE7, 0x12, 0xD4, 0xE9, 0x2A, 0x01,
    0x07, 0x07, 0xA9, 0xB7, 0xD1, 0xD6, 0x05, 0x3F, 0x0D, 0x5E, 0xFD, 0xC7, 0x03, 0xFC, 0xFC, 0xD2,
    0xCE, 0xBC, 0x44, 0xD8, 0xAB, 0x44, 0xA6, 0xA0, 0x3A, 0xE4, 0x4D, 0x8F, 0x15, 0xAF, 0x62, 0x17,
    0xD1, 0xE0, 0x92, 0x85, 0xE4, 0x73, 0xF9, 0x00, 0x00, 0x00, 0xA0, 0xFC, 0x09, 0xDE, 0xAB, 0xF5,
    0x8B, 0x6F, 0x1D, 0xCA, 0xA8, 0xBA, 0xAC, 0x74, 0xDD, 0x74, 0x19, 0xD5, 0xD6, 0x10, 0xEC, 0x38,
    0xCF, 0x50, 0x29, 0x6A, 0x07, 0x0B, 0x93, 0x8F, 0x8F, 0xA8, 0x10, 0x04
};


struct cn_r_test_input_data
{
    uint64_t height;
    size_t size;
    uint8_t data[64];
};


const static cn_r_test_input_data cn_r_test_input[] = {
    { 1806260, 44, { 0x54, 0x68, 0x69, 0x73, 0x20, 0x69, 0x73, 0x20, 0x61, 0x20, 0x74, 0x65, 0x73, 0x74, 0x20, 0x54, 0x68, 0x69, 0x73, 0x20, 0x69, 0x73, 0x20, 0x61, 0x20, 0x74, 0x65, 0x73, 0x74, 0x20, 0x54, 0x68, 0x69, 0x73, 0x20, 0x69, 0x73, 0x20, 0x61, 0x20, 0x74, 0x65, 0x73, 0x74 } },
    { 1806261, 50, { 0x4c, 0x6f, 0x72, 0x65, 0x6d, 0x20, 0x69, 0x70, 0x73, 0x75, 0x6d, 0x20, 0x64, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x73, 0x69, 0x74, 0x20, 0x61, 0x6d, 0x65, 0x74, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x65, 0x63, 0x74, 0x65, 0x74, 0x75, 0x72, 0x20, 0x61, 0x64, 0x69, 0x70, 0x69, 0x73, 0x63, 0x69, 0x6e, 0x67 } },
    { 1806262, 48, { 0x65, 0x6c, 0x69, 0x74, 0x2c, 0x20, 0x73, 0x65, 0x64, 0x20, 0x64, 0x6f, 0x20, 0x65, 0x69, 0x75, 0x73, 0x6d, 0x6f, 0x64, 0x20, 0x74, 0x65, 0x6d, 0x70, 0x6f, 0x72, 0x20, 0x69, 0x6e, 0x63, 0x69, 0x64, 0x69, 0x64, 0x75, 0x6e, 0x74, 0x20, 0x75, 0x74, 0x20, 0x6c, 0x61, 0x62, 0x6f, 0x72, 0x65 } },
    { 1806263, 48, { 0x65, 0x74, 0x20, 0x64, 0x6f, 0x6c, 0x6f, 0x72, 0x65, 0x20, 0x6d, 0x61, 0x67, 0x6e, 0x61, 0x20, 0x61, 0x6c, 0x69, 0x71, 0x75, 0x61, 0x2e, 0x20, 0x55, 0x74, 0x20, 0x65, 0x6e, 0x69, 0x6d, 0x20, 0x61, 0x64, 0x20, 0x6d, 0x69, 0x6e, 0x69, 0x6d, 0x20, 0x76, 0x65, 0x6e, 0x69, 0x61, 0x6d, 0x2c } },
    { 1806264, 46, { 0x71, 0x75, 0x69, 0x73, 0x20, 0x6e, 0x6f, 0x73, 0x74, 0x72, 0x75, 0x64, 0x20, 0x65, 0x78, 0x65, 0x72, 0x63, 0x69, 0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x75, 0x6c, 0x6c, 0x61, 0x6d, 0x63, 0x6f, 0x20, 0x6c, 0x61, 0x62, 0x6f, 0x72, 0x69, 0x73, 0x20, 0x6e, 0x69, 0x73, 0x69 } },
    { 1806265, 45, { 0x75, 0x74, 0x20, 0x61, 0x6c, 0x69, 0x71, 0x75, 0x69, 0x70, 0x20, 0x65, 0x78, 0x20, 0x65, 0x61, 0x20, 0x63, 0x6f, 0x6d, 0x6d, 0x6f, 0x64, 0x6f, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x65, 0x71, 0x75, 0x61, 0x74, 0x2e, 0x20, 0x44, 0x75, 0x69, 0x73, 0x20, 0x61, 0x75, 0x74, 0x65 } },
    { 1806266, 47, { 0x69, 0x72, 0x75, 0x72, 0x65, 0x20, 0x64, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x69, 0x6e, 0x20, 0x72, 0x65, 0x70, 0x72, 0x65, 0x68, 0x65, 0x6e, 0x64, 0x65, 0x72, 0x69, 0x74, 0x20, 0x69, 0x6e, 0x20, 0x76, 0x6f, 0x6c, 0x75, 0x70, 0x74, 0x61, 0x74, 0x65, 0x20, 0x76, 0x65, 0x6c, 0x69, 0x74 } },
    { 1806267, 44, { 0x65, 0x73, 0x73, 0x65, 0x20, 0x63, 0x69, 0x6c, 0x6c, 0x75, 0x6d, 0x20, 0x64, 0x6f, 0x6c, 0x6f, 0x72, 0x65, 0x20, 0x65, 0x75, 0x20, 0x66, 0x75, 0x67, 0x69, 0x61, 0x74, 0x20, 0x6e, 0x75, 0x6c, 0x6c, 0x61, 0x20, 0x70, 0x61, 0x72, 0x69, 0x61, 0x74, 0x75, 0x72, 0x2e } },
    { 1806268, 47, { 0x45, 0x78, 0x63, 0x65, 0x70, 0x74, 0x65, 0x75, 0x72, 0x20, 0x73, 0x69, 0x6e, 0x74, 0x20, 0x6f, 0x63, 0x63, 0x61, 0x65, 0x63, 0x61, 0x74, 0x20, 0x63, 0x75, 0x70, 0x69, 0x64, 0x61, 0x74, 0x61, 0x74, 0x20, 0x6e, 0x6f, 0x6e, 0x20, 0x70, 0x72, 0x6f, 0x69, 0x64, 0x65, 0x6e, 0x74, 0x2c } },
    { 1806269, 62, { 0x73, 0x75, 0x6e, 0x74, 0x20, 0x69, 0x6e, 0x20, 0x63, 0x75, 0x6c, 0x70, 0x61, 0x20, 0x71, 0x75, 0x69, 0x20, 0x6f, 0x66, 0x66, 0x69, 0x63, 0x69, 0x61, 0x20, 0x64, 0x65, 0x73, 0x65, 0x72, 0x75, 0x6e, 0x74, 0x20, 0x6d, 0x6f, 0x6c, 0x6c, 0x69, 0x74, 0x20, 0x61, 0x6e, 0x69, 0x6d, 0x20, 0x69, 0x64, 0x20, 0x65, 0x73, 0x74, 0x20, 0x6c, 0x61, 0x62, 0x6f, 0x72, 0x75, 0x6d, 0x2e } },
};


// "cn/r"
const static uint8_t test_output_r[] = {
    0xf7, 0x59, 0x58, 0x8a, 0xd5, 0x7e, 0x75, 0x84, 0x67, 0x29, 0x54, 0x43, 0xa9, 0xbd, 0x71, 0x49, 0x0a, 0xbf, 0xf8, 0xe9, 0xda, 0xd1, 0xb9, 0x5b, 0x6b, 0xf2, 0xf5, 0xd0, 0xd7, 0x83, 0x87, 0xbc,
    0x5b, 0xb8, 0x33, 0xde, 0xca, 0x2b, 0xdd, 0x72, 0x52, 0xa9, 0xcc, 0xd7, 0xb4, 0xce, 0x0b, 0x6a, 0x48, 0x54, 0x51, 0x57, 0x94, 0xb5, 0x6c, 0x20, 0x72, 0x62, 0xf7, 0xa5, 0xb9, 0xbd, 0xb5, 0x66,
    0x1e, 0xe6, 0x72, 0x8d, 0xa6, 0x0f, 0xbd, 0x8d, 0x7d, 0x55, 0xb2, 0xb1, 0xad, 0xe4, 0x87, 0xa3, 0xcf, 0x52, 0xa2, 0xc3, 0xac, 0x6f, 0x52, 0x0d, 0xb1, 0x2c, 0x27, 0xd8, 0x92, 0x1f, 0x6c, 0xab,
    0x69, 0x69, 0xfe, 0x2d, 0xdf, 0xb7, 0x58, 0x43, 0x8d, 0x48, 0x04, 0x9f, 0x30, 0x2f, 0xc2, 0x10, 0x8a, 0x4f, 0xcc, 0x93, 0xe3, 0x76, 0x69, 0x17, 0x0e, 0x6d, 0xb4, 0xb0, 0xb9, 0xb4, 0xc4, 0xcb,
    0x7f, 0x30, 0x48, 0xb4, 0xe9, 0x0d, 0x0c, 0xbe, 0x7a, 0x57, 0xc0, 0x39, 0x4f, 0x37, 0x33, 0x8a, 0x01, 0xfa, 0xe3, 0xad, 0xfd, 0xc0, 0xe5, 0x12, 0x6d, 0x86, 0x3a, 0x89, 0x5e, 0xb0, 0x4e, 0x02,
    0x1d, 0x29, 0x04, 0x43, 0xa4, 0xb5, 0x42, 0xaf, 0x04, 0xa8, 0x2f, 0x6b, 0x24, 0x94, 0xa6, 0xee, 0x7f, 0x20, 0xf2, 0x75, 0x4c, 0x58, 0xe0, 0x84, 0x90, 0x32, 0x48, 0x3a, 0x56, 0xe8, 0xe2, 0xef,
    0xc4, 0x3c, 0xc6, 0x56, 0x74, 0x36, 0xa8, 0x6a, 0xfb, 0xd6, 0xaa, 0x9e, 0xaa, 0x7c, 0x27, 0x6e, 0x98, 0x06, 0x83, 0x03, 0x34, 0xb6, 0x14, 0xb2, 0xbe, 0xe2, 0x3c, 0xc7, 0x66, 0x34, 0xf6, 0xfd,
    0x87, 0xbe, 0x24, 0x79, 0xc0, 0xc4, 0xe8, 0xed, 0xfd, 0xfa, 0xa5, 0x60, 0x3e, 0x93, 0xf4, 0x26, 0x5b, 0x3f, 0x82, 0x24, 0xc1, 0xc5, 0x94, 0x6f, 0xeb, 0x42, 0x48, 0x19, 0xd1, 0x89, 0x90, 0xa4,
    0xdd, 0x9d, 0x6a, 0x6d, 0x8e, 0x47, 0x46, 0x5c, 0xce, 0xac, 0x08, 0x77, 0xef, 0x88, 0x9b, 0x93, 0xe7, 0xeb, 0xa9, 0x79, 0x55, 0x7e, 0x39, 0x35, 0xd7, 0xf8, 0x6d, 0xce, 0x11, 0xb0, 0x70, 0xf3,
    0x75, 0xc6, 0xf2, 0xae, 0x49, 0xa2, 0x05, 0x21, 0xde, 0x97, 0x28, 0x5b, 0x43, 0x1e, 0x71, 0x71, 0x25, 0x84, 0x7f, 0xb8, 0x93, 0x5e, 0xd8, 0x4a, 0x61, 0xe7, 0xf8, 0xd3, 0x6a, 0x2c, 0x3d, 0x8e,
};


// "cn/0"
const static uint8_t test_output_v0[256] = {
    0x1A, 0x3F, 0xFB, 0xEE, 0x90, 0x9B, 0x42, 0x0D, 0x91, 0xF7, 0xBE, 0x6E, 0x5F, 0xB5, 0x6D, 0xB7,
    0x1B, 0x31, 0x10, 0xD8, 0x86, 0x01, 0x1E, 0x87, 0x7E, 0xE5, 0x78, 0x6A, 0xFD, 0x08, 0x01, 0x00,
    0x1B, 0x60, 0x6A, 0x3F, 0x4A, 0x07, 0xD6, 0x48, 0x9A, 0x1B, 0xCD, 0x07, 0x69, 0x7B, 0xD1, 0x66,
    0x96, 0xB6, 0x1C, 0x8A, 0xE9, 0x82, 0xF6, 0x1A, 0x90, 0x16, 0x0F, 0x4E, 0x52, 0x82, 0x8A, 0x7F,
    0xA1, 0xB4, 0xFA, 0xE3, 0xE5, 0x76, 0xCE, 0xCF, 0xB7, 0x9C, 0xAF, 0x3E, 0x29, 0x92, 0xE4, 0xE0,
    0x31, 0x24, 0x05, 0x48, 0xBF, 0x8D, 0x5F, 0x7B, 0x11, 0x03, 0x60, 0xAA, 0xD7, 0x50, 0x3F, 0x0C,
    0x2D, 0x30, 0xF3, 0x87, 0x4F, 0x86, 0xA1, 0x4A, 0xB5, 0xA2, 0x1A, 0x08, 0xD0, 0x44, 0x2C, 0x9D,
    0x16, 0xE9, 0x28, 0x49, 0xA1, 0xFF, 0x85, 0x6F, 0x12, 0xBB, 0x7D, 0xAB, 0x11, 0x1C, 0xE7, 0xF7,
    0x2D, 0x9D, 0x19, 0xE4, 0xD2, 0x26, 0x44, 0x1E, 0xCD, 0x22, 0x08, 0x24, 0xA8, 0x97, 0x46, 0x62,
    0x04, 0x84, 0x90, 0x4A, 0xEE, 0x99, 0x14, 0xED, 0xB8, 0xC6, 0x0D, 0x37, 0xA1, 0x66, 0x17, 0xB0
};


// "cn/1" Cryptonight variant 1 (Monero v7)
const static uint8_t test_output_v1[256] = {
    0xF2, 0x2D, 0x3D, 0x62, 0x03, 0xD2, 0xA0, 0x8B, 0x41, 0xD9, 0x02, 0x72, 0x78, 0xD8, 0xBC, 0xC9,
    0x83, 0xAC, 0xAD, 0xA9, 0xB6, 0x8E, 0x52, 0xE3, 0xC6, 0x89, 0x69, 0x2A, 0x50, 0xE9, 0x21, 0xD9,
    0xC9, 0xFA, 0xE8, 0x42, 0x5D, 0x86, 0x88, 0xDC, 0x23, 0x6B, 0xCD, 0xBC, 0x42, 0xFD, 0xB4, 0x2D,
    0x37, 0x6C, 0x6E, 0xC1, 0x90, 0x50, 0x1A, 0xA8, 0x4B, 0x04, 0xA4, 0xB4, 0xCF, 0x1E, 0xE1, 0x22,
    0xE7, 0x8C, 0x5A, 0x6E, 0x38, 0x30, 0x68, 0x4A, 0x73, 0xFC, 0x1B, 0xC6, 0x6D, 0xFC, 0x8D, 0x98,
    0xB4, 0xC2, 0x23, 0x39, 0xAD, 0xE0, 0x9D, 0xF6, 0x6D, 0x8C, 0x6A, 0xAA, 0xF9, 0xB2, 0xE3, 0x4C,
    0xB6, 0x90, 0x6C, 0xE6, 0x15, 0x5E, 0x46, 0x07, 0x9C, 0xB2, 0x6B, 0xAC, 0x3B, 0xAC, 0x1A, 0xDE,
    0x92, 0x2C, 0xD6, 0x0C, 0x46, 0x9D, 0x9B, 0xC2, 0x84, 0x52, 0x65, 0xF6, 0xBD, 0xFA, 0x0D, 0x74,
    0x00, 0x66, 0x10, 0x07, 0xF1, 0x19, 0x06, 0x3A, 0x6C, 0xFF, 0xEE, 0xB2, 0x40, 0xE5, 0x88, 0x2B,
    0x6C, 0xAB, 0x6B, 0x1D, 0x88, 0xB8, 0x44, 0x25, 0xF4, 0xEA, 0xB7, 0xEC, 0xBA, 0x12, 0x8A, 0x24
};


// "cn/2" Cryptonight variant 2 (Monero v8)
const static uint8_t test_output_v2[256] = {
    0x97, 0x37, 0x82, 0x82, 0xCF, 0x10, 0xE7, 0xAD, 0x03, 0x3F, 0x7B, 0x80, 0x74, 0xC4, 0x0E, 0x14,
    0xD0, 0x6E, 0x7F, 0x60, 0x9D, 0xDD, 0xDA, 0x78, 0x76, 0x80, 0xB5, 0x8C, 0x05, 0xF4, 0x3D, 0x21,
    0x87, 0x1F, 0xCD, 0x68, 0x23, 0xF6, 0xA8, 0x79, 0xBB, 0x3F, 0x33, 0x95, 0x1C, 0x8E, 0x8E, 0x89,
    0x1D, 0x40, 0x43, 0x88, 0x0B, 0x02, 0xDF, 0xA1, 0xBB, 0x3B, 0xE4, 0x98, 0xB5, 0x0E, 0x75, 0x78,
    0xE6, 0x0D, 0x24, 0x0F, 0x65, 0x85, 0x60, 0x3A, 0x4A, 0xE5, 0x5F, 0x54, 0x9B, 0xC8, 0x79, 0x93,
    0xEB, 0x3D, 0x98, 0x2C, 0xFE, 0x9B, 0xFB, 0x15, 0xB6, 0x88, 0x21, 0x94, 0xB0, 0x05, 0x86, 0x5C,
    0x59, 0x8B, 0x93, 0x7A, 0xDA, 0xD2, 0xA2, 0x14, 0xED, 0xB7, 0xC4, 0x5D, 0xA1, 0xEF, 0x26, 0xF3,
    0xC7, 0x73, 0x29, 0x4D, 0xF1, 0xC8, 0x2C, 0xE0, 0xD0, 0xE9, 0xED, 0x0C, 0x70, 0x75, 0x05, 0x3E,
    0x5B, 0xF6, 0xA0, 0x6E, 0xEA, 0xDE, 0x87, 0x0B, 0x06, 0x29, 0x03, 0xBF, 0xB4, 0x85, 0x9D, 0x04,
    0x75, 0x1A, 0xCD, 0x1E, 0xD6, 0xAA, 0x1B, 0x05, 0x24, 0x6A, 0x2C, 0x80, 0x69, 0x68, 0xDC, 0x97
};


// "cn/half"
const static uint8_t test_output_half[256] = {
    0x5D, 0x4F, 0xBC, 0x35, 0x60, 0x97, 0xEA, 0x64, 0x40, 0xB0, 0x88, 0x8E, 0xDE, 0xB6, 0x35, 0xDD,
    0xC8, 0x4A, 0x0E, 0x39, 0x7C, 0x86, 0x84, 0x56, 0x89, 0x5C, 0x3F, 0x29, 0xBE, 0x73, 0x12, 0xA7,
    0x02, 0xE6, 0x1D, 0x2B, 0xBC, 0x84, 0xB6, 0x71, 0x96, 0x71, 0xD5, 0x0C, 0xAC, 0x76, 0x0E, 0x6B,
    0xF1, 0xF0, 0x55, 0x34, 0x15, 0x29, 0x93, 0x04, 0x2D, 0xED, 0xD2, 0x33, 0x50, 0x6E, 0xBE, 0x25,
    0xD0, 0xFD, 0x8E, 0xC6, 0x15, 0xD5, 0x12, 0x53, 0x7B, 0x26, 0xF6, 0x01, 0xA5, 0xA8, 0xBE, 0x7C,
    0xCF, 0x5E, 0x19, 0xB7, 0x63, 0x0D, 0x0F, 0x02, 0x2B, 0xD7, 0xC4, 0x8C, 0x12, 0x24, 0x80, 0x02,
    0xE7, 0xB7, 0xA0, 0x4F, 0x94, 0xF9, 0x46, 0xB5, 0x18, 0x64, 0x7E, 0x4E, 0x9C, 0x81, 0x6C, 0x60,
    0x7D, 0x2E, 0xEA, 0xCF, 0x90, 0xCB, 0x68, 0x09, 0xC9, 0x53, 0xF6, 0xA9, 0xCA, 0x0C, 0xAC, 0xDC,
    0xFD, 0x07, 0xDA, 0x24, 0x1D, 0xD1, 0x35, 0x32, 0x3C, 0xE8, 0x64, 0x44, 0x5E, 0xCB, 0xB5, 0x00,
    0x69, 0xF4, 0x6F, 0xBB, 0x62, 0x0D, 0x25, 0xD8, 0xAC, 0x20, 0x90, 0xC5, 0x1B, 0xD3, 0x5F, 0xCA
};


// "cn/msr" Masari (MSR)
const static uint8_t test_output_msr[256] = {
    0x3C, 0x7A, 0x61, 0x08, 0x4C, 0x5E, 0xB8, 0x65, 0xB4, 0x98, 0xAB, 0x2F, 0x5A, 0x1A, 0xC5, 0x2C,
    0x49, 0xC1, 0x77, 0xC2, 0xD0, 0x13, 0x34, 0x42, 0xD6, 0x5E, 0xD5, 0x14, 0x33, 0x5C, 0x82, 0xC5,
    0x69, 0xDF, 0x38, 0x51, 0x1B, 0xB3, 0xEB, 0x7D, 0xE7, 0x6B, 0x08, 0x8E, 0xB6, 0x7E, 0xB7, 0x1C,
    0x5F, 0x3C, 0x81, 0xC9, 0xF7, 0xCE, 0xAE, 0x28, 0xC0, 0xFE, 0xEB, 0xBA, 0x0B, 0x40, 0x38, 0x1D,
    0x44, 0xD0, 0xD5, 0xD3, 0x98, 0x1F, 0xA3, 0x0E, 0xE9, 0x89, 0x1A, 0xD7, 0x88, 0xCC, 0x25, 0x76,
    0x9C, 0xFF, 0x4D, 0x7F, 0x9C, 0xCF, 0x48, 0x07, 0x91, 0xF9, 0x82, 0xF5, 0x4C, 0xE9, 0xBD, 0x82,
    0x36, 0x36, 0x64, 0x14, 0xED, 0xB8, 0x54, 0xEE, 0x22, 0xA1, 0x66, 0xA3, 0x87, 0x10, 0x76, 0x1F,
    0x5A, 0xCD, 0x4C, 0x31, 0x4C, 0xBA, 0x41, 0xD2, 0xDB, 0x6C, 0x31, 0x2E, 0x7A, 0x64, 0x15, 0xFF,
    0xA6, 0xD9, 0xB9, 0x7D, 0x1C, 0x3C, 0x98, 0xDD, 0x16, 0xE6, 0xD3, 0xAA, 0xEF, 0xB6, 0xB3, 0x53,
    0x74, 0xD1, 0xAC, 0x5C, 0x04, 0x26, 0x7D, 0x71, 0xDE, 0xAB, 0x66, 0x28, 0x91, 0x3A, 0x6F, 0x4F
};


// "cn/xao" Alloy (XAO)
const static uint8_t test_output_xao[256] = {
    0x9A, 0x29, 0xD0, 0xC4, 0xAF, 0xDC, 0x63, 0x9B, 0x65, 0x53, 0xB1, 0xC8, 0x37, 0x35, 0x11, 0x4C,
    0x5D, 0x77, 0x16, 0x21, 0x42, 0x97, 0x5C, 0xB8, 0x50, 0xC0, 0xA5, 0x1F, 0x64, 0x07, 0xBD, 0x33,
    0xF1, 0xC9, 0x98, 0x40, 0x42, 0xDE, 0x39, 0xD1, 0xBA, 0x2D, 0xAD, 0xEC, 0xFE, 0xEA, 0xD8, 0x46,
    0x56, 0x1C, 0x32, 0x90, 0x42, 0x63, 0x10, 0x80, 0xD7, 0x01, 0xE4, 0xE6, 0x20, 0xB3, 0x60, 0x45,
    0x05, 0xE5, 0xC2, 0x18, 0xCD, 0x07, 0xA4, 0x40, 0x42, 0x91, 0xE2, 0xA4, 0x52, 0x54, 0x79, 0xBA,
    0xCD, 0x7E, 0x61, 0x2D, 0x7F, 0x7E, 0x69, 0x5E, 0xD7, 0xC0, 0x06, 0x65, 0xD7, 0xA1, 0xB8, 0xB8,
    0x1E, 0x31, 0x1C, 0xD3, 0xB7, 0xBC, 0x78, 0x3C, 0x01, 0xAF, 0x77, 0xAA, 0xF3, 0x0F, 0x4C, 0xF2,
    0xD1, 0x8B, 0x58, 0xC7, 0xEB, 0x99, 0x91, 0x53, 0x43, 0x71, 0x47, 0x99, 0x9E, 0x04, 0xA4, 0xEA,
    0xB8, 0xA3, 0xB0, 0x9E, 0x09, 0xF5, 0x57, 0x5C, 0xCF, 0x8A, 0xC6, 0xCA, 0x88, 0x51, 0x9A, 0x01,
    0x31, 0xCC, 0x0C, 0xA6, 0x53, 0xB5, 0x5F, 0xFD, 0x7D, 0x29, 0x3A, 0x35, 0xE9, 0x0E, 0x25, 0x6C
};


// "cn/rto" Arto (RTO)
const static uint8_t test_output_rto[256] = {
    0x82, 0x66, 0x1E, 0x1C, 0x6E, 0x64, 0x36, 0x66, 0x84, 0x06, 0x32, 0x7A, 0x9B, 0xB1, 0x13, 0x19,
    0xA5, 0x56, 0x16, 0x15, 0xDF, 0xEC, 0x1C, 0x9E, 0xE3, 0x88, 0x4A, 0x6C, 0x1C, 0xEB, 0x76, 0xA5,
    0xB3, 0xFB, 0xF4, 0x3F, 0x2B, 0x6A, 0x3A, 0x39, 0xA3, 0x6E, 0x08, 0x33, 0x67, 0x90, 0x31, 0xB9,
    0x3F, 0x27, 0xE4, 0x79, 0x32, 0x61, 0x6B, 0x5C, 0x8A, 0xF8, 0xAF, 0xC0, 0x60, 0xFD, 0x83, 0xB7,
    0x11, 0x11, 0x89, 0xB4, 0xDC, 0xAE, 0x40, 0xC8, 0x64, 0xAA, 0x4D, 0x19, 0x23, 0x7B, 0xD3, 0x27,
    0xB2, 0x0F, 0xA7, 0x50, 0x7D, 0xCA, 0xF5, 0x03, 0x06, 0xB2, 0x26, 0x62, 0xF3, 0x68, 0x2D, 0x30,
    0x6F, 0x93, 0x1E, 0xFF, 0xCD, 0x85, 0x40, 0x28, 0x5F, 0xC3, 0x8C, 0x76, 0x51, 0x9E, 0xD5, 0x06,
    0x32, 0xD6, 0x35, 0x83, 0xF6, 0x3B, 0x54, 0x4F, 0xA1, 0x9C, 0x13, 0xD8, 0xC4, 0x0E, 0x01, 0x2F,
    0x29, 0xDB, 0x8C, 0x1C, 0xB7, 0x06, 0x86, 0x79, 0x6D, 0xFF, 0x9F, 0x89, 0x3B, 0x3A, 0xA5, 0x79,
    0xE7, 0x81, 0x4E, 0x2A, 0xBD, 0x62, 0xC1, 0x1B, 0x7C, 0xB9, 0x33, 0x7B, 0xEE, 0x95, 0x80, 0xB3
};

// "cn/rwz"
const static uint8_t test_output_rwz[256] = {
    0x5f, 0x56, 0xc6, 0xb0, 0x99, 0x6b, 0xa2, 0x3e, 0x0b, 0xba, 0x07, 0x29, 0xc9, 0x90, 0x74, 0x85,
    0x5a, 0x10, 0xe3, 0x08, 0x7f, 0xdb, 0xfe, 0x94, 0x75, 0x33, 0x54, 0x73, 0x76, 0xf0, 0x75, 0xb8,
    0x8b, 0x70, 0x43, 0x9a, 0xfc, 0xf5, 0xeb, 0x15, 0xbb, 0xf9, 0xad, 0x9d, 0x2a, 0xbd, 0x72, 0x52,
    0x49, 0x54, 0x0b, 0x91, 0xea, 0x61, 0x7f, 0x98, 0x7d, 0x39, 0x17, 0xb7, 0xd7, 0x65, 0xff, 0x75,
    0x13, 0x21, 0x1d, 0xce, 0x61, 0x5a, 0xdc, 0x5f, 0x8c, 0xcb, 0x1f, 0x6f, 0xbb, 0x92, 0x88, 0xc3,
    0xe3, 0xe2, 0xfc, 0x4f, 0x62, 0xfb, 0xf0, 0x48, 0x02, 0x01, 0xd3, 0xbe, 0x77, 0x6a, 0x40, 0xca,
    0x9a, 0xe9, 0xba, 0x0c, 0xc0, 0x2b, 0x11, 0xf6, 0x9b, 0xee, 0x24, 0x3a, 0xd8, 0x86, 0x18, 0xd0,
    0xe8, 0xeb, 0xcb, 0x38, 0x2c, 0xf5, 0x99, 0x83, 0x14, 0x7b, 0x0c, 0x20, 0xbe, 0x50, 0xf4, 0x87,
    0x83, 0x41, 0x75, 0xd8, 0xd1, 0xdd, 0x4b, 0x73, 0xb3, 0x92, 0x8f, 0xe6, 0x1c, 0x72, 0x70, 0xf5,
    0x7c, 0xf6, 0x23, 0x3a, 0xb4, 0x5f, 0xdf, 0xde, 0xa6, 0x5a, 0x58, 0xec, 0x13, 0x5a, 0x23, 0x2f
};

// "cn/zls"
const static uint8_t test_output_zls[256] = {
    0x51, 0x6E, 0x33, 0xC6, 0xE4, 0x46, 0xAB, 0xBC, 0xCD, 0xAD, 0x18, 0xC0, 0x4C, 0xD9, 0xA2, 0x5E,
    0x64, 0x10, 0x28, 0x53, 0xB2, 0x0A, 0x42, 0xDF, 0xDE, 0xAA, 0x8B, 0x59, 0x9E, 0xCF, 0x40, 0xE2,
    0x0D, 0x62, 0x5B, 0x42, 0x18, 0xE2, 0x76, 0xAD, 0xD0, 0x74, 0x90, 0x60, 0x8D, 0xC4, 0xC7, 0x80,
    0x17, 0xB5, 0x1B, 0x25, 0x31, 0x39, 0x87, 0xD2, 0x2D, 0x6A, 0x9D, 0x1C, 0x74, 0xF4, 0x43, 0x22,
    0x4B, 0x97, 0x1F, 0x6A, 0xD0, 0xBE, 0x00, 0x74, 0xEC, 0xC5, 0xD8, 0x3B, 0xE6, 0xF4, 0x03, 0x8A,
    0x7B, 0xBA, 0x80, 0xCC, 0x9F, 0x00, 0xCB, 0xC2, 0x14, 0x8F, 0xF3, 0xD8, 0x92, 0x73, 0xBF, 0x17,
    0x3D, 0x9B, 0x22, 0xA3, 0x61, 0x94, 0x41, 0x9E, 0xF9, 0x68, 0x1D, 0x42, 0x48, 0x3B, 0x39, 0x45,
    0xE2, 0xE6, 0x16, 0x84, 0xFC, 0x21, 0xE6, 0xDA, 0x38, 0x7F, 0x17, 0xAB, 0xD3, 0xF2, 0xCE, 0x1A,
    0x2F, 0x35, 0xD5, 0x74, 0xFA, 0x45, 0x3B, 0x06, 0xD1, 0x4E, 0x84, 0x3A, 0x5D, 0xE3, 0x0E, 0xA5,
    0x00, 0x08, 0x64, 0xF0, 0xA6, 0xC8, 0x94, 0x45, 0x08, 0xED, 0x03, 0x95, 0x52, 0xE9, 0xBC, 0x5F
};

// "cn/ccx"
const static uint8_t test_output_ccx[256] = {
    0xB3, 0xA1, 0x67, 0x86, 0xD2, 0xC9, 0x85, 0xEC, 0xAD, 0xC4, 0x5F, 0x91, 0x05, 0x27, 0xC7, 0xA1,
    0x96, 0xF0, 0xE1, 0xE9, 0x7C, 0x87, 0x09, 0x38, 0x1D, 0x7D, 0x41, 0x93, 0x35, 0xF8, 0x16, 0x72,
    0xC3, 0xBD, 0x8D, 0xE8, 0xD5, 0xAE, 0xB8, 0x59, 0x0A, 0x6C, 0xCB, 0x7B, 0x41, 0x30, 0xF7, 0x04,
    0xA5, 0x7C, 0xF9, 0xCA, 0x20, 0x49, 0x9C, 0xFD, 0xE8, 0x43, 0xCF, 0x66, 0x78, 0xEA, 0x76, 0xDD,
    0x91, 0x0C, 0xDE, 0x29, 0x2A, 0xE0, 0xA8, 0xCA, 0xBC, 0xAA, 0x53, 0x4C, 0x93, 0x3E, 0x7B, 0x2C,
    0xF1, 0xF9, 0xE1, 0x98, 0xB2, 0x92, 0x1E, 0x19, 0x93, 0x2A, 0x74, 0x9D, 0xDB, 0x10, 0x0F, 0x16,
    0xD5, 0x3D, 0xE4, 0xC4, 0x23, 0xD9, 0x2E, 0xFD, 0x79, 0x8D, 0x1E, 0x48, 0x4E, 0x46, 0x08, 0x6C,
    0xFF, 0x8A, 0x49, 0xFA, 0x1E, 0xB0, 0xB6, 0x9A, 0x47, 0x1C, 0xC6, 0x30, 0x36, 0x5D, 0xFD, 0x76,
    0x10, 0x07, 0x44, 0xE6, 0xC8, 0x20, 0x2A, 0x84, 0x9D, 0x70, 0x22, 0x00, 0x8B, 0x9B, 0xBD, 0x8D,
    0x27, 0x49, 0xA6, 0x06, 0xDC, 0xF0, 0xA1, 0x4B, 0x50, 0xA0, 0x12, 0xCD, 0x77, 0x01, 0x4C, 0x28
};

// "cn/double"
const static uint8_t test_output_double[256] = {
    0xAE, 0xFB, 0xB3, 0xF0, 0xCC, 0x88, 0x04, 0x6D, 0x11, 0x9F, 0x6C, 0x54, 0xB9, 0x6D, 0x90, 0xC9,
    0xE8, 0x84, 0xEA, 0x3B, 0x59, 0x83, 0xA6, 0x0D, 0x50, 0xA4, 0x2D, 0x7D, 0x3E, 0xBE, 0x48, 0x21,
    0x49, 0xCE, 0x8E, 0xF3, 0xBC, 0x8A, 0x36, 0xBF, 0x86, 0x37, 0x89, 0x55, 0x09, 0xBA, 0x22, 0xF8,
    0xEB, 0x3A, 0xE1, 0xDC, 0x91, 0xF7, 0x62, 0x4B, 0x9F, 0x48, 0xE6, 0x92, 0xBD, 0xE4, 0x5D, 0xC1,
    0xF1, 0x3C, 0x63, 0x1D, 0xEB, 0x0B, 0x04, 0xA3, 0x30, 0xD5, 0x11, 0x15, 0x4C, 0xCE, 0xEF, 0x4F,
    0xDF, 0x69, 0xE3, 0x9E, 0xD2, 0x68, 0xFC, 0x1B, 0x6F, 0xE8, 0x08, 0x9C, 0xBB, 0xA5, 0x2B, 0x60,
    0x52, 0x0F, 0xE5, 0xD2, 0xF3, 0x8A, 0xB3, 0xE1, 0x76, 0x7F, 0x44, 0x25, 0x76, 0xEC, 0xFF, 0xA2,
    0x0C, 0x64, 0xD0, 0x0E, 0x32, 0x33, 0x28, 0x20, 0x73, 0xE0, 0x31, 0x66, 0x4E, 0x54, 0x83, 0x49,
    0x51, 0x55, 0x4D, 0x2E, 0x22, 0xB7, 0x51, 0x09, 0x73, 0x61, 0x7E, 0x6A, 0x57, 0x0B, 0x28, 0x3C,
    0x5E, 0x2E, 0xC1, 0x80, 0x89, 0x39, 0xB3, 0x54, 0x39, 0x52, 0x0E, 0x69, 0x3D, 0xF6, 0xC5, 0x4A
};

#ifdef XMRIG_ALGO_CN_LITE
// "cn-lite/0"
const static uint8_t test_output_v0_lite[256] = {
    0x36, 0x95, 0xB4, 0xB5, 0x3B, 0xB0, 0x03, 0x58, 0xB0, 0xAD, 0x38, 0xDC, 0x16, 0x0F, 0xEB, 0x9E,
    0x00, 0x4E, 0xEC, 0xE0, 0x9B, 0x83, 0xA7, 0x2E, 0xF6, 0xBA, 0x98, 0x64, 0xD3, 0x51, 0x0C, 0x88,
    0x28, 0xA2, 0x2B, 0xAD, 0x3F, 0x93, 0xD1, 0x40, 0x8F, 0xCA, 0x47, 0x2E, 0xB5, 0xAD, 0x1C, 0xBE,
    0x75, 0xF2, 0x1D, 0x05, 0x3C, 0x8C, 0xE5, 0xB3, 0xAF, 0x10, 0x5A, 0x57, 0x71, 0x3E, 0x21, 0xDD,
    0x38, 0x08, 0xE1, 0x17, 0x0B, 0x99, 0x8D, 0x1A, 0x3C, 0xCE, 0x35, 0xC5, 0xC7, 0x3A, 0x00, 0x2E,
    0xCB, 0x54, 0xF0, 0x78, 0x2E, 0x9E, 0xDB, 0xC7, 0xDF, 0x2E, 0x71, 0x9A, 0x16, 0x97, 0xC4, 0x18,
    0x4B, 0x97, 0x07, 0xFE, 0x5D, 0x98, 0x9A, 0xD6, 0xD8, 0xE5, 0x92, 0x66, 0x87, 0x7F, 0x19, 0x37,
    0xA2, 0x5E, 0xE6, 0x96, 0xB5, 0x97, 0x33, 0x89, 0xE0, 0xA7, 0xC9, 0xDD, 0x4A, 0x7E, 0x9E, 0x53,
    0xBE, 0x91, 0x2B, 0xF5, 0xF5, 0xAF, 0xDD, 0x09, 0xA2, 0xF4, 0xA4, 0x56, 0xEB, 0x96, 0x22, 0xC9,
    0x94, 0xFB, 0x7B, 0x28, 0xC9, 0x97, 0x65, 0x04, 0xAC, 0x4F, 0x84, 0x71, 0xDA, 0x6E, 0xD8, 0xC5
};


// "cn-lite/1" AEON v7
const static uint8_t test_output_v1_lite[256] = {
    0x6D, 0x8C, 0xDC, 0x44, 0x4E, 0x9B, 0xBB, 0xFD, 0x68, 0xFC, 0x43, 0xFC, 0xD4, 0x85, 0x5B, 0x22,
    0x8C, 0x8A, 0x1B, 0xD9, 0x1D, 0x9D, 0x00, 0x28, 0x5B, 0xEC, 0x02, 0xB7, 0xCA, 0x2D, 0x67, 0x41,
    0x87, 0xC4, 0xE5, 0x70, 0x65, 0x3E, 0xB4, 0xC2, 0xB4, 0x2B, 0x7A, 0x0D, 0x54, 0x65, 0x59, 0x45,
    0x2D, 0xFA, 0xB5, 0x73, 0xB8, 0x2E, 0xC5, 0x2F, 0x15, 0x2B, 0x7F, 0xF9, 0x8E, 0x79, 0x44, 0x6F,
    0x16, 0x08, 0x74, 0xC7, 0xA2, 0xD2, 0xA3, 0x97, 0x95, 0x76, 0xCA, 0x4D, 0x06, 0x39, 0x7A, 0xAB,
    0x6C, 0x87, 0x58, 0x33, 0x4D, 0xC8, 0x5A, 0xAB, 0x04, 0x27, 0xFE, 0x8B, 0x1C, 0x23, 0x2F, 0x32,
    0xC0, 0x44, 0xFF, 0x0D, 0xB5, 0x3B, 0x27, 0x96, 0x06, 0x89, 0x7B, 0xA3, 0x0B, 0xD0, 0xCE, 0x9E,
    0x90, 0x22, 0x77, 0x5A, 0xAD, 0xA1, 0xE5, 0xB6, 0xFC, 0xCB, 0x39, 0x7E, 0x2B, 0x10, 0xEE, 0xB4,
    0x8C, 0x2B, 0xA4, 0x1F, 0x60, 0x76, 0x39, 0xD7, 0xF6, 0x46, 0x77, 0x18, 0x20, 0xAD, 0xD4, 0xC9,
    0x87, 0xF7, 0x37, 0xDA, 0xFD, 0xBA, 0xBA, 0xD2, 0xF2, 0x68, 0xDC, 0x26, 0x8D, 0x1B, 0x08, 0xC6
};
#endif


#ifdef XMRIG_ALGO_CN_HEAVY
// "cn-heavy/0"
const static uint8_t test_output_v0_heavy[256] = {
    0x99, 0x83, 0xF2, 0x1B, 0xDF, 0x20, 0x10, 0xA8, 0xD7, 0x07, 0xBB, 0x2F, 0x14, 0xD7, 0x86, 0x64,
    0xBB, 0xE1, 0x18, 0x7F, 0x55, 0x01, 0x4B, 0x39, 0xE5, 0xF3, 0xD6, 0x93, 0x28, 0xE4, 0x8F, 0xC2,
    0x4D, 0x94, 0x7D, 0xD6, 0xDB, 0x6E, 0x07, 0x48, 0x26, 0x4A, 0x51, 0x2E, 0xAC, 0xF3, 0x25, 0x4A,
    0x1F, 0x1A, 0xA2, 0x5B, 0xFC, 0x0A, 0xAD, 0x82, 0xDE, 0xA8, 0x99, 0x96, 0x88, 0x52, 0xD2, 0x7D,
    0x3E, 0xE1, 0x23, 0x03, 0x5A, 0x63, 0x7B, 0x66, 0xF6, 0xD7, 0xC2, 0x2A, 0x34, 0x5E, 0x88, 0xE7,
    0xFA, 0xC4, 0x25, 0x36, 0x54, 0xCB, 0xD2, 0x5C, 0x2F, 0x80, 0x2A, 0xF9, 0xCC, 0x43, 0xF7, 0xCD,
    0xE5, 0x18, 0xA8, 0x05, 0x60, 0x18, 0xA5, 0x73, 0x72, 0x9B, 0x32, 0xDC, 0x69, 0x83, 0xC1, 0xE1,
    0x1F, 0xDB, 0xDA, 0x6B, 0xAC, 0xEC, 0x9F, 0x67, 0xF8, 0x27, 0x1D, 0xC7, 0xE6, 0x46, 0x42, 0xF9,
    0x53, 0x62, 0x0A, 0x54, 0x7D, 0x43, 0xEA, 0x18, 0x94, 0xED, 0xD8, 0x92, 0x06, 0x6A, 0xA1, 0x51,
    0xAD, 0xB1, 0xFD, 0x89, 0xFB, 0x5C, 0xB4, 0x25, 0x6A, 0xDD, 0xB0, 0x09, 0xC5, 0x72, 0x87, 0xEB
};


// "cn-heavy/xhv"
const static uint8_t test_output_xhv_heavy[256] = {
    0x5A, 0xC3, 0xF7, 0x85, 0xC4, 0x90, 0xC5, 0x85, 0x50, 0xEC, 0x95, 0xD2, 0x72, 0x65, 0x63, 0x57,
    0x7E, 0x7C, 0x1C, 0x21, 0x2D, 0x0C, 0xDE, 0x59, 0x12, 0x73, 0x20, 0x1E, 0x44, 0xFD, 0xD5, 0xB6,
    0x1F, 0x4E, 0xB2, 0x0A, 0x36, 0x51, 0x4B, 0xF5, 0x4D, 0xC9, 0xE0, 0x90, 0x2C, 0x16, 0x47, 0x3F,
    0xDE, 0x18, 0x29, 0x8E, 0xBB, 0x34, 0x2B, 0xEF, 0x7A, 0x04, 0x22, 0xD1, 0xB1, 0xF2, 0x48, 0xDA,
    0xE3, 0x7F, 0x4B, 0x4C, 0xB4, 0xDF, 0xE8, 0xD3, 0x70, 0xE2, 0xE7, 0x44, 0x25, 0x87, 0x12, 0xF9,
    0x8F, 0x28, 0x0B, 0xCE, 0x2C, 0xEE, 0xDD, 0x88, 0x94, 0x35, 0x48, 0x51, 0xAE, 0xC8, 0x9C, 0x0B,
    0xED, 0x2F, 0xE6, 0x0F, 0x39, 0x05, 0xB4, 0x4A, 0x8F, 0x38, 0x44, 0x2D, 0x4B, 0xE9, 0x7B, 0x81,
    0xC6, 0xB0, 0xE0, 0x0A, 0x39, 0x8C, 0x38, 0xFE, 0x63, 0x31, 0x47, 0x65, 0x0D, 0x2B, 0xF4, 0x96,
    0x13, 0x91, 0x89, 0xB4, 0x5B, 0xA9, 0x2A, 0x7A, 0x09, 0x65, 0x14, 0x20, 0x76, 0x24, 0x6C, 0x80,
    0x1D, 0x3F, 0x9F, 0xCD, 0x68, 0x39, 0xA9, 0x42, 0x27, 0xC1, 0x0C, 0x53, 0x98, 0x35, 0x60, 0x7A
};


// "cn-heavy/tube"
const static uint8_t test_output_tube_heavy[256] = {
    0xFE, 0x53, 0x35, 0x20, 0x76, 0xEA, 0xE6, 0x89, 0xFA, 0x3B, 0x4F, 0xDA, 0x61, 0x46, 0x34, 0xCF,
    0xC3, 0x12, 0xEE, 0x0C, 0x38, 0x7D, 0xF2, 0xB8, 0xB7, 0x4D, 0xA2, 0xA1, 0x59, 0x74, 0x12, 0x35,
    0xCD, 0x3F, 0x29, 0xDF, 0x07, 0x4A, 0x14, 0xAD, 0x0B, 0x98, 0x99, 0x37, 0xCA, 0x14, 0x68, 0xA3,
    0x8D, 0xAE, 0x86, 0xC1, 0xA3, 0x54, 0x05, 0xBE, 0xEA, 0x6D, 0x29, 0x24, 0x0C, 0x82, 0x97, 0x74,
    0xA0, 0x64, 0x77, 0xCD, 0x8D, 0x8A, 0xC3, 0x10, 0xB4, 0x89, 0x0E, 0xBB, 0x7D, 0xE6, 0x32, 0x8F,
    0xF4, 0x2D, 0xB6, 0x9E, 0x8A, 0xF9, 0xF8, 0xEE, 0x2C, 0xD0, 0x74, 0xED, 0xA9, 0xAA, 0xA1, 0xFB,
    0xE2, 0xC9, 0x89, 0x66, 0xD6, 0x66, 0x52, 0xA2, 0x16, 0xDA, 0x36, 0xA0, 0x10, 0x62, 0xD2, 0xB1,
    0x76, 0xD1, 0x31, 0xE9, 0x1C, 0x08, 0xB6, 0xCA, 0xAF, 0x89, 0xB9, 0x3D, 0x2C, 0xFA, 0x9A, 0x30,
    0x74, 0x6A, 0x96, 0xA1, 0x95, 0x6C, 0xBB, 0x46, 0x4D, 0xE0, 0xEB, 0x28, 0xBE, 0x2A, 0x8C, 0x34,
    0x57, 0x79, 0xBE, 0x52, 0xFB, 0xBC, 0x68, 0x43, 0x45, 0xF4, 0xDF, 0xA5, 0xA8, 0xFD, 0x55, 0xA6
};
#endif


#ifdef XMRIG_ALGO_CN_PICO
// "cn-pico/trtl"
const static uint8_t test_output_pico_trtl[256] = {
    0x08, 0xF4, 0x21, 0xD7, 0x83, 0x31, 0x17, 0x30, 0x0E, 0xDA, 0x66, 0xE9, 0x8F, 0x4A, 0x25, 0x69,
    0x09, 0x3D, 0xF3, 0x00, 0x50, 0x01, 0x73, 0x94, 0x4E, 0xFC, 0x40, 0x1E, 0x9A, 0x4A, 0x17, 0xAF,
    0xB2, 0x17, 0x2E, 0xC9, 0x46, 0x6E, 0x1A, 0xEE, 0x70, 0xEC, 0x85, 0x72, 0xA1, 0x4C, 0x23, 0x3E,
    0xE3, 0x54, 0x58, 0x2B, 0xCB, 0x93, 0xF8, 0x69, 0xD4, 0x29, 0x74, 0x4D, 0xE5, 0x72, 0x6A, 0x26,
    0x4E, 0xFD, 0x28, 0xFC, 0xD3, 0x74, 0x8A, 0x83, 0xF3, 0xCA, 0x92, 0x84, 0xE7, 0x4E, 0x10, 0xC2,
    0x05, 0x62, 0xC7, 0xBE, 0x99, 0x73, 0xED, 0x90, 0xB5, 0x6F, 0xDA, 0x64, 0x71, 0x2D, 0x99, 0x39,
    0x29, 0xDB, 0x22, 0x2B, 0x97, 0xB6, 0x37, 0x0E, 0x9A, 0x03, 0x65, 0xCC, 0xF7, 0xD0, 0x9A, 0xB7,
    0x68, 0xCE, 0x07, 0x3E, 0x15, 0x40, 0x3C, 0xCE, 0x8C, 0x63, 0x16, 0x72, 0xB5, 0x74, 0x84, 0xF4,
    0xA1, 0xE7, 0x53, 0x85, 0xFB, 0x72, 0xDD, 0x75, 0x90, 0x39, 0xB2, 0x3D, 0xC3, 0x08, 0x2C, 0xD5,
    0x01, 0x08, 0x27, 0x75, 0x86, 0xB9, 0xBB, 0x9B, 0xDF, 0xEA, 0x49, 0xDE, 0x46, 0xCB, 0x83, 0x45
};


// "cn-pico/tlo"
const static uint8_t test_output_pico_tlo[256] = {
    0x99, 0x75, 0xF2, 0xC1, 0xB3, 0xB4, 0x54, 0x34, 0xA4, 0x93, 0x86, 0x21, 0x30, 0x97, 0xF3, 0x1B,
    0xB4, 0xB9, 0xA6, 0x58, 0x6A, 0x7E, 0x81, 0xF4, 0x42, 0x9F, 0x6D, 0x5F, 0x65, 0xC3, 0x8D, 0x1A,
    0xFC, 0x67, 0xDF, 0xCC, 0xB5, 0xFC, 0x90, 0xD7, 0x85, 0x5A, 0xE9, 0x03, 0x36, 0x1E, 0xAB, 0xD7,
    0x6F, 0x1E, 0x40, 0xA2, 0x2A, 0x72, 0xAD, 0x3E, 0xF2, 0xD6, 0xAD, 0x27, 0xB5, 0xA6, 0x0C, 0xE5,
    0x1C, 0xB1, 0x53, 0xE9, 0x70, 0x7D, 0x69, 0xF1, 0xE1, 0x55, 0x28, 0x45, 0xF5, 0x76, 0x56, 0xE5,
    0x10, 0x0D, 0xEA, 0xFD, 0xD9, 0xD6, 0xAF, 0x0F, 0x47, 0x0C, 0x0D, 0xA2, 0x10, 0x16, 0x43, 0xEE,
    0x25, 0x2C, 0x07, 0x3A, 0x64, 0x29, 0x16, 0xFF, 0xF5, 0xA5, 0x0B, 0xA2, 0xE0, 0xBD, 0xDC, 0xCE,
    0x93, 0x3F, 0xEF, 0x6B, 0x08, 0xF4, 0x4D, 0x6A, 0x6E, 0x14, 0x13, 0x10, 0x98, 0x11, 0xE1, 0x13,
    0xF6, 0x9D, 0x3D, 0x31, 0xC4, 0x3A, 0xA9, 0x44, 0x4C, 0x38, 0xAB, 0xB5, 0x4B, 0xD9, 0xFB, 0xE6,
    0x98, 0xB9, 0x46, 0xE2, 0x00, 0xEB, 0x56, 0x33, 0x1E, 0xBC, 0xEB, 0xF1, 0xF6, 0x88, 0xD3, 0xF0
};
#endif


#ifdef XMRIG_ALGO_CN_GPU
// "cn/gpu"
const static uint8_t test_output_gpu[160] = {
    0xE5, 0x5C, 0xB2, 0x3E, 0x51, 0x64, 0x9A, 0x59, 0xB1, 0x27, 0xB9, 0x6B, 0x51, 0x5F, 0x2B, 0xF7,
    0xBF, 0xEA, 0x19, 0x97, 0x41, 0xA0, 0x21, 0x6C, 0xF8, 0x38, 0xDE, 0xD0, 0x6E, 0xFF, 0x82, 0xDF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
#endif

#ifdef XMRIG_ALGO_CN_FEMTO
// "cn/upx2"
const static uint8_t test_output_femto_upx2[256] = {
    0xAA, 0xBB, 0xB8, 0xED, 0x14, 0xA8, 0x35, 0xFA, 0x22, 0xCF, 0xB1, 0xB5, 0xDE, 0xA8, 0x72, 0xB0,
    0xA1, 0xD6, 0xCB, 0xD8, 0x46, 0xF4, 0x39, 0x1C, 0x0F, 0x01, 0xF3, 0x87, 0x5E, 0x3A, 0x37, 0x61,
    0x38, 0x59, 0x15, 0x72, 0xF8, 0x20, 0xD4, 0xDE, 0x25, 0x3C, 0xF5, 0x5A, 0x21, 0x92, 0xB6, 0x22,
    0xB0, 0x28, 0x9E, 0x2E, 0x5C, 0x36, 0x16, 0xE6, 0x1E, 0x78, 0x7A, 0x8F, 0xE4, 0x62, 0xEC, 0x5A,
    0xFD, 0x58, 0xCC, 0x6F, 0x3C, 0xD3, 0x8A, 0x0B, 0x5B, 0x6C, 0x83, 0x4E, 0x9B, 0xD4, 0xC2, 0x5A,
    0x43, 0x2C, 0x48, 0x98, 0xF3, 0x16, 0xCA, 0x87, 0xE9, 0x5F, 0x44, 0x93, 0x53, 0x48, 0x00, 0xA3,
    0xE8, 0xE4, 0xB6, 0x9D, 0x5A, 0x3B, 0x49, 0x2C, 0x21, 0xE9, 0x4B, 0x02, 0xFC, 0x87, 0x8D, 0x75,
    0x66, 0x05, 0xAF, 0xA3, 0x9D, 0xC9, 0xD8, 0x88, 0x2D, 0x67, 0x31, 0x21, 0x4C, 0x4D, 0x88, 0x7D,
    0x86, 0x9E, 0x4D, 0x74, 0xF4, 0x4C, 0x57, 0x27, 0xCF, 0xEF, 0x86, 0x01, 0xB0, 0x52, 0x18, 0xF3,
    0xAD, 0xE4, 0x52, 0x5E, 0xB0, 0x4A, 0x97, 0xB4, 0x96, 0x18, 0xB6, 0x9C, 0x93, 0x0E, 0x49, 0xBB,
};
#endif


#ifdef XMRIG_ALGO_ARGON2
// "argon2/chukwa"
const static uint8_t argon2_chukwa_test_out[256] = {
    0xC1, 0x58, 0xA1, 0x05, 0xAE, 0x75, 0xC7, 0x56, 0x1C, 0xFD, 0x02, 0x90, 0x83, 0xA4, 0x7A, 0x87,
    0x65, 0x3D, 0x51, 0xF9, 0x14, 0x12, 0x8E, 0x21, 0xC1, 0x97, 0x1D, 0x8B, 0x10, 0xC4, 0x90, 0x34,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// "argon2/chukwav2"
const static uint8_t argon2_chukwa_v2_test_out[256] = {
    0x77, 0xCF, 0x69, 0x58, 0xB3, 0x53, 0x6E, 0x1F, 0x9F, 0x0D, 0x1E, 0xA1, 0x65, 0xF2, 0x28, 0x11,
    0xCA, 0x7B, 0xC4, 0x87, 0xEA, 0x9F, 0x52, 0x03, 0x0B, 0x50, 0x50, 0xC1, 0x7F, 0xCD, 0xD8, 0xF5,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// "argon2/wrkz"
const static uint8_t argon2_wrkz_test_out[256] = {
    0x35, 0xE0, 0x83, 0xD4, 0xB9, 0xC6, 0x4C, 0x2A, 0x68, 0x82, 0x0A, 0x43, 0x1F, 0x61, 0x31, 0x19,
    0x98, 0xA8, 0xCD, 0x18, 0x64, 0xDB, 0xA4, 0x07, 0x7E, 0x25, 0xB7, 0xF1, 0x21, 0xD5, 0x4B, 0xD1,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
#endif


#ifdef XMRIG_ALGO_ASTROBWT
// "astrobwt"
const static uint8_t astrobwt_dero_test_out[256] = {
    0x7E, 0x88, 0x44, 0xF2, 0xD6, 0xB7, 0xA4, 0x34, 0x98, 0xFE, 0x6D, 0x22, 0x65, 0x27, 0x68, 0x90,
    0x23, 0xDA, 0x8A, 0x52, 0xF9, 0xFC, 0x4E, 0xC6, 0x9E, 0x5A, 0xAA, 0xA6, 0x3E, 0xDC, 0xE1, 0xC1,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

#endif


#ifdef XMRIG_ALGO_GHOSTRIDER
// "GhostRider"
const static uint8_t test_output_gr[256] = {
    0x42, 0x17, 0x0C, 0xC1, 0x85, 0xE6, 0x76, 0x3C, 0xC7, 0xCB, 0x27, 0xC4, 0x17, 0x39, 0x2D, 0xE2,
    0x29, 0x6B, 0x40, 0x66, 0x85, 0xA4, 0xE3, 0xD3, 0x8C, 0xE9, 0xA5, 0x8F, 0x10, 0xFC, 0x81, 0xE4,
    0x90, 0x56, 0xF2, 0x9E, 0x00, 0xD0, 0xF8, 0xA1, 0x88, 0x82, 0x86, 0xC0, 0x86, 0x04, 0x6B, 0x0E,
    0x9A, 0xDB, 0xDB, 0xFD, 0x23, 0x16, 0x77, 0x94, 0xFE, 0x58, 0x93, 0x05, 0x10, 0x3F, 0x27, 0x75,
    0x51, 0x44, 0xF3, 0x5F, 0xE2, 0xF9, 0x61, 0xBE, 0xC0, 0x30, 0xB5, 0x8E, 0xB1, 0x1B, 0xA1, 0xF7,
    0x06, 0x4E, 0xF1, 0x6A, 0xFD, 0xA5, 0x44, 0x8E, 0x64, 0x47, 0x8C, 0x67, 0x51, 0xE2, 0x5C, 0x55,
    0x3E, 0x39, 0xA6, 0xA5, 0xF7, 0xB8, 0xD0, 0x5E, 0xE2, 0xBF, 0x92, 0x44, 0xD9, 0xAA, 0x76, 0x22,
    0xE3, 0x3E, 0x15, 0x96, 0xD8, 0x6A, 0x78, 0x2D, 0xA9, 0x77, 0x24, 0x1A, 0x4B, 0xE7, 0x5A, 0x2E,
    0x89, 0x77, 0xAE, 0x92, 0xE4, 0xA4, 0x2D, 0xAF, 0x0B, 0x27, 0x09, 0xB2, 0x5F, 0x95, 0x61, 0xA9,
    0xA8, 0xBE, 0x5D, 0x39, 0xBE, 0x41, 0x5F, 0x9C, 0x67, 0x28, 0x48, 0x4F, 0xAE, 0x2A, 0x50, 0x2B,
    0xB8, 0xC7, 0x42, 0x73, 0x51, 0x60, 0x59, 0xD8, 0x9C, 0xBA, 0x22, 0x2F, 0x8E, 0x34, 0xDE, 0xC8,
    0x1B, 0xAE, 0x9E, 0xBD, 0xF7, 0xE8, 0xFD, 0x8A, 0x97, 0xBE, 0xF0, 0x47, 0xAC, 0x27, 0xDD, 0x28,
    0xC9, 0x28, 0xA8, 0x7B, 0x2A, 0xB8, 0x90, 0x3E, 0xCA, 0xB4, 0x78, 0x44, 0xCE, 0xCD, 0x91, 0xEC,
    0xC2, 0x5A, 0x17, 0x59, 0x7C, 0x14, 0xF8, 0x95, 0x28, 0x14, 0xC3, 0xAD, 0xC4, 0xE1, 0x13, 0x5A,
    0xC4, 0xA7, 0xC7, 0x77, 0xAD, 0xF8, 0x09, 0x61, 0x16, 0xBB, 0xAA, 0x7E, 0xAB, 0xC3, 0x00, 0x25,
    0xBA, 0xA8, 0x97, 0xC7, 0x7D, 0x38, 0x46, 0x0E, 0x59, 0xAC, 0xCB, 0xAE, 0xFE, 0x3C, 0x6F, 0x01
};
#endif

#ifdef XMRIG_ALGO_MIKE
// "Mike"
const static uint8_t test_output_mike[256] = {
  0x4a, 0xad, 0xfc, 0x1b, 0xad, 0x21, 0x65, 0xa7, 0x69, 0x6f, 0x87, 0x3e, 0x5d, 0xb7, 0x3c, 0x20,
  0x5f, 0x3a, 0x4b, 0x87, 0xa3, 0x4b, 0x54, 0x35, 0x70, 0xca, 0xfc, 0x95, 0x48, 0xab, 0x5b,
  0x74, 0xfc, 0x9c, 0xb, 0xd8, 0xe5, 0x98, 0x1, 0xf1, 0x9f, 0x9e, 0x7f, 0xd4, 0xe4, 0xaf,
  0x7d, 0x14, 0x7d, 0xde, 0x8e, 0x8a, 0xdf, 0xe6, 0x4a, 0x30, 0x9a, 0x92, 0xf5, 0x12, 0x3f,
  0x16, 0xf3, 0xf0, 0xc7, 0x2f, 0xf7, 0x4b, 0x6, 0x82, 0xa5, 0x50, 0xa0, 0xb3, 0xb8, 0x81,
  0xa, 0xde, 0x29, 0x4e, 0xcd, 0x72, 0x57, 0x60, 0x4e, 0xc1, 0x23, 0x46, 0x1b, 0x39, 0x23,
  0xcc, 0x4a, 0x64, 0x7b, 0x2d, 0x8b, 0x4, 0xa1, 0xea, 0xa4, 0xa0, 0xf9, 0x3d, 0x7d, 0x26,
  0x22, 0xf0, 0xa6, 0xa, 0x18, 0x2c, 0xd5, 0x88, 0x4f, 0x47, 0xb7, 0x72, 0x83, 0xa9, 0xcd,
  0x17, 0x24, 0xb, 0x39, 0x3c, 0x54, 0x51, 0x47, 0xef, 0x77, 0x55, 0xa, 0x9b, 0x56, 0x6,
  0x47, 0xbe, 0xdb, 0x85, 0x78, 0x3a, 0x15, 0x31, 0x8c, 0x60, 0xce, 0xe9, 0x9a, 0x1f, 0xdd,
  0x8c, 0xcc, 0xf0, 0x17, 0xa5, 0x99, 0x17, 0xb5, 0x5d, 0x30, 0xae, 0x8d, 0x7a, 0xd2, 0xfd,
  0xd5, 0x66, 0xdd, 0x23, 0xa0, 0xca, 0x56, 0x66, 0x64, 0x6c, 0x38, 0xda, 0xdf, 0x91, 0x12,
  0x6, 0x9a, 0x11, 0x13, 0x4e, 0xcf, 0x71, 0xf4, 0xb, 0x26, 0x50, 0x7d, 0x0, 0x6f, 0xc4,
  0x39, 0xb5, 0xd, 0xaa, 0xa3, 0x60, 0x5e, 0x41, 0x82, 0xe0, 0xce, 0x38, 0x7f, 0x37, 0x90,
  0xac, 0x53, 0xbe, 0x46, 0xb4, 0x6a, 0xc4, 0xb8, 0xe1, 0x9f, 0x31, 0x9f, 0xf4, 0xff, 0x46,
  0x73, 0x92, 0xee, 0x64, 0xa6, 0x44, 0xac, 0xd4, 0x33, 0xb8, 0x3b, 0x84, 0x42, 0x7e, 0x9a,
  0x80, 0xf0, 0xa8, 0x71, 0xf0, 0x81, 0xc4, 0xc1, 0x52, 0xff, 0x27, 0x4e, 0x7, 0xf0, 0x70
};

#endif
} // namespace xmrig


#endif /* XMRIG_CRYPTONIGHT_TEST_H */
