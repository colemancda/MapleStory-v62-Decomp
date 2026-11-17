/* FUN_005a9ab5 - 0x005a9ab5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a9ab5(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_005a9e0f(0);
  *(undefined4 *)(unaff_EBP + -0x70) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x88) = &PTR_FUN_008ec788;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00517916(*(undefined4 *)(unaff_EBP + 8));
  if (*(int *)(unaff_EBP + -0x78) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_005aa5a4(unaff_EBP + -0x70,unaff_EBP + -0x28);
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      iVar2 = FUN_007d1e08();
      iVar2 = iVar2 + *(int *)(unaff_EBP + -0x6c);
      puVar3 = *(undefined4 **)(*(int *)(unaff_EBP + -0x24) + 0xc);
      *(int *)(unaff_EBP + -0x18) = iVar2;
      if (puVar3 != (undefined4 *)0x0) {
        while( true ) {
          iVar1 = *(int *)((-(uint)(puVar3 != (undefined4 *)0x0) & (uint)(puVar3 + -4)) + 4);
          uVar4 = *puVar3;
          *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
          *(undefined4 *)(unaff_EBP + 8) = uVar4;
          FUN_00424ed4();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_00878dfb(0x80004003);
          }
          FUN_005a9e92();
          uVar4 = __ftol();
          *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          FUN_004031b7(iVar2,3);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = (int *)FUN_004113e5(unaff_EBP + -0x20);
          iVar2 = *piVar5;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          if (iVar2 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = (int *)*piVar5;
          iVar2 = (**(code **)(*piVar5 + 0x90))
                            (piVar5,0xff,*(undefined4 *)(unaff_EBP + -0x14),
                             *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                             *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                             *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100),
                             *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,piVar5,&DAT_00963de8);
          }
          FUN_004125d9();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x68);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          FUN_00412600();
          if (*(int *)(unaff_EBP + -0x10) == 0) break;
          puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
          iVar2 = *(int *)(unaff_EBP + -0x18);
        }
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    if (*(int *)(unaff_EBP + -0x78) != 1) goto LAB_005a9de5;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_005aa5a4(unaff_EBP + -0x70,unaff_EBP + -0x28);
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      iVar2 = FUN_007d1e08();
      iVar2 = iVar2 + *(int *)(unaff_EBP + -0x6c);
      puVar3 = *(undefined4 **)(*(int *)(unaff_EBP + -0x24) + 0xc);
      *(int *)(unaff_EBP + -0x14) = iVar2;
      if (puVar3 != (undefined4 *)0x0) {
        while( true ) {
          iVar1 = *(int *)((-(uint)(puVar3 != (undefined4 *)0x0) & (uint)(puVar3 + -4)) + 4);
          uVar4 = *puVar3;
          *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
          *(undefined4 *)(unaff_EBP + 8) = uVar4;
          FUN_00424ed4();
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_00878dfb(0x80004003);
          }
          FUN_005a9e92();
          uVar4 = __ftol();
          *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_004031b7(iVar2,3);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = (int *)FUN_004113e5(unaff_EBP + -0x1c);
          iVar2 = *piVar5;
          *(undefined1 *)(unaff_EBP + -4) = 10;
          if (iVar2 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = (int *)*piVar5;
          iVar2 = (**(code **)(*piVar5 + 0x90))
                            (piVar5,0,*(undefined4 *)(unaff_EBP + -0x18),
                             *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                             *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                             *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                             *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,piVar5,&DAT_00963de8);
          }
          FUN_004125d9();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          FUN_00412600();
          if (*(int *)(unaff_EBP + -0x10) == 0) break;
          puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
          iVar2 = *(int *)(unaff_EBP + -0x14);
        }
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  FUN_005aa080();
LAB_005a9de5:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x88) = &PTR_FUN_008ec788;
  FUN_005a9e40();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


