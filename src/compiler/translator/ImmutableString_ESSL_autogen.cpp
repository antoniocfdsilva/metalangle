// GENERATED FILE - DO NOT EDIT.
// Generated by gen_builtin_symbols.py using data from builtin_variables.json and
// builtin_function_declarations.txt.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ImmutableString_ESSL_autogen.cpp: Wrapper for static or pool allocated char arrays, that are
// guaranteed to be valid and unchanged for the duration of the compilation. Implements
// mangledNameHash using perfect hash function from gen_builtin_symbols.py

#include "compiler/translator/ImmutableString.h"

std::ostream &operator<<(std::ostream &os, const sh::ImmutableString &str)
{
    return os.write(str.data(), str.length());
}

#if defined(_MSC_VER)
#    pragma warning(disable : 4309)  // truncation of constant value
#endif

namespace
{

constexpr int mangledkT1[] = {1020, 929,  545,  1331, 801,  1100, 1139, 842, 1699, 67,
                              225,  1267, 666,  508,  1168, 594,  856,  281, 1787, 368,
                              997,  1262, 515,  1643, 1506, 866,  806,  387, 804,  870,
                              1398, 1795, 1133, 726,  613,  1067, 1179};
constexpr int mangledkT2[] = {850,  1442, 459,  989,  793,  414,  841,  438, 619,  508,
                              969,  1234, 1369, 1399, 335,  1835, 1703, 106, 655,  1386,
                              748,  1589, 354,  1029, 1042, 1181, 295,  513, 1068, 1237,
                              1019, 748,  1321, 485,  1211, 1623, 1586};
constexpr int mangledkG[]  = {
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1629,
    0,    0,    0,    0,    0,    0,    0,    0,    943,  0,    0,    0,    0,    0,    0,    1794,
    0,    0,    0,    0,    1602, 732,  0,    0,    0,    740,  0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    1159, 0,    0,    1093, 957,  0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    272,  0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    1600, 0,    164,  0,    1390, 125,  0,    0,    0,    0,    0,
    0,    0,    0,    21,   0,    637,  0,    0,    0,    0,    520,  0,    0,    0,    0,    0,
    0,    0,    0,    0,    596,  0,    0,    0,    196,  0,    0,    311,  0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    843,  0,    0,    901,  0,    1805, 1223, 0,    0,    652,
    676,  0,    0,    0,    53,   1565, 0,    0,    0,    0,    0,    0,    0,    0,    1833, 0,
    402,  1585, 0,    0,    0,    0,    0,    0,    0,    1540, 116,  380,  684,  0,    0,    1637,
    603,  0,    0,    0,    518,  420,  0,    0,    0,    0,    1104, 583,  1779, 1064, 756,  0,
    0,    0,    0,    0,    0,    1259, 0,    430,  0,    0,    1355, 0,    247,  887,  69,   0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    49,   1726, 0,    804,  48,
    0,    0,    76,   270,  1581, 0,    0,    165,  0,    0,    0,    369,  1557, 0,    0,    0,
    0,    1455, 0,    305,  0,    0,    0,    0,    0,    0,    842,  0,    0,    443,  131,  791,
    0,    0,    0,    0,    0,    0,    1514, 161,  267,  0,    0,    0,    0,    0,    0,    0,
    0,    0,    686,  0,    758,  0,    0,    77,   1703, 0,    0,    0,    0,    688,  766,  0,
    1717, 0,    605,  0,    0,    1527, 1321, 0,    0,    0,    0,    0,    0,    0,    0,    505,
    1772, 0,    0,    0,    1534, 472,  0,    426,  84,   0,    0,    0,    0,    0,    66,   1486,
    0,    0,    0,    413,  555,  0,    0,    0,    1228, 0,    0,    0,    0,    0,    0,    0,
    912,  0,    975,  0,    1312, 0,    0,    0,    0,    431,  0,    0,    0,    0,    308,  568,
    0,    0,    0,    1351, 1110, 0,    0,    1664, 135,  224,  0,    0,    662,  0,    1337, 0,
    0,    57,   354,  0,    1370, 0,    1076, 0,    0,    313,  0,    0,    532,  551,  751,  735,
    0,    0,    375,  0,    0,    0,    1406, 738,  0,    0,    0,    114,  0,    770,  0,    0,
    0,    556,  109,  0,    442,  0,    0,    0,    0,    0,    1051, 99,   1640, 0,    0,    1622,
    117,  397,  0,    281,  1479, 0,    0,    0,    0,    0,    0,    0,    0,    476,  0,    0,
    532,  0,    365,  1745, 1515, 0,    0,    0,    0,    1066, 0,    0,    0,    642,  0,    32,
    0,    443,  1620, 0,    0,    0,    0,    0,    0,    512,  0,    0,    0,    0,    699,  1220,
    0,    130,  1361, 0,    324,  0,    0,    0,    0,    0,    656,  1786, 1227, 49,   1594, 911,
    440,  709,  1702, 458,  0,    868,  0,    0,    0,    311,  0,    1060, 0,    750,  0,    0,
    0,    335,  0,    0,    1203, 244,  0,    1440, 156,  683,  446,  387,  903,  0,    0,    0,
    332,  0,    0,    803,  0,    0,    0,    3,    0,    1037, 351,  1263, 256,  0,    1492, 0,
    1634, 1471, 0,    0,    0,    0,    400,  804,  0,    0,    0,    0,    921,  0,    0,    0,
    800,  0,    876,  0,    0,    0,    1541, 0,    0,    0,    0,    3,    1691, 746,  1690, 515,
    1653, 717,  0,    520,  0,    0,    711,  0,    0,    196,  0,    0,    0,    0,    0,    1633,
    17,   1809, 73,   0,    0,    503,  0,    594,  0,    18,   601,  115,  280,  0,    1198, 1832,
    0,    0,    261,  1157, 0,    164,  0,    0,    0,    618,  492,  0,    0,    41,   334,  900,
    0,    735,  0,    0,    0,    1759, 0,    0,    0,    0,    1122, 144,  0,    0,    0,    810,
    390,  752,  1273, 537,  0,    0,    583,  0,    1554, 0,    981,  827,  26,   42,   186,  8,
    0,    113,  393,  1581, 866,  0,    925,  1537, 1780, 1760, 199,  0,    0,    1105, 991,  0,
    474,  0,    871,  0,    0,    558,  0,    41,   0,    0,    883,  1597, 818,  813,  375,  0,
    327,  0,    0,    0,    387,  1663, 0,    0,    0,    497,  0,    0,    1133, 412,  0,    0,
    405,  0,    341,  452,  0,    254,  313,  1347, 1755, 0,    0,    0,    1762, 0,    619,  331,
    1159, 0,    0,    0,    0,    0,    1757, 0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    832,  492,  0,    0,    1351, 598,  157,  0,    0,    0,    0,    0,    1191, 135,
    606,  0,    0,    0,    0,    0,    244,  0,    726,  0,    0,    204,  0,    0,    0,    1772,
    0,    0,    0,    0,    379,  160,  1831, 34,   39,   0,    0,    446,  0,    189,  0,    381,
    1488, 1276, 1792, 0,    375,  650,  375,  6,    0,    1051, 0,    289,  0,    1673, 0,    0,
    1485, 0,    57,   1086, 928,  0,    0,    0,    783,  563,  31,   728,  256,  0,    1607, 0,
    0,    955,  1530, 1227, 0,    0,    0,    0,    0,    0,    0,    390,  0,    666,  0,    0,
    320,  896,  505,  0,    0,    971,  901,  0,    14,   682,  1529, 0,    408,  0,    1253, 0,
    0,    301,  723,  0,    0,    162,  949,  312,  354,  0,    473,  1470, 1737, 169,  0,    694,
    111,  43,   58,   742,  1431, 0,    1766, 0,    646,  0,    500,  115,  715,  1499, 0,    1508,
    350,  0,    678,  445,  204,  0,    0,    0,    0,    563,  0,    1575, 0,    196,  0,    0,
    5,    0,    596,  0,    0,    0,    0,    0,    218,  0,    499,  1456, 28,   0,    0,    904,
    0,    776,  0,    0,    1701, 909,  1735, 0,    856,  0,    0,    235,  1610, 501,  0,    0,
    0,    337,  273,  0,    552,  0,    1460, 772,  281,  0,    0,    596,  0,    203,  486,  0,
    1652, 0,    552,  0,    0,    701,  1609, 587,  0,    0,    175,  284,  350,  0,    112,  1091,
    802,  0,    759,  0,    0,    1805, 293,  0,    0,    0,    0,    0,    0,    0,    0,    0,
    239,  0,    0,    336,  0,    149,  1253, 0,    947,  301,  0,    0,    309,  0,    1748, 0,
    0,    830,  1684, 323,  0,    73,   368,  100,  187,  1321, 0,    0,    0,    920,  0,    0,
    1839, 1217, 0,    1492, 1365, 0,    0,    0,    794,  542,  1605, 1741, 838,  120,  1498, 0,
    0,    0,    0,    504,  1300, 979,  885,  12,   1649, 753,  0,    260,  0,    51,   0,    640,
    0,    0,    1347, 440,  534,  0,    731,  0,    0,    1030, 0,    42,   0,    0,    0,    0,
    78,   1075, 168,  415,  1236, 0,    1389, 0,    0,    0,    853,  360,  1583, 933,  0,    0,
    1072, 628,  0,    1544, 0,    0,    1469, 608,  558,  0,    0,    1277, 1679, 686,  310,  0,
    0,    0,    0,    618,  243,  0,    0,    421,  629,  0,    865,  672,  0,    772,  0,    127,
    1408, 0,    708,  202,  822,  103,  1528, 146,  0,    1044, 771,  58,   373,  102,  10,   105,
    154,  28,   0,    0,    0,    683,  387,  206,  0,    0,    837,  1468, 414,  0,    371,  0,
    0,    0,    0,    1765, 231,  251,  0,    837,  0,    0,    1763, 0,    1763, 0,    146,  0,
    1135, 656,  593,  0,    258,  0,    733,  0,    1361, 0,    0,    411,  1206, 788,  438,  0,
    0,    841,  1479, 290,  943,  559,  0,    1401, 931,  0,    1494, 1764, 0,    0,    384,  0,
    0,    0,    0,    347,  0,    652,  573,  489,  607,  52,   0,    0,    35,   537,  1182, 190,
    754,  226,  0,    487,  0,    1429, 0,    0,    696,  29,   0,    1363, 65,   436,  1086, 1379,
    0,    1757, 76,   0,    401,  335,  0,    410,  0,    965,  136,  668,  1174, 0,    23,   0,
    774,  431,  112,  457,  0,    811,  0,    0,    0,    1189, 952,  81,   0,    0,    710,  995,
    0,    1515, 718,  549,  634,  616,  775,  0,    449,  0,    0,    39,   435,  624,  0,    0,
    0,    706,  0,    0,    0,    1755, 640,  0,    134,  1459, 0,    676,  361,  105,  347,  164,
    0,    0,    685,  0,    0,    377,  1381, 1188, 0,    594,  654,  463,  0,    0,    528,  817,
    554,  0,    0,    0,    0,    396,  430,  902,  477,  980,  1287, 1631, 0,    626,  491,  19,
    0,    0,    582,  0,    1535, 250,  652,  0,    172,  543,  0,    0,    0,    0,    0,    1041,
    0,    0,    0,    0,    977,  359,  0,    0,    374,  1287, 517,  0,    1090, 1599, 875,  820,
    88,   1613, 1156, 383,  0,    784,  1636, 999,  0,    1535, 131,  0,    0,    917,  0,    13,
    522,  380,  0,    0,    0,    149,  0,    0,    1136, 100,  357,  0,    0,    600,  460,  191,
    280,  0,    1520, 0,    1191, 1149, 237,  0,    881,  0,    0,    143,  784,  145,  369,  828,
    1377, 3,    1701, 0,    0,    78,   0,    169,  0,    0,    36,   0,    0,    767,  703,  0,
    0,    486,  86,   425,  391,  0,    57,   671,  740,  0,    872,  70,   553,  0,    557,  827,
    0,    34,   320,  0,    860,  360,  0,    634,  1724, 372,  229,  1653, 0,    1747, 20,   741,
    0,    673,  465,  0,    0,    448,  0,    699,  905,  0,    871,  74,   0,    0,    0,    0,
    1200, 0,    795,  922,  851,  0,    0,    0,    1477, 1099, 0,    1226, 0,    0,    1596, 277,
    0,    0,    104,  499,  1414, 0,    0,    679,  1376, 0,    422,  0,    0,    1209, 0,    303,
    0,    112,  976,  1296, 139,  33,   0,    454,  0,    841,  283,  1117, 0,    1119, 1722, 897,
    1726, 0,    946,  699,  0,    684,  824,  1707, 808,  799,  635,  679,  0,    0,    0,    0,
    0,    0,    0,    1213, 268,  0,    1689, 1582, 0,    261,  0,    0,    939,  1208, 0,    0,
    0,    1806, 1658, 118,  1826, 0,    0,    1633, 940,  928,  1269, 200,  782,  314,  0,    480,
    126,  1021, 0,    447,  822,  486,  224,  1791, 0,    677,  0,    0,    1265, 0,    0,    0,
    584,  0,    0,    507,  353,  43,   0,    1589, 221,  0,    30,   830,  0,    178,  0,    0,
    0,    608,  0,    140,  0,    0,    0,    376,  84,   0,    321,  1548, 1242, 0,    1579, 828,
    334,  153,  0,    15,   854,  308,  1144, 0,    0,    1818, 0,    606,  422,  0,    0,    1725,
    822,  0,    0,    141,  0,    0,    1600, 153,  1648, 0,    780,  932,  0,    0,    1385, 297,
    97,   153,  801,  1303, 81,   1198, 0,    77,   1142, 0,    646,  544,  750,  433,  442,  340,
    0,    0,    38,   0,    0,    892,  794,  0,    176,  0,    850,  1742, 478,  0,    0,    685,
    0,    1289, 1518, 1590, 0,    0,    0,    147,  845,  89,   0,    0,    622,  92,   763,  0,
    0,    1667, 0,    1821, 714,  959,  0,    725,  433,  669,  657,  508,  0,    302,  278,  0,
    1195, 0,    109,  974,  887,  1302, 0,    1745, 912,  810,  635,  1205, 0,    1357, 1556, 1729,
    529,  585,  0,    443,  397,  0,    887,  0,    1633, 0,    120,  0,    530,  0,    0,    274,
    796,  0,    355,  82,   886,  870,  331,  852,  0,    1336, 38,   439,  68,   1413, 560,  385,
    0,    99,   0,    0,    1641, 431,  910,  0,    0,    0,    0,    0,    115,  673,  831,  815,
    0,    1286, 888,  1698, 396,  0,    0,    0,    259,  565,  0,    790,  264,  162,  0,    0,
    0,    444,  434,  722,  315,  685,  609,  1660, 884,  635,  0,    1400, 1339, 166,  1825, 1432,
    214,  461,  0,    0,    443,  936,  129,  0,    773,  664,  48,   0,    22,   133,  0,    404,
    70,   651,  46,   0,    174,  342,  398,  0,    0,    0,    1074, 1316, 418,  0,    1593, 1347,
    0,    9,    0,    1386, 513,  1200, 1655, 0,    0,    0,    1064, 419,  701,  179,  0,    572,
    1712, 0,    1509, 1729, 0,    744,  402,  1101, 0,    1419, 865,  1549, 0,    1715, 0,    0,
    0};

int MangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 1841;
    }
    return mangledkG[sum];
}

