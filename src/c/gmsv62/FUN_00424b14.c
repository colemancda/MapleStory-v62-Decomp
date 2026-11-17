/* FUN_00424b14 - 0x00424b14 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424b14(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int unaff_EBP;
  float10 extraout_ST0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_94 [4];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  int iStack_80;
  int *piStack_7c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    piStack_7c = (int *)0x424b39;
    uVar5 = FUN_0040cf4d();
    piVar1 = *(int **)(unaff_EBP + 0x10);
    iVar8 = piVar1[2];
    iVar2 = *piVar1;
    *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
    *(int *)(unaff_EBP + 0x10) = iVar8 - iVar2;
    iVar6 = piVar1[3];
    iVar3 = piVar1[1];
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(int *)(unaff_EBP + -0x14) = iVar6 - iVar3;
    iVar6 = (iVar2 + iVar8) / 2;
    *(int *)(unaff_EBP + -0x40) = iVar6;
    if (iVar2 < iVar8) {
      *(double *)(unaff_EBP + -0x48) = (double)*(int *)(unaff_EBP + 0x10);
      *(double *)(unaff_EBP + -0x50) = (double)*(int *)(unaff_EBP + -0x14);
      while( true ) {
        piStack_7c = (int *)(*(int *)(unaff_EBP + -0x10) - iVar6);
        iStack_80 = 0x424b86;
        uVar5 = FUN_0087a90a();
        *(undefined4 *)(unaff_EBP + 0x10) = uVar5;
        *(double *)(unaff_EBP + -0x58) =
             *(double *)(unaff_EBP + -0x50) *
             ((double)*(int *)(unaff_EBP + 0x10) / *(double *)(unaff_EBP + -0x48)) * _DAT_008e89d0;
        piStack_7c = (int *)0x424baa;
        uVar5 = __ftol();
        *(undefined4 *)(unaff_EBP + 0x10) = uVar5;
        *(double *)(unaff_EBP + -0x38) = (double)*(int *)(unaff_EBP + 0x10);
        bVar4 = (float10)*(int *)(unaff_EBP + 0x10) < (float10)piVar1[3] - extraout_ST0;
        while (bVar4) {
          piStack_7c = (int *)0xffffffff;
          iStack_80 = 0x424bd3;
          piVar7 = (int *)FUN_004251cf();
          piStack_7c = (int *)0x424bdd;
          FUN_0087a1b0();
          piStack_7c = (int *)0x0;
          iStack_80 = 0;
          puStack_88 = (undefined1 *)0x0;
          uStack_8c = *(undefined4 *)(unaff_EBP + -0x18);
          uStack_90 = 0x424beb;
          puStack_84 = &stack0xffffff88;
          puStack_88 = (undefined1 *)FUN_0042517f();
          uStack_8c = 0x424bf3;
          puStack_88 = (undefined1 *)FUN_00412335();
          *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_84;
          uStack_8c = 0x424bff;
          FUN_004033a1();
          puStack_88 = (undefined1 *)(unaff_EBP + -0x78);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          uStack_8c = 0x424c0e;
          FUN_0040263d();
          uStack_8c = 0x424c15;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          puStack_84 = (undefined1 *)0x424c20;
          uVar5 = FUN_004032b4();
          piStack_7c = (int *)0x0;
          iStack_80 = 0;
          puStack_84 = (undefined1 *)0x0;
          puStack_88 = (undefined1 *)0xa;
          *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
          uStack_8c = 0x424c2d;
          iVar8 = FUN_0042517f();
          puStack_88 = puStack_84;
          *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_88;
          uStack_8c = 0;
          uStack_90 = 0x424c41;
          puStack_84 = (undefined1 *)(iVar8 + -0x3ff9eb5c);
          FUN_00424e0a();
          uStack_8c = *(undefined4 *)(unaff_EBP + 0x10);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          uStack_90 = *(undefined4 *)(unaff_EBP + -0x10);
          *(undefined1 **)(unaff_EBP + 0x10) = auStack_94;
          uStack_98 = 0;
          uStack_9c = 0x424c57;
          FUN_00424dd7();
          uStack_98 = 0;
          uStack_9c = 2;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          uVar5 = FUN_0042517f();
          uStack_9c = uStack_98;
          *(undefined4 **)(unaff_EBP + -0x28) = &uStack_9c;
          uStack_98 = uVar5;
          FUN_004251a3(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          piVar9 = (int *)FUN_0042e5bf(unaff_EBP + -0x1c);
          iVar8 = *piVar9;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iVar2 = *piVar7;
          *(int *)(unaff_EBP + 0x10) = iVar2;
          if (iVar2 != iVar8) {
            *piVar7 = iVar8;
            piStack_7c = (int *)0x424c9d;
            FUN_00424ed4();
            piStack_7c = *(int **)(unaff_EBP + 0x10);
            if (piStack_7c != (int *)0x0) {
              iStack_80 = 0x424caa;
              (**(code **)(*piStack_7c + 8))();
            }
          }
          piStack_7c = *(int **)(unaff_EBP + -0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (piStack_7c != (int *)0x0) {
            iStack_80 = 0x424cbb;
            (**(code **)(*piStack_7c + 8))();
          }
          piStack_7c = (int *)(unaff_EBP + -0x78);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          iStack_80 = 0x424cc7;
          piStack_7c = (int *)FUN_00402bc3();
          if ((int)piStack_7c < 0) {
            iStack_80 = 0x424cd2;
            FUN_00878dfb();
          }
          piStack_7c = (int *)0x3;
          iStack_80 = 0;
          puStack_84 = (undefined1 *)0x424cdd;
          FUN_004031b7();
          iVar8 = *piVar7;
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (iVar8 == 0) {
            piStack_7c = (int *)0x80004003;
            iStack_80 = 0x424cef;
            FUN_00878dfb();
          }
          piStack_7c = (int *)(unaff_EBP + -0x68);
          iStack_80 = unaff_EBP + -0x20;
          puStack_84 = (undefined1 *)0x424cfe;
          piVar7 = (int *)FUN_00425067();
          iVar8 = *piVar7;
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (iVar8 == 0) {
            piStack_7c = (int *)0x80004003;
            iStack_80 = 0x424d12;
            FUN_00878dfb();
          }
          piStack_7c = (int *)0x424d19;
          uVar5 = FUN_0040e53d();
          *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
          piStack_7c = (int *)0x424d30;
          uVar5 = __ftol();
          *(undefined4 *)(unaff_EBP + 0x10) = uVar5;
          piStack_7c = *(int **)(unaff_EBP + -0x20);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (piStack_7c != (int *)0x0) {
            iStack_80 = 0x424d44;
            (**(code **)(*piStack_7c + 8))();
          }
          piStack_7c = (int *)(unaff_EBP + -0x68);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          iStack_80 = 0x424d50;
          piStack_7c = (int *)FUN_00402bc3();
          if ((int)piStack_7c < 0) {
            iStack_80 = 0x424d5b;
            FUN_00878dfb();
          }
          *(double *)(unaff_EBP + -0x38) = (double)*(int *)(unaff_EBP + 0x10);
          bVar4 = (double)*(int *)(unaff_EBP + 0x10) <
                  (double)piVar1[3] - *(double *)(unaff_EBP + -0x58);
        }
        piStack_7c = (int *)0x424d7a;
        uVar10 = FUN_004133f0();
        iVar8 = *(int *)(unaff_EBP + -0x10) + 0x23 + uVar10 % 0x14;
        iVar2 = piVar1[2];
        *(int *)(unaff_EBP + -0x10) = iVar8;
        if (iVar2 <= iVar8) break;
        iVar6 = *(int *)(unaff_EBP + -0x40);
      }
    }
    piStack_7c = *(int **)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_7c != (int *)0x0) {
      iStack_80 = 0x424da5;
      (**(code **)(*piStack_7c + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


