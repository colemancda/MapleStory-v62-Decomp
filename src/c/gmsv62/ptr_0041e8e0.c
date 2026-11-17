/* ptr_0041e8e0 - 0x0041e8e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_0041e8e0(void)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBX;
  int unaff_EBP;
  bool in_ZF;
  
  if (!in_ZF) {
    FUN_0041ea74();
  }
  (*DAT_0097b658)();
  iVar5 = *(int *)(unaff_EBP + 8);
  DAT_00973ab4 = iVar5;
  *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(iVar5 + 0x20c);
  *(undefined4 *)(unaff_EBP + -0x78) = 0x30;
  *(undefined4 *)(unaff_EBP + -0x74) = 0x28;
  *(code **)(unaff_EBP + -0x70) = FUN_0041e750;
  *(int *)(unaff_EBP + -0x6c) = unaff_EBX;
  *(int *)(unaff_EBP + -0x68) = unaff_EBX;
  *(int *)(unaff_EBP + -0x60) = unaff_EBX;
  *(int *)(unaff_EBP + -0x5c) = unaff_EBX;
  *(undefined4 *)(unaff_EBP + -0x58) = 1;
  *(int *)(unaff_EBP + -0x54) = unaff_EBX;
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x3a9);
  *(undefined4 *)(unaff_EBP + -0x50) = *puVar2;
  FUN_00414ebb();
  *(int *)(unaff_EBP + -0x4c) = unaff_EBX;
  sVar1 = (*DAT_0097b548)(unaff_EBP + -0x78);
  if (sVar1 != 0) {
    iVar3 = (*DAT_0097b544)(7);
    *(int *)(unaff_EBP + -0x10) = *(int *)(iVar5 + 0x200) + iVar3 * 2;
    iVar3 = (*DAT_0097b544)(8);
    *(int *)(unaff_EBP + 8) = *(int *)(iVar5 + 0x204) + iVar3 * 2;
    uVar4 = (*DAT_0097b540)(unaff_EBP + -0x2c);
    (*DAT_0097b53c)(uVar4);
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0x3ab);
    *(undefined4 *)(unaff_EBP + -0x14) = *puVar2;
    *(int *)(unaff_EBP + -4) = unaff_EBX;
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x3a9);
    uVar4 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar5 = (*DAT_0097b538)(8,uVar4,*(undefined4 *)(unaff_EBP + -0x14),0x80040000,
                            (*(int *)(unaff_EBP + -0x24) - *(int *)(unaff_EBP + -0x10)) / 2,
                            (*(int *)(unaff_EBP + -0x20) - *(int *)(unaff_EBP + 8)) / 2,
                            *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 8));
    *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    if (iVar5 != unaff_EBX) {
      (*DAT_0097b534)(iVar5,5);
      (*DAT_0097b530)(iVar5);
      while( true ) {
        iVar5 = (*DAT_0097b52c)(unaff_EBP + -0x48);
        if (iVar5 == 0) break;
        (*DAT_0097b528)(unaff_EBP + -0x48);
        (*DAT_0097b524)(unaff_EBP + -0x48);
      }
      (*DAT_0097b654)();
      uVar4 = 1;
      goto LAB_0041ea65;
    }
  }
  uVar4 = 0;
LAB_0041ea65:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


