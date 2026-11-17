/* FUN_006a6665 - 0x006a6665 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a6665(int param_1,uint param_2)

{
  if ((param_2 & 0x80000000) != 0) {
    FUN_004bc822(param_1,param_2);
  }
  if (param_1 == 0xd) {
    FUN_006a66e9();
  }
  FUN_004bc822(param_1,param_2);
  return;
}


