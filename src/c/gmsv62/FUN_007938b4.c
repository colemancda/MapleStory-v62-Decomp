/* FUN_007938b4 - 0x007938b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007938b4(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  undefined *puVar4;
  int iVar5;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((DAT_0097bf50 & 1) == 0) {
    DAT_0097bf50 = DAT_0097bf50 | 1;
    FUN_00679e4e(&DAT_0097bf4c,0x960);
    FUN_008796d0(&LAB_00793aad);
  }
  if ((DAT_0097bf50 & 2) == 0) {
    DAT_0097bf50 = DAT_0097bf50 | 2;
    FUN_00402e8e(&DAT_00965698);
    FUN_008796d0(&LAB_00793aa3);
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if ((*(int **)(unaff_EBP + 0x14) == (int *)0x0) ||
     (iVar5 = **(int **)(unaff_EBP + 0x14), iVar5 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(iVar5 + -4) >> 1;
  }
  if (uVar1 == 0) {
    FUN_0040810c(unaff_EBP + -0x10);
    FUN_00402fa6();
    FUN_00402fa6();
    puVar3 = *(undefined4 **)(unaff_EBP + 8);
    goto LAB_00793a6c;
  }
  if (*(int *)(unaff_EBP + 0xc) == 0) {
LAB_007939d2:
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_00793a7d(unaff_EBP + 0xc);
    FUN_00402f41(uVar2);
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      FUN_004030b1();
    }
    if ((*(int **)(unaff_EBP + -0x10) == (int *)0x0) ||
       (iVar5 = **(int **)(unaff_EBP + -0x10), iVar5 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(iVar5 + -4) >> 1;
    }
    if (uVar1 != 0) {
      iVar5 = unaff_EBP + 0x14;
      FUN_00432dcc(&DAT_0097bf48);
      FUN_00432dcc(iVar5);
    }
    if ((*(int **)(unaff_EBP + -0x10) == (int *)0x0) ||
       (iVar5 = **(int **)(unaff_EBP + -0x10), iVar5 == 0)) goto LAB_007939d2;
    uVar1 = *(uint *)(iVar5 + -4) >> 1;
  }
  if (uVar1 == 0) {
    FUN_0087a1b0();
    uVar2 = FUN_0087a25a(*(undefined4 *)(unaff_EBP + 0x18),&stack0xfffffff4,10);
    FUN_00402e8e(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00408b49();
    FUN_00402fa6();
    *(undefined4 *)(unaff_EBP + -0x10) = DAT_0097bf4c;
    iVar5 = unaff_EBP + 0xc;
    puVar4 = &DAT_0097bf48;
    FUN_00432dcc(unaff_EBP + 0x14);
    FUN_00432dcc(puVar4);
    FUN_00432dcc(iVar5);
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      FUN_004030b1();
    }
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = *(undefined4 *)(unaff_EBP + -0x10);
  FUN_00408b49();
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    FUN_004030b1();
  }
LAB_00793a6c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


