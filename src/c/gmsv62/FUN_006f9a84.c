/* FUN_006f9a84 - 0x006f9a84 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f9a84(void)

{
  undefined1 *puVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  FUN_00879bb8();
  puVar3 = (undefined4 *)(DAT_00978368 + 0x2c80);
  puVar4 = (undefined4 *)(unaff_EBP + -0x2c);
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar2 = 0;
  if (*(int *)(unaff_EBP + -0x28) < 1) {
    puVar1 = &DAT_00978474;
  }
  else {
    FUN_0087a1b0();
    puVar1 = (undefined1 *)FUN_0087b818(*(undefined4 *)(unaff_EBP + -0x28),&stack0xffffffd4,10);
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_00414edd(puVar1,0xffffffff);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x24) < 1) {
    puVar1 = &DAT_00978474;
  }
  else {
    FUN_0087a1b0();
    puVar1 = (undefined1 *)FUN_0087b818(*(undefined4 *)(unaff_EBP + -0x24),&stack0xffffffd4,10);
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00414edd(puVar1,0xffffffff);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x20) < 1) {
    puVar1 = &DAT_00978474;
  }
  else {
    FUN_0087a1b0();
    puVar1 = (undefined1 *)FUN_0087b818(*(undefined4 *)(unaff_EBP + -0x20),&stack0xffffffd4,10);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  FUN_00414edd(puVar1,0xffffffff);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x2c) == 0) {
    FUN_004a2fef(*(undefined4 *)(unaff_EBP + -0x14));
    FUN_004a2fef(*(undefined4 *)(unaff_EBP + -0x10));
  }
  else {
    if (*(int *)(unaff_EBP + -0x2c) == 1) {
      FUN_004a2fef(*(undefined4 *)(unaff_EBP + -0x14));
      FUN_004a2fef(*(undefined4 *)(unaff_EBP + -0x10));
      FUN_004a2fef(*(undefined4 *)(unaff_EBP + -0x18));
      do {
        FUN_00499fb8((*(uint *)(unaff_EBP + -0x1c) & 1 << ((byte)iVar2 & 0x1f)) != 0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x13);
      uVar5 = 0;
      goto LAB_006f9bd0;
    }
    FUN_006f9059(0);
  }
  uVar5 = 1;
LAB_006f9bd0:
  FUN_006f9059(uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


