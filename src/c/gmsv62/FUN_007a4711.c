/* FUN_007a4711 - 0x007a4711 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007a4711(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3 >> 0x10 & 0xff;
  piVar1 = (int *)(**(code **)(param_1[1] + 0x10))();
  param_1[0x911] = *piVar1;
  param_1[0x912] = piVar1[1];
  iVar2 = (**(code **)(*param_1 + 4))();
  iVar2 = FUN_00413367(iVar2 + 0x7b0,*(undefined4 *)(iVar2 + 0x7b8));
  if (iVar2 != 0) {
    if (param_2 == 0x25) {
      param_2 = 0x27;
    }
    else if (param_2 == 0x27) {
      param_2 = 0x25;
    }
    else if (param_2 == 0x26) {
      param_2 = 0x28;
    }
    else if (param_2 == 0x28) {
      param_2 = 0x26;
    }
  }
  if ((param_3 & 0x80000000) == 0) {
    FUN_0074d6fb();
    if (param_1[0x934] == 0) {
      iVar2 = (*DAT_0097b704)();
      param_1[0x934] = iVar2;
      if (iVar2 == 0) {
        param_1[0x934] = 1;
      }
    }
    if (param_2 == 0x25) {
      FUN_007a4927(param_1 + 0x930);
      param_1[0x932] = 0;
    }
    else if (param_2 == 0x27) {
      FUN_007a4927(param_1 + 0x932);
      param_1[0x930] = 0;
    }
    if (param_2 != 0x25) {
      if (param_2 == 0x26) {
        FUN_007a565e();
        return;
      }
      if (param_2 != 0x27) {
        iVar2 = FUN_0083cbc0(param_2);
        if (iVar2 != 0) {
          return;
        }
        iVar2 = FUN_007a5f0c(param_3);
        if (iVar2 == 0) {
          return;
        }
        FUN_007b22d3(param_3);
        return;
      }
    }
    if ((DAT_00978354 != 0) && (*(int *)(DAT_00978354 + 0xc) != 0)) {
      FUN_00598d62();
    }
    iVar2 = FUN_004cd670(param_1 + 0x7bc,param_1[0x7be]);
    if (iVar2 != 0) {
      FUN_0083a6ec(200);
    }
    return;
  }
  if ((param_2 == 0x25) || (param_2 == 0x27)) {
    if ((DAT_00978354 != 0) && (*(int *)(DAT_00978354 + 0xc) != 0)) {
      FUN_00598d62();
    }
    iVar2 = FUN_007b3ba0();
    if (iVar2 != 0) {
      FUN_007bd2b0(&LAB_004c4f2d);
    }
    piVar1 = param_1 + 0x930;
    if (param_2 != 0x25) {
      piVar1 = param_1 + 0x932;
    }
    *piVar1 = *(int *)(piVar1[1] + 4 + *piVar1 * 8);
    *(undefined1 *)(param_1 + 0x935) = 0;
  }
  if (uVar3 == 0x36) {
    uVar3 = 0x2a;
  }
  iVar2 = DAT_00979110 + uVar3 * 4;
  if (*(char *)(uVar3 + 4 + iVar2) == '\0') {
    return;
  }
  iVar2 = *(int *)(uVar3 + iVar2 + 5);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_004c6676(iVar2);
  if (iVar2 == 0) {
    return;
  }
  if (param_1[0x915] == 0) {
    return;
  }
  FUN_007b0b2a();
  return;
}


