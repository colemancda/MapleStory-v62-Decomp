/* FUN_0053cbb5 - 0x0053cbb5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0053cbb5(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int iVar5;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int *extraout_ECX_02;
  int unaff_EBP;
  int iStack_80;
  int iStack_7c;
  int *piStack_78;
  undefined *puStack_74;
  int *piStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_48;
  int local_44;
  
  FUN_00879bb8();
  local_44 = unaff_EBP + -0x20;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  iStack_48 = 0x53cbd9;
  iVar2 = FUN_00455c59();
  iVar2 = *(int *)(iVar2 + 4);
  *(int *)(unaff_EBP + -0x24) = iVar2;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    local_44 = 0;
    iStack_48 = 0x53cbef;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  local_44 = unaff_EBP + -0x10;
  iStack_48 = 0x53cbfd;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = *(int *)(extraout_ECX + 0x570);
  *(undefined4 *)(extraout_ECX + 0x570) = 0xffffffff;
  if (-1 < iVar3) {
    iStack_48 = *(int *)(extraout_ECX + 0x56c);
    iVar2 = *(int *)(iVar2 + 0x3e3 + iStack_48 * 4);
    iVar5 = 0;
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + -4);
    }
    if (iVar3 < iVar5 + -1) {
      uStack_50 = 0x53cc37;
      local_44 = iVar3;
      iVar2 = FUN_00458c4f();
      iVar2 = *(int *)(iVar2 + 4);
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        local_44 = 0;
        iStack_48 = 0x53cc4a;
        FUN_00449913();
      }
      *(int **)(unaff_EBP + -0x28) = &iStack_48;
      local_44 = iVar2;
      if (iVar2 != 0) {
        uStack_50 = 0x53cc62;
        InterlockedIncrement((LONG *)(iVar2 + 4));
      }
      iVar2 = FUN_0052dfe5();
      if (iVar2 == 0) {
        *(int *)(extraout_ECX + 0x570) = iVar3;
      }
    }
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    local_44 = 0x80004003;
    iStack_48 = 0x53cc83;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  local_44 = 0xffffff;
  iStack_48 = 0xd4;
  uStack_50 = 0x34;
  uStack_54 = 0;
  piStack_5c = (int *)0x53cca2;
  piStack_58 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar2 < 0) {
    piStack_5c = (int *)&DAT_00963cc8;
    iStack_68 = 0x53ccb2;
    piStack_60 = piVar1;
    FUN_00878e09();
  }
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x24) + 0x3e3 + *(int *)(extraout_ECX + 0x56c) * 4);
  uVar4 = 0;
  if (iVar2 != 0) {
    uVar4 = *(undefined4 *)(iVar2 + -4);
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x568);
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
  iVar2 = extraout_ECX;
  while( true ) {
    iVar3 = *(int *)(iVar2 + 0x568) + 0x12;
    if (*(int *)(unaff_EBP + -0x1c) <= iVar3) {
      iVar3 = *(int *)(unaff_EBP + -0x1c);
    }
    if (iVar3 <= *(int *)(unaff_EBP + -0x14)) break;
    piStack_5c = *(int **)(unaff_EBP + -0x14);
    piStack_60 = *(int **)(iVar2 + 0x56c);
    iStack_68 = 0x53cd0b;
    iVar3 = FUN_00458c4f();
    piVar1 = *(int **)(iVar3 + 4);
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      piStack_5c = (int *)0x0;
      piStack_60 = (int *)0x53cd1e;
      FUN_00449913();
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    }
    if (piVar1 != (int *)0x0) {
      piStack_5c = (int *)0x53cd32;
      uVar4 = FUN_0045e2eb();
      *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
      piStack_5c = (int *)(unaff_EBP + -0x40);
      piStack_60 = *(int **)(unaff_EBP + -0x14);
      FUN_0053d0a0();
      piStack_5c = (int *)0x53cd4a;
      iVar3 = (**(code **)(*piVar1 + 0x10))();
      if (iVar3 == 3) {
        piStack_5c = (int *)0x0;
        piStack_60 = (int *)0x0;
        iStack_68 = 0x53cd5b;
        iStack_68 = FUN_0048b3b8();
        uStack_6c = 0;
        piStack_70 = (int *)0x0;
        puStack_74 = *(undefined **)(unaff_EBP + -0x34);
        piStack_78 = *(int **)(unaff_EBP + -0x40);
        iStack_7c = *(int *)(unaff_EBP + -0x28);
        *(int **)(unaff_EBP + -0x28) = &iStack_80;
        iStack_80 = extraout_ECX_01;
        FUN_0046fc23(unaff_EBP + -0x10);
      }
      else {
        piStack_5c = (int *)0x0;
        piStack_60 = (int *)0x0;
        iStack_68 = 0;
        uStack_6c = 0;
        piStack_70 = (int *)0x0;
        puStack_74 = *(undefined **)(unaff_EBP + -0x34);
        piStack_78 = *(int **)(unaff_EBP + -0x40);
        iStack_7c = *(int *)(unaff_EBP + -0x28);
        *(int **)(unaff_EBP + -0x28) = &iStack_80;
        iStack_80 = extraout_ECX_00;
        FUN_0046fc23(unaff_EBP + -0x10);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0048b97b();
      FUN_005558b0();
      iVar2 = *(int *)(iVar2 + 0x56c);
      if (((iVar2 == 2) || (iVar2 == 3)) || (iVar2 == 4)) {
        piStack_5c = (int *)0x53cdc6;
        (**(code **)(*piVar1 + 0x18))();
        piStack_5c = (int *)0x0;
        *(int ***)(unaff_EBP + -0x28) = &piStack_60;
        iStack_68 = 0x53cdde;
        FUN_00424dbc();
        iStack_68 = *(int *)(unaff_EBP + -0x34) + -0xc;
        uStack_6c = *(undefined4 *)(unaff_EBP + -0x40);
        puStack_74 = (undefined *)(unaff_EBP + -0x10);
        *(int ***)(unaff_EBP + -0x28) = &piStack_70;
        piStack_78 = (int *)0x53cdf8;
        piStack_70 = extraout_ECX_02;
        FUN_0046fc23();
        puStack_74 = (undefined *)0x53cdfd;
        FUN_007d3201();
      }
      *(int ***)(unaff_EBP + -0x28) = &piStack_60;
      iStack_68 = 0x53ce14;
      piStack_5c = piVar1;
      InterlockedIncrement(piVar1 + 1);
      iVar2 = FUN_0052dfe5();
      if (iVar2 != 0) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_5c = (int *)0x80004003;
          piStack_60 = (int *)0x53ce2f;
          FUN_00878dfb();
        }
        piVar1 = *(int **)(unaff_EBP + -0x10);
        piStack_5c = (int *)0x72363636;
        piStack_60 = (int *)0x20;
        iStack_68 = *(undefined4 *)(unaff_EBP + -0x3c);
        uStack_6c = *(undefined4 *)(unaff_EBP + -0x40);
        puStack_74 = (undefined *)0x53ce4b;
        piStack_70 = piVar1;
        iVar2 = (**(code **)(*piVar1 + 0x8c))();
        if (iVar2 < 0) {
          piStack_5c = (int *)&DAT_00963cc8;
          iStack_68 = 0x53ce5b;
          piStack_60 = piVar1;
          FUN_00878e09();
        }
      }
      if (*(int *)(unaff_EBP + -0x14) == *(int *)(*(int *)(unaff_EBP + -0x18) + 0x570)) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_5c = (int *)0x80004003;
          piStack_60 = (int *)0x53ce82;
          FUN_00878dfb();
        }
        piVar1 = *(int **)(unaff_EBP + -0x10);
        piStack_5c = (int *)0x401030cc;
        piStack_60 = (int *)0x20;
        iStack_68 = *(undefined4 *)(unaff_EBP + -0x3c);
        uStack_6c = *(undefined4 *)(unaff_EBP + -0x40);
        puStack_74 = (undefined *)0x53ce9b;
        piStack_70 = piVar1;
        iVar2 = (**(code **)(*piVar1 + 0x8c))();
        if (iVar2 < 0) {
          puStack_74 = &DAT_00963cc8;
          iStack_80 = 0x53ceab;
          iStack_7c = iVar2;
          piStack_78 = piVar1;
          FUN_00878e09();
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          puStack_74 = (undefined *)0x80004003;
          piStack_78 = (int *)0x53cebb;
          FUN_00878dfb();
        }
        piVar1 = *(int **)(unaff_EBP + -0x10);
        puStack_74 = (undefined *)0xaa1030cc;
        piStack_78 = (int *)0x2;
        iStack_7c = 0x20;
        iStack_80 = *(int *)(unaff_EBP + -0x3c) + -1;
        iVar2 = (**(code **)(*piVar1 + 0x8c))(piVar1,*(undefined4 *)(unaff_EBP + -0x40));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar1 = *(int **)(unaff_EBP + -0x10);
        iVar2 = (**(code **)(*piVar1 + 0x8c))
                          (piVar1,*(undefined4 *)(unaff_EBP + -0x40),
                           *(int *)(unaff_EBP + -0x34) + -1,0x20,2,0xaa1030cc);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar1 = *(int **)(unaff_EBP + -0x10);
        iVar2 = (**(code **)(*piVar1 + 0x8c))
                          (piVar1,*(int *)(unaff_EBP + -0x40) + -1,
                           *(undefined4 *)(unaff_EBP + -0x3c),2,0x20,0xaa1030cc);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar1 = *(int **)(unaff_EBP + -0x10);
        iVar2 = (**(code **)(*piVar1 + 0x8c))
                          (piVar1,*(int *)(unaff_EBP + -0x38) + -1,
                           *(undefined4 *)(unaff_EBP + -0x3c),2,0x20,0xaa1030cc);
        if (iVar2 < 0) {
          piStack_5c = (int *)&DAT_00963cc8;
          iStack_68 = 0x53cf8b;
          piStack_60 = piVar1;
          FUN_00878e09();
        }
      }
      iVar2 = *(int *)(unaff_EBP + -0x18);
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
  }
  piStack_5c = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_5c != (int *)0x0) {
    piStack_60 = (int *)0x53cfa7;
    (**(code **)(*piStack_5c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


