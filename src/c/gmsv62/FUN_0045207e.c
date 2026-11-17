/* FUN_0045207e - 0x0045207e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0045207e(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  int iVar5;
  
  FUN_00879bb8();
  extraout_ECX[6] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  extraout_ECX[7] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_008e8f60;
  extraout_ECX[1] = &PTR_LAB_008e8f24;
  extraout_ECX[2] = &PTR_LAB_008e8f08;
  extraout_ECX[3] = &PTR_LAB_008e8ec0;
  extraout_ECX[4] = &PTR_LAB_008e8eac;
  FUN_00679d22(unaff_EBP + -0x10,0x3aa);
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined1 *)(extraout_ECX + 0xc) = 0;
  extraout_ECX[10] = 0;
  extraout_ECX[0x4f] = 0;
  extraout_ECX[0x4e] = 0;
  puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
  extraout_ECX[0xb] = 1;
  extraout_ECX[9] = 1;
  uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  extraout_ECX[0x4c] = 30000;
  *(undefined1 *)(extraout_ECX + 0x4d) = 2;
  *(undefined1 *)((int)extraout_ECX + 0x135) = 2;
  *(undefined4 *)(unaff_EBP + -0x24) = *puVar1;
  *(undefined4 *)(unaff_EBP + -0x20) = puVar1[1];
  *(undefined4 *)(unaff_EBP + -0x1c) = puVar1[2];
  *(undefined4 *)(unaff_EBP + -0x18) = puVar1[3];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0x3028;
  *(code **)(unaff_EBP + -0x58) = FUN_004536ff;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  uVar3 = (*DAT_0097b558)(0,0x7f00);
  *(undefined4 *)(unaff_EBP + -0x44) = uVar3;
  uVar3 = (*DAT_0097b668)(4);
  *(undefined4 *)(unaff_EBP + -0x40) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  (*DAT_0097b554)(unaff_EBP + -0x5c);
  iVar5 = *(int *)(unaff_EBP + -0x18) - *(int *)(unaff_EBP + -0x20);
  iVar4 = *(int *)(unaff_EBP + -0x1c) - *(int *)(unaff_EBP + -0x24);
  uVar3 = extraout_ECX[6];
  *(int *)(unaff_EBP + 0x10) = iVar4;
  uVar3 = (*DAT_0097b538)(0,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00978474,0x44000000,
                          *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                          iVar4,iVar5,uVar3,0,*(undefined4 *)(unaff_EBP + 0xc),0);
  extraout_ECX[5] = uVar3;
  (*DAT_0097b550)(uVar3,0xffffffeb,extraout_ECX);
  DAT_00978470 = 0;
  iVar4 = (*DAT_0097b65c)(&DAT_008f3994,0,3,&DAT_008f37d4,unaff_EBP + 8);
  if (-1 < iVar4) {
    iVar4 = (**(code **)(**(int **)(unaff_EBP + 8) + 0xc))(*(int **)(unaff_EBP + 8),extraout_ECX);
    if (-1 < iVar4) {
      (*DAT_0097b504)(unaff_EBP + -0x34,0,0,*(undefined4 *)(unaff_EBP + 0x10),iVar5);
      iVar4 = (**(code **)(**(int **)(unaff_EBP + 8) + 0x2c))
                        (*(int **)(unaff_EBP + 8),0xfffffffb,0,extraout_ECX,0,extraout_ECX[5],
                         unaff_EBP + -0x34);
      if (-1 < iVar4) {
        FUN_0045387b(*(undefined4 *)(unaff_EBP + 8));
        iVar4 = FUN_004522da(extraout_ECX[7],extraout_ECX,&DAT_008f39b4,extraout_ECX + 8);
        if (-1 < iVar4) {
          puVar1 = (undefined4 *)extraout_ECX[7];
          *(undefined4 *)(unaff_EBP + 0xc) = 0;
          if (puVar1 != (undefined4 *)0x0) {
            (**(code **)*puVar1)(puVar1,&DAT_008f3764,unaff_EBP + 0xc);
          }
          iVar4 = **(int **)(unaff_EBP + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iVar4 = (**(code **)(iVar4 + 0x1c))
                            (*(int **)(unaff_EBP + 0xc),unaff_EBP + -0x34,unaff_EBP + -0x34);
          piVar2 = *(int **)(unaff_EBP + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          if (-1 < iVar4) goto LAB_004522aa;
        }
      }
    }
  }
  if (extraout_ECX[7] != 0) {
    FUN_00452368(extraout_ECX[7],&DAT_008f39b4,extraout_ECX[8]);
  }
  piVar2 = (int *)extraout_ECX[7];
  if (piVar2 != (int *)0x0) {
    extraout_ECX[7] = 0;
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  (*DAT_0097b654)();
  (*DAT_0097b518)(extraout_ECX[5]);
  extraout_ECX[5] = 0;
LAB_004522aa:
  piVar2 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


