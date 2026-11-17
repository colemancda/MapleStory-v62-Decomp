/* FUN_00772dca - 0x00772dca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00772dca(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iVar4;
  undefined4 uVar5;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  (*DAT_0097b504)(unaff_EBP + -0x20,5,0x53,0x118,99);
  iVar2 = *(int *)(unaff_EBP + 0x10);
  iVar4 = *(int *)(unaff_EBP + 0xc);
  iVar1 = (*DAT_0097b57c)(unaff_EBP + -0x20,iVar4,iVar2);
  if (iVar1 != 0) {
    if ((*(char **)(extraout_ECX + 0x58) != (char *)0x0) &&
       (**(char **)(extraout_ECX + 0x58) != '\0')) {
      puVar3 = *(undefined4 **)(unaff_EBP + 8);
      *puVar3 = 0;
      FUN_00414f8b(extraout_ECX + 0x58);
      goto LAB_00773059;
    }
  }
  if ((iVar2 < 0x72) || (0x130 < iVar2)) {
LAB_00773043:
    puVar3 = *(undefined4 **)(unaff_EBP + 8);
    *puVar3 = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
    goto LAB_00773059;
  }
  iVar2 = *(int *)(*(int *)(*(int *)(extraout_ECX + 0x28) + 0x584) + 0x38) * 0x21 + -0x71 + iVar2;
  iVar4 = iVar4 + -6;
  iVar1 = (*DAT_0097b57c)(*(int *)(extraout_ECX + 0x28) + 0x788,iVar4,iVar2);
  if (iVar1 == 0) {
    iVar1 = (*DAT_0097b57c)(*(int *)(extraout_ECX + 0x28) + 0x798,iVar4,iVar2);
    if (iVar1 != 0) {
      uVar5 = 0x2b5;
      goto LAB_00772e70;
    }
    iVar1 = (*DAT_0097b57c)(extraout_ECX + 0x94,iVar4,iVar2);
    if ((iVar1 != 0) || (iVar1 = (*DAT_0097b57c)(extraout_ECX + 0x110,iVar4,iVar2), iVar1 != 0)) {
      uVar5 = 0x2b6;
      goto LAB_00772e70;
    }
    iVar1 = (*DAT_0097b57c)(extraout_ECX + 0xa4,iVar4,iVar2);
    if ((iVar1 != 0) || (iVar1 = (*DAT_0097b57c)(extraout_ECX + 0x120,iVar4,iVar2), iVar1 != 0)) {
      uVar5 = 0x2b7;
      goto LAB_00772e70;
    }
    iVar1 = (*DAT_0097b57c)(extraout_ECX + 0xb4,iVar4,iVar2);
    if ((iVar1 != 0) || (iVar1 = (*DAT_0097b57c)(extraout_ECX + 0x130,iVar4,iVar2), iVar1 != 0)) {
      uVar5 = 0x2b8;
      goto LAB_00772e70;
    }
    iVar1 = (*DAT_0097b57c)(extraout_ECX + 0xc4,iVar4,iVar2);
    if ((iVar1 != 0) || (iVar1 = (*DAT_0097b57c)(extraout_ECX + 0x140,iVar4,iVar2), iVar1 != 0)) {
      uVar5 = 0x2b9;
      goto LAB_00772e70;
    }
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar5 = FUN_00772c1c(*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10),
                         *(undefined4 *)(*(int *)(*(int *)(extraout_ECX + 0x28) + 0x584) + 0x38));
    *(undefined4 *)(unaff_EBP + 0x10) = uVar5;
    FUN_00772cd7(uVar5,unaff_EBP + -0x60);
    if ((*(int *)(unaff_EBP + 0x10) == 0) || (*(int *)(unaff_EBP + -0x60) == 0)) {
      puVar3 = *(undefined4 **)(unaff_EBP + 8);
      *puVar3 = 0;
      FUN_00414edd(&DAT_00978474,0xffffffff);
LAB_0077307d:
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00770582();
      goto LAB_00773059;
    }
    if ((*(int *)(unaff_EBP + -0x24) != 0) &&
       (iVar2 = (*DAT_0097b57c)(unaff_EBP + -0x34,iVar4,iVar2), iVar2 != 0)) {
      puVar3 = *(undefined4 **)(unaff_EBP + 8);
      *puVar3 = 0;
      FUN_00414f8b(unaff_EBP + -0x58);
      goto LAB_0077307d;
    }
    if (((*(int *)(unaff_EBP + 0xc) < 0x61) || (0xcc < *(int *)(unaff_EBP + 0xc))) ||
       (*(int *)(unaff_EBP + -0x50) != -1)) {
      if (0xdb < *(int *)(unaff_EBP + 0xc)) {
        iVar2 = *(int *)(unaff_EBP + -0x4c);
        puVar3 = *(undefined4 **)(unaff_EBP + 8);
        *puVar3 = 0;
        FUN_00414f8b(extraout_ECX + 0x40 + iVar2 * 4);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00770582();
        goto LAB_00773059;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00770582();
      goto LAB_00773043;
    }
    FUN_00679d22(*(undefined4 *)(unaff_EBP + 8),0xeca);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00770582();
  }
  else {
    uVar5 = 0x2b4;
LAB_00772e70:
    FUN_00679d22(*(undefined4 *)(unaff_EBP + 8),uVar5);
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
LAB_00773059:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