int MangledPerfectHash(const char *key)
{
    if (strlen(key) > 37)
        return 0;

    return (MangledHashG(key, mangledkT1) + MangledHashG(key, mangledkT2)) % 1841;
}

constexpr int unmangledkT1[] = {89,  67, 164, 90,  208, 12,  42, 160, 54, 202, 34,  42, 183,
                                199, 87, 83,  105, 35,  134, 80, 132, 57, 49,  158, 5,  60};
constexpr int unmangledkT2[] = {159, 88, 35,  79,  181, 132, 45,  85, 237, 60,  14,  103, 116,
                                85,  78, 164, 123, 28,  85,  167, 46, 29,  204, 166, 227, 102};
constexpr int unmangledkG[]  = {
    0,   0,   0,   0,   0,   0,   79,  0,   0,   0,   147, 0,   0,   0,   0,   0,   0,   8,   1,
    0,   228, 0,   0,   128, 0,   0,   0,   64,  42,  0,   218, 0,   70,  0,   0,   222, 0,   14,
    0,   28,  9,   139, 0,   188, 0,   195, 0,   0,   0,   0,   1,   0,   0,   101, 109, 65,  96,
    0,   143, 0,   0,   69,  0,   195, 5,   6,   49,  163, 0,   124, 56,  151, 0,   20,  30,  136,
    20,  0,   117, 31,  0,   100, 0,   234, 59,  0,   0,   78,  178, 0,   0,   142, 176, 104, 75,
    34,  74,  2,   0,   219, 8,   100, 0,   144, 6,   36,  0,   0,   0,   0,   147, 231, 50,  0,
    0,   0,   171, 126, 26,  192, 107, 22,  66,  197, 215, 0,   156, 0,   114, 2,   0,   167, 146,
    233, 52,  186, 0,   183, 60,  210, 126, 217, 232, 0,   44,  225, 232, 110, 0,   137, 32,  235,
    161, 0,   59,  20,  64,  26,  0,   0,   0,   97,  0,   0,   67,  197, 44,  0,   74,  67,  16,
    67,  0,   8,   131, 0,   0,   0,   75,  108, 22,  114, 37,  25,  202, 108, 86,  72,  148, 62,
    148, 0,   36,  103, 0,   99,  147, 125, 148, 117, 47,  0,   73,  0,   0,   147, 47,  210, 64,
    27,  71,  126, 168, 0,   0,   31,  204, 92,  78,  130, 0,   0,   0,   96,  196, 0,   52,  181,
    25,  0,   8,   147, 0,   228, 0,   5,   15,  40};

int UnmangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 238;
    }
    return unmangledkG[sum];
}

int UnmangledPerfectHash(const char *key)
{
    if (strlen(key) > 26)
        return 0;

    return (UnmangledHashG(key, unmangledkT1) + UnmangledHashG(key, unmangledkT2)) % 238;
}

}  // namespace

namespace sh
{

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvPrime = 16777619u;

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvOffsetBasis = 0x811c9dc5u;

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvPrime =
    static_cast<size_t>(1099511628211ull);

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvOffsetBasis =
    static_cast<size_t>(0xcbf29ce484222325ull);

uint32_t ImmutableString::mangledNameHash() const
{
    return MangledPerfectHash(data());
}

uint32_t ImmutableString::unmangledNameHash() const
{
    return UnmangledPerfectHash(data());
}

}  // namespace sh
