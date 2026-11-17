/* FUN_00640580 - 0x00640580 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00640580(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_006406da(unaff_EBP + -0x10);
  if ((*(char **)(unaff_EBP + -0x10) == (char *)0x0) || (**(char **)(unaff_EBP + -0x10) == '\0')) {
    FUN_00414f29();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    goto LAB_006406c3;
  }
  if ((DAT_009795b4 & 1) == 0) {
    DAT_009795b4 = DAT_009795b4 | 1;
    DAT_009795b0 = 0;
    FUN_008796d0(&LAB_006406d0);
  }
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x6bb);
  iVar4 = DAT_00968374;
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00434e21(*(undefined4 *)(unaff_EBP + 8),uVar1,*(undefined4 *)(unaff_EBP + -0x10),iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  if (DAT_00968374 == -1) {
LAB_00640661:
    FUN_00414f8b(unaff_EBP + -0x10);
    DAT_00968374 = FUN_0064088d(*(undefined4 *)(unaff_EBP + -0x10));
  }
  else {
    iVar4 = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iVar4 = DAT_00980dfc;
    }
    iVar3 = DAT_009795b0;
    if (DAT_009795b0 == 0) {
      iVar3 = DAT_00980dfc;
    }
    iVar4 = FUN_008858f0(iVar3,iVar4);
    if (iVar4 != 0) goto LAB_00640661;
    iVar4 = FUN_006407e8(**(undefined4 **)(unaff_EBP + 8));
    if (iVar4 != 0) goto LAB_00640661;
  }
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x6bb);
  iVar4 = DAT_00968374;
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00434e21(*(undefined4 *)(unaff_EBP + 8),uVar1,*(undefined4 *)(unaff_EBP + -0x10),iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  DAT_00968374 = DAT_00968374 + 1;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
LAB_006406c3:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


