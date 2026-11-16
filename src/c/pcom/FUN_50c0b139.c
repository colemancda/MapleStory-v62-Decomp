/* FUN_50c0b139 - 0x50c0b139 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int FUN_50c0b139(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  uint uVar6;
  
  FUN_50c10270();
  uVar6 = 0xffffffff;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffcc;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xffffffff;
  if ((*(short *)(unaff_EBP + 0x1c) == 0) || (*(short *)(unaff_EBP + 0x1c) == 10)) {
    *(int *)(unaff_EBP + -0x18) = unaff_EBP + 0xc;
  }
  else {
    Ordinal_8(unaff_EBP + -0x34);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_50c08394((ushort *)(unaff_EBP + -0x34),(ushort *)(unaff_EBP + 0xc),0,3);
    if (iVar3 < 0) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = FUN_50c08269((short *)(unaff_EBP + -0x34));
      if (iVar4 < 0) {
        FUN_50c101c4(iVar4);
      }
      goto LAB_50c0b2bd;
    }
    uVar6 = *(uint *)(unaff_EBP + -0x2c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int *)(unaff_EBP + -0x18) = unaff_EBP + 0x1c;
    *(uint *)(unaff_EBP + -0x14) = uVar6;
    iVar3 = FUN_50c08269((short *)(unaff_EBP + -0x34));
    if (iVar3 < 0) {
      FUN_50c101c4(iVar3);
    }
  }
  iVar3 = *(int *)(unaff_EBP + 8);
  puVar1 = (undefined4 *)(iVar3 + 0x1c);
  *(undefined4 **)(unaff_EBP + -0x1c) = puVar1;
  *(undefined4 **)(unaff_EBP + -0x20) = puVar1;
  FUN_50c026fc();
  iVar4 = *(int *)(iVar3 + 0x24);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar4 == 0) {
    uVar5 = *(uint *)(*(int *)(iVar3 + 0x2c) + 8);
  }
  else if (**(int **)(iVar3 + 0x28) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(**(int **)(iVar3 + 0x28) + -4);
  }
  if (uVar6 == uVar5) {
    uVar6 = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x14) = 0xffffffff;
  }
  else if (((int)uVar6 < -1) || ((int)uVar5 <= (int)uVar6)) {
    piVar2 = (int *)(iVar3 + 0x20);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    iVar3 = -0x7ff8ffa9;
    goto LAB_50c0b2bd;
  }
  iVar4 = *(int *)(iVar3 + 0x24);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar4 == 0) {
    if (uVar6 == 0xffffffff) {
      uVar6 = FUN_50c0b92b(*(void **)(iVar3 + 0x2c));
    }
    else {
      iVar4 = FUN_50c0ba1d(*(void **)(iVar3 + 0x2c),uVar6);
      uVar6 = FUN_50c0b969(*(void **)(iVar3 + 0x2c),iVar4);
    }
  }
  else {
    uVar6 = FUN_50c0ba70(*(void **)(iVar3 + 0x28),uVar6);
  }
  FUN_50c0b747(uVar6);
  FUN_50c0afd1(*(void **)(uVar6 + 4),*(short **)(unaff_EBP + -0x18));
  piVar2 = (int *)(iVar3 + 0x20);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *puVar1 = 0;
  }
  iVar3 = 0;
LAB_50c0b2bd:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


