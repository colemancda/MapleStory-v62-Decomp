/* FUN_5000526f - 0x5000526f in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int FUN_5000526f(void)

{
  undefined4 *puVar1;
  int *piVar2;
  ushort uVar3;
  undefined2 extraout_var;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  int extraout_ECX;
  uint uVar7;
  short *psVar8;
  int unaff_EBP;
  uint uVar9;
  
  FUN_50012d80();
  psVar8 = *(short **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if ((psVar8 == (short *)0x0) || (*psVar8 == 0)) {
    iVar6 = 0;
  }
  else {
    puVar1 = (undefined4 *)(extraout_ECX + 0x3c);
    uVar9 = -*(int *)(unaff_EBP + 0x10);
    *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
    FUN_500024f7();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar4 = CONCAT22(extraout_var,*psVar8);
    while( true ) {
      psVar8 = psVar8 + 1;
      uVar3 = (ushort)uVar4;
      if (uVar3 == 0) break;
      if (uVar3 == 9) {
        pvVar5 = FUN_50004c91(*(void **)(unaff_EBP + -0x10),0x20,(uint *)0x0);
        uVar7 = 1;
        if (1 < (uint)((int)pvVar5 * 4)) {
          uVar7 = (int)pvVar5 * 4;
        }
        uVar9 = (uVar9 / uVar7 + 1) * uVar7;
      }
      else if (0x1f < uVar3) {
        pvVar5 = FUN_50004c91(*(void **)(unaff_EBP + -0x10),uVar4,(uint *)0x0);
        uVar9 = uVar9 + (int)pvVar5;
      }
      iVar6 = *(int *)(unaff_EBP + 0x10) + uVar9;
      if (*(int *)(unaff_EBP + 0xc) < iVar6) {
        iVar6 = ((int)psVar8 - *(int *)(unaff_EBP + 8) >> 1) + -1;
        piVar2 = (int *)(extraout_ECX + 0x40);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          *puVar1 = 0;
        }
        goto LAB_5000532d;
      }
      uVar4 = CONCAT22((short)((uint)iVar6 >> 0x10),*psVar8);
    }
    piVar2 = (int *)(extraout_ECX + 0x40);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    iVar6 = ((int)psVar8 - *(int *)(unaff_EBP + 8) >> 1) + -1;
  }
LAB_5000532d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar6;
}


