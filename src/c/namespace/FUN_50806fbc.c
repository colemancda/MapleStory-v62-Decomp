/* FUN_50806fbc - 0x50806fbc in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50806fbc(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  short *psVar4;
  int *piVar5;
  int unaff_EBP;
  undefined4 uVar6;
  
  FUN_5080e090();
  iVar1 = *(int *)(unaff_EBP + 0x10);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if (iVar1 != 0) {
    piVar5 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_50806ab4();
    piVar2 = *(int **)(unaff_EBP + 0x10);
    psVar4 = *(short **)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piVar2 == (int *)0x0) {
      if ((psVar4 != (short *)0x0) && (*psVar4 == 0x2f)) {
        psVar4 = psVar4 + 1;
      }
      (**(code **)(*piVar5 + 0x28))(piVar5,0,psVar4,0,iVar1);
    }
    else if ((psVar4 == (short *)0x0) || (*psVar4 != 0x2f)) {
      piVar5 = FUN_50801ba4();
      puVar3 = (undefined4 *)*piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (puVar3 == (undefined4 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar3;
      }
      if (*(int *)(unaff_EBP + 0x10) == 0) {
        FUN_5080dfed(0x80004003);
      }
      (**(code **)(**(int **)(unaff_EBP + 0x10) + 0x24))
                (*(int **)(unaff_EBP + 0x10),0,uVar6,0,iVar1);
      if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
        FUN_508040b6(*(int **)(unaff_EBP + 0xc));
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
      }
    }
    else {
      (**(code **)(*piVar2 + 0x24))(piVar2,0,psVar4 + 1,0,iVar1);
    }
    piVar5 = *(int **)(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    FUN_508070a8();
    return;
  }
  FUN_508070a8();
  return;
}


