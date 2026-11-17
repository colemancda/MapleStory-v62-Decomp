/* FUN_004497f5 - 0x004497f5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_004497f5(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int unaff_EBP;
  int *piStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  int iStack_34;
  undefined4 uStack_30;
  
  FUN_00879bb8();
  uStack_30 = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_34 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  piStack_38 = (int *)0x449816;
  FUN_00552e70();
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (piVar2 == (int *)0x0) {
    piVar3 = *(int **)(unaff_EBP + 8);
    *piVar3 = 0;
  }
  else {
    if (*(int *)(unaff_EBP + 0xc) / 10000 == 0x38e) {
      piVar3 = *(int **)(unaff_EBP + 8);
      *piVar3 = (int)piVar2;
      uStack_3c = 0x44984a;
      piStack_38 = piVar2;
      (**(code **)(*piVar2 + 4))();
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
    }
    else {
      piStack_38 = (int *)0x0;
      uStack_3c = 0;
      *(int ***)(unaff_EBP + -0x1c) = &piStack_40;
      piStack_40 = piVar2;
      FUN_00679e4e(&piStack_40,0x3b4);
      iVar1 = unaff_EBP + -0x2c;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0040263d(iVar1);
      FUN_004048a4(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_40 = (int *)0x44988b;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + 0xc) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar1 != 0) {
        piStack_38 = (int *)(unaff_EBP + 0xc);
        uStack_3c = 0x4498a1;
        piStack_38 = (int *)FUN_00404b30();
        if (((int)piStack_38 < 0) && (piStack_38 != (int *)0x80004002)) {
          uStack_3c = 0x4498b2;
          FUN_00878dfb();
        }
      }
      piStack_38 = (int *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_3c = 0x4498bf;
      piStack_38 = (int *)FUN_00402bc3();
      if ((int)piStack_38 < 0) {
        uStack_3c = 0x4498ca;
        FUN_00878dfb();
      }
      piStack_38 = *(int **)(unaff_EBP + -0x14);
      piVar3 = *(int **)(unaff_EBP + 8);
      *piVar3 = (int)piStack_38;
      piVar2 = (int *)0x0;
      if (piStack_38 != (int *)0x0) {
        uStack_3c = 0x4498dc;
        (**(code **)(*piStack_38 + 4))();
        piVar2 = *(int **)(unaff_EBP + -0x14);
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piVar2 != (int *)0x0) {
        uStack_3c = 0x4498ef;
        piStack_38 = piVar2;
        (**(code **)(*piVar2 + 8))();
      }
    }
    piStack_38 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piStack_38 != (int *)0x0) {
      uStack_3c = 0x449900;
      (**(code **)(*piStack_38 + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar3;
}


