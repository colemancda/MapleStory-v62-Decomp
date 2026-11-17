/* FUN_00614b4f - 0x00614b4f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_00614b4f(int param_1,int param_2,undefined4 param_3,int *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = param_5;
  uVar5 = (uint)param_4 & 1;
  iVar1 = FUN_0048bb31(param_5 + 0x11c,*(undefined4 *)(param_5 + 0x124));
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00486ada(&param_4);
    uVar4 = -(uint)(*piVar2 != 0) & *piVar2 - 0xcU;
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 8))(param_4);
    }
    iVar1 = FUN_0048bb31(uVar4 + 0x11c,*(undefined4 *)(uVar4 + 0x124));
    iVar3 = param_5;
    if (iVar1 != 0) {
      return *(uint *)(*(int *)(param_1 + 0x80) + 0x52c) & 1 | 0x1e;
    }
  }
  if (*(int *)(iVar3 + 0x110) == 0) {
    if (param_2 != 0) {
      uVar5 = (uint)(param_2 < 0);
    }
    iVar3 = FUN_00614c6f();
    uVar5 = ((-(uint)(iVar3 != 0) & 3) + 3) * 2 | uVar5;
  }
  else if (param_2 == 0) {
    if (*(int *)(param_1 + 0x98) < 0x33) {
      uVar5 = uVar5 | 0x18;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xe0);
      if (iVar3 != 1) {
        if (iVar3 == 2) {
          return uVar5 | 0x16;
        }
        if (iVar3 == 6) {
          return uVar5 | 0x1a;
        }
        if (iVar3 == 7) {
          return uVar5 | 0x1c;
        }
      }
      uVar5 = uVar5 | 4;
    }
  }
  else {
    uVar5 = param_2 < 0 | 2;
  }
  return uVar5;
}


