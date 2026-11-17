/* FUN_006d2641 - 0x006d2641 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_006d2641(void)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  int iVar3;
  int *piStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  FUN_00879bb8();
  iVar3 = extraout_ECX[0x18];
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
    *(int **)(unaff_EBP + -0x10) = extraout_ECX + 0x2e;
    do {
      if (**(int **)(unaff_EBP + -0x10) != 0) {
        iStack_34 = 1;
        iStack_38 = unaff_EBP + -0x30;
        iStack_3c = 0x6d2684;
        FUN_0043f3d6();
        iStack_34 = unaff_EBP + -0x20;
        iStack_38 = 0x6d2690;
        piVar1 = (int *)FUN_004489f5();
        *(int **)(unaff_EBP + -0x18) = piVar1;
        iVar2 = *piVar1;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (iVar2 == 0) {
          iStack_34 = 0x80004003;
          iStack_38 = 0x6d26a4;
          FUN_00878dfb();
          piVar1 = *(int **)(unaff_EBP + -0x18);
        }
        *(int *)(unaff_EBP + -0x14) = *piVar1;
        iStack_34 = unaff_EBP + -0x1c;
        iStack_38 = 0x6d26b8;
        piVar1 = (int *)FUN_004489f5();
        *(int **)(unaff_EBP + -0x18) = piVar1;
        iVar2 = *piVar1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (iVar2 == 0) {
          iStack_34 = 0x80004003;
          iStack_38 = 0x6d26cd;
          FUN_00878dfb();
          piVar1 = *(int **)(unaff_EBP + -0x18);
        }
        *(int *)(unaff_EBP + -0x18) = *piVar1;
        iStack_34 = 0x6d26dd;
        iStack_34 = FUN_00404abb();
        iStack_34 = -iStack_34;
        iStack_38 = 0x6d26e8;
        iStack_38 = FUN_00404a94();
        iStack_38 = -iStack_38;
        iStack_3c = unaff_EBP + -0x30;
        piStack_40 = (int *)0x6d26f5;
        (*DAT_0097b54c)();
        piStack_40 = *(int **)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (piStack_40 != (int *)0x0) {
          (**(code **)(*piStack_40 + 8))();
        }
        piStack_40 = *(int **)(unaff_EBP + -0x20);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piStack_40 != (int *)0x0) {
          (**(code **)(*piStack_40 + 8))();
        }
        piStack_40 = *(int **)(unaff_EBP + 0xc);
        iVar2 = (*DAT_0097b57c)(unaff_EBP + -0x30,*(undefined4 *)(unaff_EBP + 8));
        if (iVar2 != 0) {
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          *(undefined4 *)(unaff_EBP + -4) = 2;
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          iStack_34 = extraout_ECX[iVar3 * 8 + 0x33];
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_38 = 0x6d277f;
          iStack_38 = FUN_004ec897();
          iStack_34 = 0xffffffff;
          iStack_3c = 0x6d278a;
          FUN_00414edd();
          iStack_34 = 1;
          iStack_38 = unaff_EBP + -0x10;
          iStack_3c = unaff_EBP + -0x18;
          *(int ***)(unaff_EBP + -0x20) = &piStack_40;
          FUN_00450368(unaff_EBP + -0x14);
          FUN_007d3411();
          iStack_34 = *(undefined4 *)(unaff_EBP + -0x10);
          iStack_38 = 0x6d27b5;
          iVar3 = (**(code **)(*extraout_ECX + 0x30))();
          iStack_38 = iVar3 + 0x14 + *(int *)(unaff_EBP + 0xc);
          iStack_3c = 0x6d27c4;
          iVar3 = (**(code **)(*extraout_ECX + 0x2c))();
          iStack_3c = iVar3 + 0x14 + *(int *)(unaff_EBP + 8);
          piStack_40 = (int *)0x6d27d7;
          FUN_0074d755();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iStack_34 = 0x6d27e3;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_34 = 0x6d27ef;
          FUN_00414ebb();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iStack_34 = 0x6d27fb;
          FUN_00414ebb();
          iStack_34 = 1;
          goto LAB_006d2745;
        }
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x20;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    iStack_34 = 0x6d2743;
    FUN_0074d6fb();
  }
  iStack_34 = 0;
LAB_006d2745:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iStack_34;
}


