#ifndef __S_BIT_H__
#define __S_BIT_H__

typedef long long s_bit_t;

#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif

#define S_BIT_SET(NR, BITS)     (NR |= (1LL << BITS));

#define S_BIT_SET_ALL(NR)       (NR = -1LL);

#define S_BIT_CLR(NR, BITS)     (NR &= ~(1LL << BITS));

#define S_BIT_CLR_ALL(NR)       (NR = ~(-1LL));

#define S_BIT_IS_SET(NR, BITS)  ((NR & (1LL << BITS)) ? TRUE : FALSE)

#define S_BIT_IS_CLR(NR, BITS)  ((!(NR & (1LL << BITS))) ? TRUE : FALSE)

#endif /* __S_BIT_H__*/
