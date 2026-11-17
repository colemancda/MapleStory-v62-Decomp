/* FUN_00820560 - 0x00820560 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00820560(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  int *piStack_60;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = 0xffffffff;
  *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + 8) + -0xd;
  *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + 0xc) + -0x23;
  *(int ***)(unaff_EBP + -0x38) = &piStack_60;
  FUN_00679e4e(&piStack_60,0x3b2);
  iVar4 = unaff_EBP + -0x28;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004115d9(iVar4);
  FUN_00404e7f(iVar4);
  iVar4 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d(iVar4);
  piStack_60 = (int *)FUN_004048a4(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_60 = (int *)FUN_00412348(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00416f14();
  piStack_60 = (int *)0x8205f4;
  FUN_004027b3();
  piStack_60 = (int *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_60 = (int *)FUN_00402bc3();
  if ((int)piStack_60 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_60 = (int *)0x820618;
  FUN_004027eb();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  do {
    iVar4 = *(int *)(extraout_ECX + 0x588);
    if ((iVar4 == 0) ||
       (piStack_60 = *(int **)(unaff_EBP + -0x10), *(int **)(iVar4 + -4) <= piStack_60))
    goto LAB_008207b8;
    iVar2 = *(int *)(unaff_EBP + -0x14);
    *(int ***)(unaff_EBP + -0x38) = &piStack_60;
    FUN_00679e4e(&piStack_60,0x3b2);
    iVar1 = unaff_EBP + -0x30;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    *(int *)(unaff_EBP + -0x18) = iVar2 + iVar4 + 8;
    FUN_004115d9(iVar1);
    FUN_00404e7f(iVar1);
    iVar4 = unaff_EBP + -0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0040263d(iVar4);
    piStack_60 = (int *)FUN_004048a4(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_60 = (int *)FUN_00412348(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00416f14();
    piStack_60 = *(int **)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (piStack_60 != (int *)0x0) {
      (**(code **)(*piStack_60 + 8))();
    }
    piStack_60 = (int *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_60 = (int *)FUN_00402bc3();
    if ((int)piStack_60 < 0) {
      FUN_00878dfb();
    }
    piStack_60 = *(int **)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (piStack_60 != (int *)0x0) {
      (**(code **)(*piStack_60 + 8))();
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      piStack_60 = (int *)0x80004003;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      piStack_60 = (int *)0x80004003;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + 8);
    piStack_60 = (int *)0x820708;
    iVar1 = FUN_00404a94();
    iVar4 = *(int *)(unaff_EBP + -0x34);
    piStack_60 = (int *)0x820715;
    iVar2 = FUN_00404a94();
    iVar2 = (iVar4 - iVar1) + iVar2;
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      piStack_60 = (int *)0x80004003;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      piStack_60 = (int *)0x80004003;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + 8);
    piStack_60 = (int *)0x82073d;
    iVar1 = FUN_00404abb();
    iVar4 = *(int *)(unaff_EBP + -0x3c);
    piStack_60 = (int *)0x82074a;
    iVar3 = FUN_00404abb();
    iVar3 = (iVar4 - iVar1) + iVar3;
    if ((-1 < iVar2) && (-1 < iVar3)) {
      if (**(int **)(unaff_EBP + -0x18) == 0) {
        piStack_60 = (int *)0x80004003;
        FUN_00878dfb();
      }
      piStack_60 = (int *)(unaff_EBP + -0x1c);
      iVar4 = (**(code **)(*(int *)**(undefined4 **)(unaff_EBP + -0x18) + 0x88))
                        ((int *)**(undefined4 **)(unaff_EBP + -0x18),iVar2,iVar3);
      if ((-1 < iVar4) && (*(char *)(unaff_EBP + -0x19) != '\0')) {
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x10);
        piStack_60 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (piStack_60 != (int *)0x0) {
          (**(code **)(*piStack_60 + 8))();
        }
LAB_008207b8:
        if (*(int *)(extraout_ECX + 0x570) == *(int *)(unaff_EBP + -0x20)) {
          piStack_60 = *(int **)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (piStack_60 != (int *)0x0) {
            (**(code **)(*piStack_60 + 8))();
          }
          uVar5 = 0;
        }
        else {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          *(int *)(extraout_ECX + 0x570) = *(int *)(unaff_EBP + -0x20);
          piStack_60 = *(int **)(unaff_EBP + 0xc);
          if (piStack_60 != (int *)0x0) {
            (**(code **)(*piStack_60 + 8))();
          }
          uVar5 = 1;
        }
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return uVar5;
      }
    }
    piStack_60 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piStack_60 != (int *)0x0) {
      (**(code **)(*piStack_60 + 8))();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0xc;
  } while( true );
}


