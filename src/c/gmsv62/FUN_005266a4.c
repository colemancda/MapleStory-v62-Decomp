/* FUN_005266a4 - 0x005266a4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_005266a4(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_1 + 0x9c4) != 0;
  if (bVar2) {
    puVar1 = *(undefined4 **)(param_1 + 0x9c8);
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
    FUN_0052775c(*(undefined4 *)(param_1 + 0x9c8));
  }
  return bVar2;
}


