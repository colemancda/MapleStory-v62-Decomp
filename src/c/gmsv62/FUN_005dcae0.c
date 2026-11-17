/* FUN_005dcae0 - 0x005dcae0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_005dcae0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004cd670(param_1 + 0x24c,*(undefined4 *)(param_1 + 0x254));
  if ((iVar1 == 0) || (param_2 < 1)) {
    if ((*(int *)(param_1 + 600) == 0) || (*(int *)(*(int *)(param_1 + 600) + -4) == 0)) {
      return 1;
    }
    for (uVar2 = 0; (iVar1 = *(int *)(param_1 + 600), iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4)))
        ; uVar2 = uVar2 + 1) {
      if (param_2 == *(int *)(iVar1 + uVar2 * 4)) {
        return 1;
      }
    }
  }
  return 0;
}


