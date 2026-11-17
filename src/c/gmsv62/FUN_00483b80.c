/* FUN_00483b80 - 0x00483b80 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00483b80(uint *param_1,uint *param_2)

{
  __aulldiv(*param_1 - *param_2,(param_1[1] - param_2[1]) - (uint)(*param_1 < *param_2),600000000,0)
  ;
  return;
}


