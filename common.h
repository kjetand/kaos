#ifndef _COMMON_H_
#define _COMMON_H_

/* Primitive data types */
typedef signed char        int8_t;
typedef unsigned char      uint8_t;
typedef signed short       int16_t;
typedef unsigned short     uint16_t;
typedef signed int         int32_t;
typedef unsigned int       uint32_t;
typedef signed long long   int64_t;
typedef unsigned long long uint64_t;

typedef enum
{
    FALSE = 0,
    TRUE = 1
} bool_t;


static inline void outb(int16_t port, int8_t val)
{
    __asm__ volatile ("outb %0, %1" : : "a"(val), "Nd"(port));
}

static inline int8_t inb(int16_t port)
{
    int8_t val;
    __asm__ volatile ("inb %1, %0" : "=a"(val) : "Nd"(port));
    return val;
}

/* Number systems */
#define BASE_TEN         10
#define BASE_HEXADECIMAL 16

/* ASCII special character encodings */
#define ASCII_NUL   0x00
#define ASCII_SOH   0x01
#define ASCII_STX   0x02
#define ASCII_ETX   0x03
#define ASCII_EOT   0x04
#define ASCII_ENQ   0x05
#define ASCII_ACK   0x06
#define ASCII_BEL   0x07
#define ASCII_BS    0x08
#define ASCII_TAB   0x09
#define ASCII_LF    0x0A
#define ASCII_VT    0x0B
#define ASCII_FF    0x0C
#define ASCII_CR    0x0D
#define ASCII_SO    0x0E
#define ASCII_SI    0x0F
#define ASCII_DLE   0x10
#define ASCII_DC1   0x11
#define ASCII_DC2   0x12
#define ASCII_DC3   0x13
#define ASCII_DC4   0x14
#define ASCII_NAK   0x15
#define ASCII_SYN   0x16
#define ASCII_ETB   0x17
#define ASCII_CAN   0x18
#define ASCII_EM    0x19
#define ASCII_SUB   0x1A
#define ASCII_ESC   0x1B
#define ASCII_FS    0x1C
#define ASCII_GS    0x1D
#define ASCII_RS    0x1E
#define ASCII_US    0x1F
#define ASCII_SPACE 0x20
#define ASCII_DEL   0x7F

#endif
