/* FUN_005a0637 - 0x005a0637 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a0637(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int iVar5;
  int unaff_EBP;
  int *piStack_80;
  int *piStack_7c;
  int *local_78;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  do {
    local_78 = (int *)0x5a0657;
    FUN_0087a1b0();
    local_78 = (int *)0x0;
    piStack_7c = (int *)0x0;
    piStack_80 = (int *)&stack0xffffff8c;
    uVar1 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x18));
    *(int ***)(unaff_EBP + -0x30) = &piStack_80;
    FUN_004033a1(uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = unaff_EBP + -0x44;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    piStack_80 = (int *)0x5a0698;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x24) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (iVar2 != 0) {
      local_78 = (int *)(unaff_EBP + -0x24);
      piStack_7c = (int *)0x5a06ae;
      local_78 = (int *)FUN_00404b30();
      if (((int)local_78 < 0) && (local_78 != (int *)0x80004002)) {
        piStack_7c = (int *)0x5a06bf;
        FUN_00878dfb();
      }
    }
    local_78 = (int *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_7c = (int *)0x5a06cc;
    piVar3 = (int *)FUN_00402bc3();
    piVar4 = local_78;
    if ((int)piVar3 < 0) {
      piStack_7c = (int *)0x5a06d7;
      local_78 = piVar3;
      FUN_00878dfb();
      piVar4 = extraout_ECX_00;
    }
    local_78 = (int *)0x0;
    piStack_7c = (int *)0x0;
    *(int ***)(unaff_EBP + -0x30) = &piStack_80;
    piStack_80 = piVar4;
    FUN_00679e4e(&piStack_80,0x5d8);
    iVar2 = unaff_EBP + -0x54;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_80 = (int *)0x5a0711;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x28) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar2 != 0) {
      local_78 = (int *)(unaff_EBP + -0x28);
      piStack_7c = (int *)0x5a0727;
      local_78 = (int *)FUN_00404b30();
      if (((int)local_78 < 0) && (local_78 != (int *)0x80004002)) {
        piStack_7c = (int *)0x5a0738;
        FUN_00878dfb();
      }
    }
    local_78 = (int *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_7c = (int *)0x5a0745;
    local_78 = (int *)FUN_00402bc3();
    if ((int)local_78 < 0) {
      piStack_7c = (int *)0x5a0750;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      local_78 = (int *)0x80004003;
      piStack_7c = (int *)0x5a075f;
      FUN_00878dfb();
    }
    local_78 = (int *)0x5a0767;
    iVar2 = FUN_0040cf4d();
    iVar5 = 0;
    *(int *)(unaff_EBP + -0x30) = iVar2;
    if (0 < iVar2) {
      do {
        local_78 = (int *)0x5a077c;
        FUN_0087a1b0();
        local_78 = (int *)0x0;
        piStack_7c = (int *)0x0;
        piStack_80 = (int *)&stack0xffffff8c;
        uVar1 = FUN_00412335(iVar5);
        *(int ***)(unaff_EBP + -0x34) = &piStack_80;
        FUN_004033a1(uVar1);
        iVar2 = unaff_EBP + -100;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_0040263d(iVar2);
        FUN_004048a4(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        piStack_80 = (int *)0x5a07b5;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x2c) = iVar2;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        if (iVar2 != 0) {
          local_78 = (int *)(unaff_EBP + -0x2c);
          piStack_7c = (int *)0x5a07cb;
          local_78 = (int *)FUN_00404b30();
          if (((int)local_78 < 0) && (local_78 != (int *)0x80004002)) {
            piStack_7c = (int *)0x5a07dc;
            FUN_00878dfb();
          }
        }
        local_78 = (int *)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        piStack_7c = (int *)0x5a07e9;
        piVar4 = (int *)FUN_00402bc3();
        piStack_7c = local_78;
        if ((int)piVar4 < 0) {
          piStack_7c = (int *)0x5a07f4;
          local_78 = piVar4;
          FUN_00878dfb();
          piStack_7c = extraout_ECX_01;
        }
        local_78 = (int *)0x0;
        *(int ***)(unaff_EBP + -0x34) = &piStack_7c;
        piStack_80 = (int *)0xb5f;
        FUN_00679e4e(&piStack_7c);
        piStack_80 = (int *)(unaff_EBP + -0x74);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_0040263d();
        piStack_7c = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        piStack_80 = (int *)0x5a082c;
        iVar2 = FUN_00412550();
        piStack_80 = (int *)(unaff_EBP + -0x74);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        local_78 = (int *)FUN_00402bc3();
        if ((int)local_78 < 0) {
          piStack_7c = (int *)0x5a0848;
          FUN_00878dfb();
        }
        if (iVar2 == 0) {
          local_78 = *(int **)(unaff_EBP + -0x10);
          piStack_7c = *(int **)(unaff_EBP + -0x10);
          *(int ***)(unaff_EBP + -0x34) = &local_78;
          if (piStack_7c != (int *)0x0) {
            piStack_80 = (int *)0x5a0864;
            (**(code **)(*piStack_7c + 4))();
          }
          piStack_7c = *(int **)(unaff_EBP + -0x18);
          piStack_80 = (int *)0x5a086f;
          FUN_005a08cb();
        }
        local_78 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (local_78 != (int *)0x0) {
          piStack_7c = (int *)0x5a0880;
          (**(code **)(*local_78 + 8))();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(unaff_EBP + -0x30));
    }
    local_78 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (local_78 != (int *)0x0) {
      piStack_7c = (int *)0x5a089b;
      (**(code **)(*local_78 + 8))();
    }
    local_78 = *(int **)(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (local_78 != (int *)0x0) {
      piStack_7c = (int *)0x5a08ac;
      (**(code **)(*local_78 + 8))();
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
  } while (*(int *)(unaff_EBP + -0x18) < 8);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


