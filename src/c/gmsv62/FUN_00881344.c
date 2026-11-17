/* FUN_00881344 - 0x00881344 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00881344(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_00972450 == param_1) {
    PTR_LOOP_00972450 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_00970430) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_00982248,0,param_1);
    return;
  }
  DAT_00970440 = 0xffffffff;
  return;
}


