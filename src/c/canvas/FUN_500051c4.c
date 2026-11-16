/* FUN_500051c4 - 0x500051c4 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int FUN_500051c4(void)

{
  int *piVar1;
  ushort uVar2;
  undefined2 extraout_var;
  void *pvVar3;
  int iVar4;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  short *psVar6;
  void *pvVar7;
  
  FUN_50012d80();
  psVar6 = *(short **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if ((psVar6 == (short *)0x0) || (*psVar6 == 0)) {
    iVar4 = 0;
  }
  else {
    pvVar7 = (void *)-*(int *)(unaff_EBP + 0xc);
    *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(extraout_ECX + 0x3c);
    FUN_500024f7();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    pvVar3 = (void *)CONCAT22(extraout_var,*psVar6);
    while( true ) {
      psVar6 = psVar6 + 1;
      uVar2 = (ushort)pvVar3;
      if (uVar2 == 0) break;
      if (uVar2 == 9) {
        pvVar3 = FUN_50004c91(*(void **)(unaff_EBP + -0x10),0x20,(uint *)0x0);
        uVar5 = 1;
        if (1 < (uint)((int)pvVar3 * 4)) {
          uVar5 = (int)pvVar3 * 4;
        }
        pvVar3 = (void *)(((uint)pvVar7 / uVar5 + 1) * uVar5);
        pvVar7 = pvVar3;
      }
      else if (0x1f < uVar2) {
        pvVar3 = FUN_50004c91(*(void **)(unaff_EBP + -0x10),pvVar3,(uint *)0x0);
        pvVar7 = (void *)((int)pvVar7 + (int)pvVar3);
      }
      pvVar3 = (void *)CONCAT22((short)((uint)pvVar3 >> 0x10),*psVar6);
    }
    piVar1 = (int *)(extraout_ECX + 0x40);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(extraout_ECX + 0x3c) = 0;
    }
    iVar4 = *(int *)(unaff_EBP + 0xc) + (int)pvVar7;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


