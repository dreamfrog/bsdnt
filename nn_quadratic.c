#include "nn.h"

void nn_mul_classical(nn_t r, nn_src_t a, len_t m1, nn_src_t b, len_t m2)
{
   len_t i;
  
   nn_mul1(r, a, m1, b[0]); 
   
   for (i = 1; i < m2; i++)
      r[m1 + i] = nn_addmul1(r + i, a, m1, b[i]);
}
