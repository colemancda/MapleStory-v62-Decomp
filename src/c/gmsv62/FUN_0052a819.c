/* FUN_0052a819 - 0x0052a819 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052a819(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar2 = FUN_0045cdbc(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00414f8b(uVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x14) + -0xc);
  }
  if (*(int *)(extraout_ECX + 0x3c) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(extraout_ECX + 0x3c) + -4);
  }
  uVar2 = FUN_0045e053(unaff_EBP + -0x10,0,2);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00414f8b(uVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  if (2 < *(int *)(unaff_EBP + -0x14)) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_00414edd(&DAT_009645b0,0xffffffff);
    iVar1 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + -4);
    }
    FUN_0045efbb(iVar1,uVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  if (3 < *(int *)(unaff_EBP + -0x14)) {
    uVar2 = FUN_0045e053(unaff_EBP + -0x18,4,0xffffffff);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_00414edd(&DAT_009645b0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piVar3 = (int *)FUN_0045e02d(unaff_EBP + -0x10,uVar2);
    iVar1 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + -4);
    }
    FUN_0045efbb(iVar1,uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x14) + -0xc);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x18) + -0xc);
    }
  }
  uVar2 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0x1d4c) = uVar2;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0x1d50) = uVar2;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0x1d54) = uVar2;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0x1d58) = uVar2;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0x1d5c) = uVar2;
  (*DAT_0097b4a8)(unaff_EBP + -0x40);
  SystemTimeToFileTime((SYSTEMTIME *)(unaff_EBP + -0x40),(LPFILETIME)(unaff_EBP + -0x20));
  FUN_004245d2(unaff_EBP + -0x28,8);
  puVar4 = (undefined4 *)
           FUN_0052b5b4(unaff_EBP + -0x30,*(undefined4 *)(unaff_EBP + -0x28),
                        *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                        *(undefined4 *)(unaff_EBP + -0x1c),1);
  *(undefined4 *)(extraout_ECX + 0x34) = *puVar4;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(extraout_ECX + 0x38) = puVar4[1];
  return;
}


