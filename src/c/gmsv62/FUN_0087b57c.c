/* FUN_0087b57c - 0x0087b57c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_0087b57c(short *param_1,short param_2)

{
  while( true ) {
    if ((*param_1 == 0) || (*param_1 == param_2)) break;
    param_1 = param_1 + 1;
  }
  return (uint)param_1 & ~-(uint)(*param_1 != param_2);
}


