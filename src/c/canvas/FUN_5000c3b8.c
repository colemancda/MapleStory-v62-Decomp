/* FUN_5000c3b8 - 0x5000c3b8 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int FUN_5000c3b8(void)

{
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_EBP;
  bool bVar6;
  
  FUN_50012d80();
  iVar3 = *(int *)(unaff_EBP + 0xc);
  iVar5 = *(int *)(unaff_EBP + 0x14) + iVar3;
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 0x10);
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  *(int *)(unaff_EBP + -0x14) = iVar5;
  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + 0x10) + *(int *)(unaff_EBP + 0x18);
  if (iVar5 < iVar3) {
    *(int *)(unaff_EBP + -0x14) = iVar3;
  }
  if ((*(short *)(unaff_EBP + 0x1c) == 0) || (*(short *)(unaff_EBP + 0x1c) == 10)) {
    bVar6 = false;
  }
  else {
    Ordinal_8(unaff_EBP + -0x2c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_5000cfbb((ushort *)(unaff_EBP + -0x2c),(ushort *)(unaff_EBP + 0x1c),0,0xb);
    if (iVar3 < 0) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar3 = FUN_5000630c((short *)(unaff_EBP + -0x2c));
      if (iVar3 < 0) {
        FUN_50012c97(iVar3);
      }
      iVar3 = -0x7ff8ffa9;
      goto LAB_5000c535;
    }
    bVar6 = *(short *)(unaff_EBP + -0x24) != 0;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_5000630c((short *)(unaff_EBP + -0x2c));
    if (iVar3 < 0) {
      FUN_50012c97(iVar3);
    }
  }
  if (bVar6) {
    puVar1 = *(undefined2 **)(unaff_EBP + 0x2c);
    if (puVar1 == (undefined2 *)0x0) {
      iVar3 = -0x7fffbffd;
      goto LAB_5000c535;
    }
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    iVar3 = FUN_5000c940();
    if (iVar3 < 0) goto LAB_5000c535;
    iVar3 = *(int *)(unaff_EBP + 8);
    *(int *)(unaff_EBP + 8) = iVar3;
    iVar5 = FUN_50006e63((void *)(*(int *)(unaff_EBP + 0xc) + 0x18),(int *)(unaff_EBP + 8));
    if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
      FUN_50012c97(iVar5);
    }
    piVar2 = *(int **)(unaff_EBP + 0xc);
    *puVar1 = 0xd;
    *(int **)(puVar1 + 4) = piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
    *(int *)(unaff_EBP + 8) = iVar3 + 0x44;
    *(int *)(unaff_EBP + 0x10) = iVar3 + 0x44;
    FUN_500024f7();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    puVar4 = (undefined4 *)FUN_5000c83c((void *)(iVar3 + 0x4c));
    *puVar4 = *(undefined4 *)(unaff_EBP + -0x1c);
    puVar4[1] = *(undefined4 *)(unaff_EBP + -0x18);
    puVar4[2] = *(undefined4 *)(unaff_EBP + -0x14);
    puVar4[3] = *(undefined4 *)(unaff_EBP + -0x10);
    *(undefined4 **)(*(int *)(unaff_EBP + 0xc) + 0x1c) = puVar4;
    if (*(int *)(iVar3 + 0x60) < *(int *)(iVar3 + 0x68)) {
      (*DAT_50081cf8)(iVar3 + 0x60,iVar3 + 0x60,unaff_EBP + -0x1c);
    }
    puVar4 = *(undefined4 **)(unaff_EBP + 8);
    piVar2 = puVar4 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar4 = 0;
    }
  }
  else {
    iVar3 = *(int *)(unaff_EBP + 8);
    (*DAT_50081d80)(iVar3 + 0x70,unaff_EBP + -0x1c);
    FUN_5000b444(iVar3);
  }
  iVar3 = 0;
LAB_5000c535:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


