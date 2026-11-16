/* FUN_50c06142 - 0x50c06142 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __fastcall FUN_50c06142(int *param_1)

{
  uint *puVar1;
  
  if (param_1[1] == 0) {
    puVar1 = FUN_50c0616c(*param_1);
    param_1[1] = (int)puVar1;
    if ((puVar1 == (uint *)0x0) && (*param_1 != 0)) {
      FUN_50c101c4(0x8007000e);
    }
  }
  return param_1[1];
}


