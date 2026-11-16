/* FUN_50c0c713 - 0x50c0c713 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


uint __fastcall FUN_50c0c713(int *param_1)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(*param_1 + -8);
  if ((int)uVar1 < 0) {
    uVar1 = ~uVar1;
  }
  return uVar1 - 4 >> 3;
}


