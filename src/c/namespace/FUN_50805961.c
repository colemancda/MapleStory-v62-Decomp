/* FUN_50805961 - 0x50805961 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50805961(void)

{
  undefined4 *puVar1;
  int iVar2;
  void *this;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc8;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    FUN_50805ae2();
    return;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50803d00();
  iVar2 = *(int *)(unaff_EBP + 8);
  puVar1 = (undefined4 *)(iVar2 + 0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  FUN_508012a1();
  this = *(void **)(iVar2 + 0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (this != (void *)0x0) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    iVar4 = FUN_508086f1(this,(int *)(unaff_EBP + 0xc),(undefined4 *)(unaff_EBP + 8));
    if (iVar4 != 0) {
      FUN_50805bf4(*(void **)(iVar2 + 0x5c),(int *)(unaff_EBP + 0xc));
      Ordinal_8(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      (**(code **)(unaff_EBP + 8))(iVar2,unaff_EBP + -0x28);
      if (*(int *)(iVar2 + 0x60) == 0) {
        puVar5 = FUN_50803b07();
        if (puVar5 == (uint *)0x0) {
          puVar5 = (uint *)0x0;
        }
        else {
          puVar5[1] = 0;
          puVar5[3] = 0;
          puVar5[2] = 0x1f;
          *puVar5 = (uint)&PTR_FUN_508171c0;
          puVar5[4] = 100;
          puVar5[5] = 0x18;
        }
        *(uint **)(iVar2 + 0x60) = puVar5;
      }
      FUN_50803fbb();
      *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x28);
      *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x24);
      *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x20);
      *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x1c);
      puVar3 = *(undefined4 **)(unaff_EBP + 0x10);
      *(undefined2 *)(unaff_EBP + -0x28) = 0;
      *puVar3 = *(undefined4 *)(unaff_EBP + -0x38);
      puVar3[1] = *(undefined4 *)(unaff_EBP + -0x34);
      puVar3[2] = *(undefined4 *)(unaff_EBP + -0x30);
      puVar3[3] = *(undefined4 *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar4 = FUN_508037a7((short *)(unaff_EBP + -0x28));
      if (iVar4 < 0) {
        FUN_5080dfed(iVar4);
      }
      piVar6 = (int *)(iVar2 + 0x20);
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        *puVar1 = 0;
      }
      piVar6 = *(int **)(unaff_EBP + 0xc);
      goto LAB_50805aa4;
    }
  }
  if (*(void **)(iVar2 + 0x60) != (void *)0x0) {
    iVar4 = FUN_50803ea7(*(void **)(iVar2 + 0x60),(int *)(unaff_EBP + 0xc),
                         *(short **)(unaff_EBP + 0x10));
    if (iVar4 != 0) {
      piVar6 = (int *)(iVar2 + 0x20);
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        *puVar1 = 0;
      }
      piVar6 = *(int **)(unaff_EBP + 0xc);
LAB_50805aa4:
      if (piVar6 != (int *)0x0) {
        FUN_508040b6(piVar6);
      }
      FUN_50805ae2();
      return;
    }
  }
  piVar6 = (int *)(iVar2 + 0x20);
  *piVar6 = *piVar6 + -1;
  if (*piVar6 == 0) {
    *puVar1 = 0;
  }
  piVar6 = *(int **)(unaff_EBP + 0xc);
  **(undefined2 **)(unaff_EBP + 0x10) = 0;
  if (piVar6 != (int *)0x0) {
    FUN_508040b6(piVar6);
  }
  FUN_50805ae2();
  return;
}


