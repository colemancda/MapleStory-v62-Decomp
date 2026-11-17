/* FUN_00423626 - 0x00423626 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00423626(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_4c;
  int *piStack_48;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 0x10);
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  if (iVar4 != 0) {
    while( true ) {
      iVar5 = *(int *)((-(uint)(iVar4 != 0) & iVar4 - 0x10U) + 4);
      uVar1 = *(undefined4 *)(iVar4 + 4);
      *(uint *)(unaff_EBP + -0x14) = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
      FUN_00424fdb();
      iVar5 = *(int *)(unaff_EBP + -0x1c);
      iVar4 = *(int *)(iVar5 + 4);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (((iVar4 == 2) && (*(int *)(iVar5 + 0x1c) == 0)) &&
         (*(int *)(iVar5 + 0x18) - *(int *)(unaff_EBP + 8) < 500)) {
        *(undefined4 *)(iVar5 + 0x1c) = 1;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        while( true ) {
          iVar5 = *(int *)(unaff_EBP + -0x1c);
          if ((*(int *)(iVar5 + 0x3c) == 0) ||
             (*(uint *)(*(int *)(iVar5 + 0x3c) + -4) <= *(uint *)(unaff_EBP + -0x10))) break;
          piStack_48 = (int *)0x4236d2;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
          piStack_48 = (int *)(unaff_EBP + -0x40);
          iStack_4c = 0x4236e1;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_48 = (int *)0x4236ed;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          piStack_48 = (int *)0x4236f7;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
          piStack_48 = (int *)(unaff_EBP + -0x30);
          iStack_4c = 0x423701;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_48 = (int *)0x42370d;
            FUN_00878dfb();
          }
          iVar4 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x3c);
          iVar5 = *(int *)(unaff_EBP + -0x10);
          iVar2 = *(int *)(iVar4 + iVar5 * 4);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (iVar2 == 0) {
            piStack_48 = (int *)0x42372c;
            FUN_00878dfb();
          }
          piVar3 = *(int **)(iVar4 + iVar5 * 4);
          iStack_4c = *(int *)(unaff_EBP + -0x3c);
          piStack_48 = *(int **)(unaff_EBP + -0x38);
          iVar4 = (**(code **)(*piVar3 + 0x110))
                            (piVar3,0,*(undefined4 *)(unaff_EBP + -0x30),
                             *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                             *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x40));
          if (iVar4 < 0) {
            iStack_4c = iVar4;
            piStack_48 = piVar3;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          piStack_48 = (int *)0x42376e;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_48 = (int *)0x423779;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          piStack_48 = (int *)0x423786;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_48 = (int *)0x423791;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        }
      }
      iVar4 = *(int *)(iVar5 + 0x14);
      if ((iVar4 == 0) || (*(int *)(unaff_EBP + 8) - iVar4 < 0)) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else {
        *(int **)(unaff_EBP + -0x10) = &iStack_4c;
        iStack_4c = iVar4;
        piStack_48 = (int *)iVar4;
        FUN_00424e5b(unaff_EBP + -0x20);
        FUN_00423801();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x14) = 0;
        iVar5 = *(int *)(unaff_EBP + -0x1c);
      }
      if (iVar5 != 0) {
        piStack_48 = (int *)0x4237e4;
        FUN_0042500e();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) break;
      iVar4 = *(int *)(unaff_EBP + -0x14);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


