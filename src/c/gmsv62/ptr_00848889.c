/* ptr_00848889 - 0x00848889 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00848889(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_0045a1d8();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puVar1 = (undefined4 *)FUN_00679d22();
  uVar5 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00434e21(unaff_EBP + -0x10,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (*(int *)(unaff_EBP + -0x44) != unaff_EBX) {
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (*(int *)(unaff_EBP + -0x48) != unaff_EBX) {
    FUN_00434e38();
  }
  puVar1 = (undefined4 *)FUN_00679d22();
  uVar5 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_00434e21(unaff_EBP + 8,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (*(int *)(unaff_EBP + -0x4c) != unaff_EBX) {
    FUN_00434e38();
  }
  if (DAT_00978360 != unaff_EBX) {
    *(BADSPACEBASE **)(unaff_EBP + -0x1c) = register0x00000010;
    FUN_0052e11f();
    uVar5 = *(undefined4 *)(unaff_EBP + -0x18);
    uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iVar2 = (*(int *)(unaff_EBP + -0x50) != 3) + 0xe;
    uVar3 = FUN_00449713(iVar2,uVar4,uVar5);
    FUN_00449784(uVar3);
    FUN_00743a59(uVar3,iVar2,uVar4,uVar5);
  }
  *(int *)(unaff_EBP + -0x20) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00415015(0x400);
  iVar2 = FUN_00471a4c();
  FUN_004150c0();
  if (iVar2 != unaff_EBX) {
    FUN_00471102();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (*(int *)(unaff_EBP + -0x20) != unaff_EBX) {
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (*(int *)(unaff_EBP + -0x10) != unaff_EBX) {
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x24) != unaff_EBX) {
    FUN_00434e38();
  }
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  FUN_0046575e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


