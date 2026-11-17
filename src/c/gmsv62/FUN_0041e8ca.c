/* FUN_0041e8ca - 0x0041e8ca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0041e8ca(void)

{
  undefined4 uVar1;
  short sVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (DAT_00973abc != 0) {
    FUN_0041ea74();
  }
  (*DAT_0097b658)(0);
  iVar6 = *(int *)(unaff_EBP + 8);
  DAT_00973ab4 = iVar6;
  *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(iVar6 + 0x20c);
  *(undefined4 *)(unaff_EBP + -0x78) = 0x30;
  *(undefined4 *)(unaff_EBP + -0x74) = 0x28;
  *(code **)(unaff_EBP + -0x70) = FUN_0041e750;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 1;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x3a9);
  *(undefined4 *)(unaff_EBP + -0x50) = *puVar3;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  sVar2 = (*DAT_0097b548)(unaff_EBP + -0x78);
  if (sVar2 != 0) {
    iVar4 = (*DAT_0097b544)(7);
    *(int *)(unaff_EBP + -0x10) = *(int *)(iVar6 + 0x200) + iVar4 * 2;
    iVar4 = (*DAT_0097b544)(8);
    *(int *)(unaff_EBP + 8) = *(int *)(iVar6 + 0x204) + iVar4 * 2;
    uVar5 = (*DAT_0097b540)(unaff_EBP + -0x2c);
    (*DAT_0097b53c)(uVar5);
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0x3ab);
    *(undefined4 *)(unaff_EBP + -0x14) = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x3a9);
    uVar5 = *puVar3;
    uVar1 = *(undefined4 *)(iVar6 + 0x20c);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar6 = (*DAT_0097b538)(8,uVar5,*(undefined4 *)(unaff_EBP + -0x14),0x80040000,
                            (*(int *)(unaff_EBP + -0x24) - *(int *)(unaff_EBP + -0x10)) / 2,
                            (*(int *)(unaff_EBP + -0x20) - *(int *)(unaff_EBP + 8)) / 2,
                            *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 8),0,0,
                            uVar1,0);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    if (iVar6 != 0) {
      (*DAT_0097b534)(iVar6,5);
      (*DAT_0097b530)(iVar6);
      while( true ) {
        iVar6 = (*DAT_0097b52c)(unaff_EBP + -0x48,0,0,0);
        if (iVar6 == 0) break;
        (*DAT_0097b528)(unaff_EBP + -0x48);
        (*DAT_0097b524)(unaff_EBP + -0x48);
      }
      (*DAT_0097b654)();
      uVar5 = 1;
      goto LAB_0041ea65;
    }
  }
  uVar5 = 0;
LAB_0041ea65:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


