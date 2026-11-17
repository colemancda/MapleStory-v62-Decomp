/* FUN_007ee56d - 0x007ee56d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007ee56d(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x80);
  iVar1 = FUN_007e6dd4();
  if (iVar3 < iVar1) {
    uVar2 = FUN_007e6dd4();
    *(undefined4 *)(param_1 + 0x84) = uVar2;
  }
  else {
    *(int *)(param_1 + 0x84) = iVar3;
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(uint *)(param_1 + 0x78) = (-(uint)(*(int *)(param_1 + 0x9c) != 0) & 0xffffff77) + 0x9d;
  if (*(int *)(param_1 + 0x9c) == 0) {
    iVar3 = ((*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80)) + -0x14) / 2;
  }
  else {
    iVar3 = -6;
  }
  *(int *)(param_1 + 0x7c) = iVar3 + 0x1c;
  uVar2 = FUN_007e6ce4();
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(uint *)(param_1 + 0x94) =
       (-(uint)(*(int *)(param_1 + 0x9c) != 0) & 0xd) + 0x56 + *(int *)(param_1 + 0x84);
  return;
}


