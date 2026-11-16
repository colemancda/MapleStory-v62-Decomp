/* FUN_51002df5 - 0x51002df5 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 __cdecl FUN_51002df5(short *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 8) {
    *param_1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      (*DAT_510096c8)(*(int *)(param_1 + 4) + -4);
    }
    return 0;
  }
  uVar1 = Ordinal_9(param_1);
  return uVar1;
}


