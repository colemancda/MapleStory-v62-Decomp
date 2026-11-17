/* FUN_008264a7 - 0x008264a7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008264a7(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int iVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  bool bVar7;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  puVar4 = (undefined4 *)(unaff_EBP + -0x3c);
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  bVar7 = DAT_009784c4 != 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (bVar7) {
    FUN_004753c4();
  }
  piVar1 = *(int **)(unaff_EBP + 8);
  do {
    uVar2 = (*DAT_0097b5e4)(3,extraout_ECX + 0x4c,0,0,0xff);
    if (uVar2 < 3) {
      FUN_00526687(uVar2);
      while (iVar5 = FUN_005266a4(unaff_EBP + -0x18), iVar5 != 0) {
        FUN_00828269(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                     *(undefined4 *)(unaff_EBP + -0x10));
        if (*piVar1 != 0) goto LAB_008266c9;
      }
    }
    else if (uVar2 == 3) {
      do {
        iVar5 = (*DAT_0097b5e0)(unaff_EBP + -0x40,0,0,0,1);
        if (iVar5 == 0) break;
        (*DAT_0097b528)(unaff_EBP + -0x40);
        (*DAT_0097b524)(unaff_EBP + -0x40);
        iVar5 = *(int *)(extraout_ECX + 0x38);
        if (iVar5 != 0) {
          *(undefined4 *)(extraout_ECX + 0x38) = 0;
          *(undefined4 *)(extraout_ECX + 0x34) = 0;
          FUN_008795da(iVar5,0);
        }
        if (*(int *)(extraout_ECX + 0x34) != 0) {
          iVar5 = *(int *)(extraout_ECX + 0x34);
          *(undefined4 *)(extraout_ECX + 0x38) = 0;
          *(undefined4 *)(extraout_ECX + 0x34) = 0;
          if (iVar5 == 0x20000000) {
            puVar4 = (undefined4 *)FUN_004dda7e(*(undefined4 *)(extraout_ECX + 0x40));
            *(undefined4 *)(unaff_EBP + -4) = 0;
            puVar6 = (undefined4 *)(unaff_EBP + -0x548);
            for (iVar5 = 0x142; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
                    /* WARNING: Subroutine does not return */
            __CxxThrowException_8(unaff_EBP + -0x548,&DAT_00903688);
          }
          if ((0x20ffffff < iVar5) && (iVar5 < 0x21000007)) {
            *(int *)(unaff_EBP + -0x20) = iVar5;
            *(int *)(unaff_EBP + 8) = iVar5;
            *(undefined4 *)(unaff_EBP + -4) = 1;
                    /* WARNING: Subroutine does not return */
            __CxxThrowException_8(unaff_EBP + 8,&DAT_00903698);
          }
          if ((0x21ffffff < iVar5) && (iVar5 < 0x2200000c)) {
            *(int *)(unaff_EBP + -0x20) = iVar5;
            *(int *)(unaff_EBP + -0x1c) = iVar5;
            *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
            __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_008f7260);
          }
          *(int *)(unaff_EBP + -0x24) = iVar5;
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(unaff_EBP + -0x24,&DAT_008f9b80);
        }
        if (*piVar1 != 0) goto LAB_008266c9;
      } while (*(int *)(unaff_EBP + -0x3c) != 0x12);
    }
    else {
      iVar5 = FUN_0052766e(unaff_EBP + -0x18);
      if (iVar5 != 0) {
        FUN_00828269(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                     *(undefined4 *)(unaff_EBP + -0x10));
      }
      if (DAT_0097c1ac != 0) {
        uVar3 = FUN_008266e7();
        FUN_00827a0e(uVar3);
        FUN_00819171();
        if (DAT_0097c1ac == 0) {
          FUN_00878dfb(0x80004003);
        }
        FUN_0065ce26();
      }
      (*DAT_0097b3ec)(1);
    }
    if (*piVar1 != 0) {
LAB_008266c9:
      if (*(int *)(unaff_EBP + -0x3c) != 0x12) goto LAB_008266d6;
      goto LAB_008266cf;
    }
    if (*(int *)(unaff_EBP + -0x3c) == 0x12) {
LAB_008266cf:
      (*DAT_0097b514)(0);
LAB_008266d6:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}


