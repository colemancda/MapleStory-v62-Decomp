/* FUN_004efa7c - 0x004efa7c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_004efa7c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = param_2 + -10;
  local_10 = param_3 + -0x1e;
  local_c = param_2 + 10;
  local_8 = param_3 + 0x1e;
  for (uVar2 = 0; (iVar1 = *(int *)(param_1 + 0x138), iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4)))
      ; uVar2 = uVar2 + 1) {
    iVar1 = (*DAT_0097b57c)(&local_14,*(undefined4 *)(iVar1 + uVar2 * 8),
                            *(undefined4 *)(iVar1 + 4 + uVar2 * 8));
    if (iVar1 != 0) {
      return uVar2;
    }
  }
  return 0xffffffff;
}


