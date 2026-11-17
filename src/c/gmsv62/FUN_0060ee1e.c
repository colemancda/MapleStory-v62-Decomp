/* FUN_0060ee1e - 0x0060ee1e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0060ee1e(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_0042452b();
  FUN_0060ef0a(*(int *)(extraout_ECX + 0x18c) + (uVar1 & 0xff) * 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00611828(0xffffffff);
  uVar1 = FUN_00424561();
  *(uint *)(iVar2 + 0xc) = (uVar1 & 0xffff) * *(int *)(unaff_EBP + -0x1c);
  uVar3 = FUN_0045cdbc(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414f8b(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  uVar3 = FUN_0045e2eb();
  FUN_0045e3a0(uVar3);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(unaff_EBP + -0x18);
  iVar2 = (*(int *)(iVar2 + 0xc) * *(int *)(unaff_EBP + -0x18)) / *(int *)(unaff_EBP + -0x1c);
  *(int *)(extraout_ECX + 0x178) = *(int *)(extraout_ECX + 0x178) + iVar2;
  iVar4 = FUN_0060c32f(iVar2);
  *(int *)(extraout_ECX + 0x17c) = *(int *)(extraout_ECX + 0x17c) + (iVar2 - iVar4);
  if (*(int *)(extraout_ECX + 0x198) != 0) {
    FUN_00611534();
    FUN_008161f1(0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0060ef3b();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


