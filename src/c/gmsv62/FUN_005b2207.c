/* FUN_005b2207 - 0x005b2207 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005b2207(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc0);
  uVar3 = FUN_0042452b();
  if (uVar1 == (uVar3 & 0xff)) {
    *(undefined4 *)(param_1 + 0x700) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x700) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x73c);
  if (-1 < iVar2) {
    if (*(int *)(param_1 + 0x740) == -1) {
      FUN_005b834a(iVar2,1);
    }
    else {
      FUN_005b8e9c(iVar2);
      FUN_005b8e9c(*(undefined4 *)(param_1 + 0x740));
      *(undefined4 *)(param_1 + 0x740) = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x748) = 0;
    *(undefined4 *)(param_1 + 0x73c) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x720) = 10000;
  FUN_008161f1(0);
  return;
}


