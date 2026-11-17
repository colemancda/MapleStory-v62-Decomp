/* FUN_0048350d - 0x0048350d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0048350d(void)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  undefined4 uVar5;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414edd(*(undefined4 *)(unaff_EBP + 0xc),0xffffffff);
  sVar1 = _strlen(&DAT_00964364);
  FUN_0045efbb(&DAT_00964364,sVar1);
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4);
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(unaff_EBP + 8) + -4);
  }
  if (iVar4 < iVar3) {
    uVar5 = FUN_0045e070(unaff_EBP + 0xc,iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00414f8b(uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    iVar3 = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iVar3 = DAT_00980dfc;
    }
    iVar2 = DAT_00980dfc;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      iVar2 = *(int *)(unaff_EBP + -0x14);
    }
    iVar3 = FUN_008858f0(iVar2,iVar3);
    if (iVar3 == 0) {
      uVar5 = FUN_0045e053(unaff_EBP + 0xc,iVar4,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414f8b(uVar5);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      uVar5 = 1;
      goto LAB_004835f4;
    }
  }
  uVar5 = 0;
LAB_004835f4:
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


