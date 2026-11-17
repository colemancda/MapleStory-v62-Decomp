/* FUN_0048afc0 - 0x0048afc0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0048afc0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int *extraout_ECX_02;
  int unaff_EBP;
  int iStack_84;
  int iStack_80;
  int *piStack_7c;
  undefined *puStack_78;
  int *piStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  
  FUN_00879bb8();
  iStack_48 = unaff_EBP + -0x2c;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iStack_4c = 0x48afe4;
  iVar2 = FUN_00455c59();
  iVar2 = *(int *)(iVar2 + 4);
  *(int *)(unaff_EBP + -0x24) = iVar2;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    iStack_48 = 0;
    iStack_4c = 0x48affa;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  iStack_48 = unaff_EBP + -0x10;
  iStack_4c = 0x48b008;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar4 = *(int *)(extraout_ECX + 0x590);
  *(undefined4 *)(extraout_ECX + 0x590) = 0xffffffff;
  if (-1 < iVar4) {
    iStack_4c = *(int *)(extraout_ECX + 0x58c);
    iVar2 = *(int *)(iVar2 + 0x3e3 + iStack_4c * 4);
    iVar5 = 0;
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + -4);
    }
    if (iVar4 < iVar5 + -1) {
      iStack_50 = unaff_EBP + -0x20;
      uStack_54 = 0x48b042;
      iStack_48 = iVar4;
      iVar2 = FUN_00458c4f();
      iVar2 = *(int *)(iVar2 + 4);
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        iStack_48 = 0;
        iStack_4c = 0x48b055;
        FUN_00449913();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0 || *(int *)(iVar2 + 0x1c) != 0)) {
        *(int *)(extraout_ECX + 0x590) = iVar4;
      }
    }
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iStack_48 = 0x80004003;
    iStack_4c = 0x48b07e;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iStack_48 = 0xffffff;
  iStack_4c = 0xd4;
  iStack_50 = 0xa0;
  uStack_54 = 0x34;
  uStack_58 = 0;
  piStack_60 = (int *)0x48b09d;
  piStack_5c = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar2 < 0) {
    piStack_60 = (int *)&DAT_00963cc8;
    iStack_6c = 0x48b0ad;
    iStack_68 = iVar2;
    piStack_64 = piVar1;
    FUN_00878e09();
  }
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x24) + 0x3e3 + *(int *)(extraout_ECX + 0x58c) * 4);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + -4);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(extraout_ECX + 0x588);
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
  iVar2 = extraout_ECX;
  do {
    iVar4 = *(int *)(iVar2 + 0x588) + 0xc;
    if (*(int *)(unaff_EBP + -0x1c) <= iVar4) {
      iVar4 = *(int *)(unaff_EBP + -0x1c);
    }
    if (iVar4 <= *(int *)(unaff_EBP + -0x18)) {
      piStack_60 = *(int **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_60 != (int *)0x0) {
        piStack_64 = (int *)0x48b3a7;
        (**(code **)(*piStack_60 + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    piStack_60 = *(int **)(unaff_EBP + -0x18);
    piStack_64 = *(int **)(iVar2 + 0x58c);
    iStack_68 = unaff_EBP + -0x34;
    iStack_6c = 0x48b106;
    iVar4 = FUN_00458c4f();
    piVar1 = *(int **)(iVar4 + 4);
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      piStack_60 = (int *)0x0;
      piStack_64 = (int *)0x48b119;
      FUN_00449913();
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
    }
    if (piVar1 != (int *)0x0) {
      piStack_60 = (int *)0x48b12d;
      iVar2 = FUN_0045e2eb();
      piStack_60 = (int *)(unaff_EBP + -0x44);
      piStack_64 = *(int **)(unaff_EBP + -0x18);
      iStack_68 = 0x48b13e;
      FUN_0048b4b9();
      piStack_60 = (int *)0x48b145;
      iVar4 = (**(code **)(*piVar1 + 0x10))();
      if (iVar4 == 3) {
        piStack_60 = (int *)0x0;
        piStack_64 = (int *)0x0;
        iStack_68 = 0;
        iStack_6c = 0x48b156;
        iStack_6c = FUN_0048b3b8();
        uStack_70 = 0;
        piStack_74 = (int *)0x0;
        puStack_78 = *(undefined **)(unaff_EBP + -0x38);
        piStack_7c = *(int **)(unaff_EBP + -0x44);
        *(int **)(unaff_EBP + -0x28) = &iStack_84;
        iStack_84 = extraout_ECX_01;
        iStack_80 = iVar2;
        FUN_0046fc23(unaff_EBP + -0x10);
      }
      else {
        piStack_60 = (int *)0x0;
        piStack_64 = (int *)0x0;
        iStack_68 = 0;
        iStack_6c = 0;
        uStack_70 = 0;
        piStack_74 = (int *)0x0;
        puStack_78 = *(undefined **)(unaff_EBP + -0x38);
        piStack_7c = *(int **)(unaff_EBP + -0x44);
        *(int **)(unaff_EBP + -0x28) = &iStack_84;
        iStack_84 = extraout_ECX_00;
        iStack_80 = iVar2;
        FUN_0046fc23(unaff_EBP + -0x10);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0048b97b();
      FUN_005558b0();
      iVar4 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x58c);
      if (((iVar4 == 2) || (iVar4 == 3)) || (iVar4 == 4)) {
LAB_0048b1cf:
        piStack_60 = (int *)0x48b1d6;
        iVar4 = (**(code **)(*piVar1 + 0x18))();
        piStack_60 = (int *)0x0;
        iStack_68 = *(int *)(unaff_EBP + -0x14) + 0x584;
        *(int ***)(unaff_EBP + -0x28) = &piStack_64;
        iStack_6c = 0x48b1ee;
        FUN_00424dbc();
        iStack_6c = *(int *)(unaff_EBP + -0x38) + -0xc;
        uStack_70 = *(undefined4 *)(unaff_EBP + -0x44);
        puStack_78 = (undefined *)(unaff_EBP + -0x10);
        *(int ***)(unaff_EBP + -0x28) = &piStack_74;
        piStack_7c = (int *)0x48b208;
        piStack_74 = extraout_ECX_02;
        iStack_68 = iVar4;
        FUN_0046fc23();
        puStack_78 = (undefined *)0x48b20d;
        FUN_007d3201();
      }
      else {
        piStack_64 = (int *)0x48b1bf;
        piStack_60 = (int *)iVar2;
        iVar4 = FUN_0048b567();
        if (iVar4 != 0) goto LAB_0048b1cf;
        piStack_64 = (int *)0x48b1ca;
        piStack_60 = (int *)iVar2;
        iVar4 = FUN_0048b8d9();
        if (iVar4 != 0) goto LAB_0048b1cf;
      }
      piStack_64 = (int *)0x48b21c;
      piStack_60 = (int *)iVar2;
      iVar2 = FUN_005540b6();
      if (iVar2 == 0) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_60 = (int *)0x80004003;
          piStack_64 = (int *)0x48b22f;
          FUN_00878dfb();
        }
        piVar1 = *(int **)(unaff_EBP + -0x10);
        piStack_60 = (int *)0x72363636;
        piStack_64 = (int *)0x20;
        iStack_68 = 0x20;
        iStack_6c = *(int *)(unaff_EBP + -0x40);
        uStack_70 = *(undefined4 *)(unaff_EBP + -0x44);
        puStack_78 = (undefined *)0x48b24b;
        piStack_74 = piVar1;
        iVar2 = (**(code **)(*piVar1 + 0x8c))();
        if (iVar2 < 0) {
          piStack_60 = (int *)&DAT_00963cc8;
          iStack_6c = 0x48b25b;
          iStack_68 = iVar2;
          piStack_64 = piVar1;
          FUN_00878e09();
        }
      }
      if (*(int *)(unaff_EBP + -0x18) == *(int *)(*(int *)(unaff_EBP + -0x14) + 0x590)) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_60 = (int *)0x80004003;
          piStack_64 = (int *)0x48b282;
          FUN_00878dfb();
        }
        piVar1 = *(int **)(unaff_EBP + -0x10);
        piStack_60 = (int *)0x401030cc;
        piStack_64 = (int *)0x20;
        iStack_68 = 0x20;
        iStack_6c = *(int *)(unaff_EBP + -0x40);
        uStack_70 = *(undefined4 *)(unaff_EBP + -0x44);
        puStack_78 = (undefined *)0x48b29b;
        piStack_74 = piVar1;
        iVar2 = (**(code **)(*piVar1 + 0x8c))();
        if (iVar2 < 0) {
          puStack_78 = &DAT_00963cc8;
          iStack_84 = 0x48b2ab;
          iStack_80 = iVar2;
          piStack_7c = piVar1;
          FUN_00878e09();
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          puStack_78 = (undefined *)0x80004003;
          piStack_7c = (int *)0x48b2bb;
          FUN_00878dfb();
        }
        piVar1 = *(int **)(unaff_EBP + -0x10);
        puStack_78 = (undefined *)0xaa1030cc;
        piStack_7c = (int *)0x2;
        iStack_80 = 0x20;
        iStack_84 = *(int *)(unaff_EBP + -0x40) + -1;
        iVar2 = (**(code **)(*piVar1 + 0x8c))(piVar1,*(undefined4 *)(unaff_EBP + -0x44));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar1 = *(int **)(unaff_EBP + -0x10);
        iVar2 = (**(code **)(*piVar1 + 0x8c))
                          (piVar1,*(undefined4 *)(unaff_EBP + -0x44),
                           *(int *)(unaff_EBP + -0x38) + -1,0x20,2,0xaa1030cc);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar1 = *(int **)(unaff_EBP + -0x10);
        iVar2 = (**(code **)(*piVar1 + 0x8c))
                          (piVar1,*(int *)(unaff_EBP + -0x44) + -1,
                           *(undefined4 *)(unaff_EBP + -0x40),2,0x20,0xaa1030cc);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar1 = *(int **)(unaff_EBP + -0x10);
        iVar2 = (**(code **)(*piVar1 + 0x8c))
                          (piVar1,*(int *)(unaff_EBP + -0x3c) + -1,
                           *(undefined4 *)(unaff_EBP + -0x40),2,0x20,0xaa1030cc);
        if (iVar2 < 0) {
          piStack_60 = (int *)&DAT_00963cc8;
          iStack_6c = 0x48b38b;
          iStack_68 = iVar2;
          piStack_64 = piVar1;
          FUN_00878e09();
        }
      }
      iVar2 = *(int *)(unaff_EBP + -0x14);
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
  } while( true );
}


