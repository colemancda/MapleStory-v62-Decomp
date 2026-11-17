/* FUN_0047c47a - 0x0047c47a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0047c47a(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (param_3 == 0) {
    piVar3 = (int *)(param_1 + 0x88);
  }
  else {
    if (param_3 != 1) goto LAB_0047c4d1;
    piVar3 = (int *)(param_1 + 0x8c);
  }
  iVar1 = FUN_0047c451(param_2,piVar3);
  if (iVar1 < 0) {
    if (param_4 == 0) {
      return 0;
    }
    puVar2 = (undefined4 *)FUN_0047cf98(0xffffffff);
    *puVar2 = param_2;
  }
  else {
    if (param_4 != 0) {
      return 0;
    }
    FUN_0047d008(*piVar3 + iVar1 * 4);
  }
LAB_0047c4d1:
  FUN_0047bda0();
  return 1;
}


