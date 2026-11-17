/* FUN_004b41a1 - 0x004b41a1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_004b41a1(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar2 = -(uint)(*(int *)(param_3 + -0xc) != 0) & *(int *)(param_3 + -0xc) + 0x10U;
  }
  if (uVar2 != 0) {
    do {
      if (*(int *)(uVar2 + 4) == *(int *)(param_2 + 4)) {
        return uVar2;
      }
      iVar1 = *(int *)((-(uint)(uVar2 != 0) & uVar2 - 0x10) + 4);
      uVar2 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    } while (uVar2 != 0);
  }
  return 0;
}


