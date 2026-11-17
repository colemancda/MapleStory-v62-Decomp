/* FUN_00475872 - 0x00475872 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00475872(void)

{
  ushort uVar1;
  int iVar2;
  int unaff_EBP;
  uint uVar3;
  int local_2c;
  
  FUN_00879bb8();
  local_2c = 0x47588c;
  uVar1 = FUN_00424561();
  uVar3 = (uint)uVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  local_2c = unaff_EBP + -0xd;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00475e97(uVar3);
  if (uVar3 != 0) {
    local_2c = uVar3 * 0x16;
    FUN_004245d2(*(undefined4 *)(unaff_EBP + -0x14));
  }
  local_2c = 0;
  FUN_0060142b(0x1b,0);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  local_2c = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00866ef1(unaff_EBP + -0x14);
  local_2c = iVar2;
  FUN_0045d247();
  if (iVar2 != 0) {
    *(int **)(unaff_EBP + 8) = &local_2c;
    local_2c = 0;
    FUN_00414f8b(unaff_EBP + -0x18);
    FUN_00459cb5();
  }
  local_2c = unaff_EBP + -0x28;
  FUN_004751b2();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  local_2c = 0x47591e;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_2c = 0x475929;
  FUN_0045ebca();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_2c = 0x475935;
  FUN_00475e75();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


