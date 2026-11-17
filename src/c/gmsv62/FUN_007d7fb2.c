/* FUN_007d7fb2 - 0x007d7fb2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007d7fb2(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  
  FUN_00879bb8();
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar3 == (int *)0x0) {
    piStack_24 = (int *)0x80004003;
    iStack_28 = 0x7d7fd7;
    FUN_00878dfb();
  }
  piStack_24 = (int *)0x7d7fde;
  uVar1 = FUN_0040e48b();
  iVar4 = (uVar1 >> 8) + 1;
  *(int *)(unaff_EBP + -0x1c) = iVar4;
  if (piVar3 == (int *)0x0) {
    piStack_24 = (int *)0x80004003;
    iStack_28 = 0x7d7ff5;
    FUN_00878dfb();
  }
  piStack_24 = (int *)0x7d7ffc;
  uVar1 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar5 = (uVar1 >> 8) + 1;
  if (iVar4 != 0) {
    do {
      if (iVar5 != 0) {
        iVar4 = *(int *)(unaff_EBP + -0x10);
        iVar2 = 0;
        *(int *)(unaff_EBP + -0x18) = iVar5;
        do {
          if (*(int *)(unaff_EBP + 8) == 0) {
            piStack_24 = (int *)0x80004003;
            iStack_28 = 0x7d8029;
            FUN_00878dfb();
          }
          iStack_2c = unaff_EBP + -0x14;
          iStack_28 = iVar4 << 8;
          piStack_24 = (int *)iVar2;
          FUN_007d7bb4();
          piStack_24 = *(int **)(unaff_EBP + 0x10);
          iStack_28 = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          *(int **)(unaff_EBP + -0x20) = &iStack_2c;
          FUN_007d81ba(unaff_EBP + -0x14);
          FUN_007d7bec();
          piStack_24 = *(int **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (piStack_24 != (int *)0x0) {
            iStack_28 = 0x7d8069;
            (**(code **)(*piStack_24 + 8))();
          }
          iVar2 = iVar2 + 0x100;
          piVar3 = (int *)(unaff_EBP + -0x18);
          *piVar3 = *piVar3 + -1;
        } while (*piVar3 != 0);
        iVar4 = *(int *)(unaff_EBP + -0x1c);
        piVar3 = *(int **)(unaff_EBP + 8);
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    } while (*(int *)(unaff_EBP + -0x10) < iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    iStack_28 = 0x7d8090;
    piStack_24 = piVar3;
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


