/* FUN_004b5f21 - 0x004b5f21 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004b5f21(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  FUN_004b5a68(param_2);
  FUN_0042452b();
  uVar1 = FUN_004b8c01();
  *(undefined4 *)(param_1 + 0x2a) = uVar1;
  FUN_0042452b();
  uVar1 = FUN_004b8c01();
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  puVar2 = (undefined4 *)FUN_0045cdbc(&param_2);
  lstrcpyA((LPSTR)(param_1 + 0xbc),(LPCSTR)*puVar2);
  if (param_2 != 0) {
    FUN_00434e38(param_2 + -0xc);
  }
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
    FUN_004245d2(param_1 + 0xb4,8);
  }
  else {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  return;
}


