/* FUN_50c08269 - 0x50c08269 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 __cdecl FUN_50c08269(short *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 8) {
    *param_1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      (*DAT_50c211e8)(*(int *)(param_1 + 4) + -4);
    }
    return 0;
  }
  uVar1 = Ordinal_9(param_1);
  return uVar1;
}


