/* FUN_005a94ac - 0x005a94ac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a94ac(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  uint uVar4;
  int unaff_EBP;
  int *piVar5;
  uint uVar6;
  int iStack_d4;
  int *piStack_d0;
  int *piStack_cc;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x90);
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  if (iVar2 == 0) {
LAB_005a9927:
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  do {
    iVar3 = *(int *)((-(uint)(iVar2 != 0) & iVar2 - 0x10U) + 4);
    uVar1 = *(undefined4 *)(iVar2 + 4);
    *(uint *)(unaff_EBP + -0x28) = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
    piStack_cc = (int *)0x5a9503;
    FUN_005aa111();
    piStack_cc = (int *)0x3;
    piStack_d0 = (int *)0x0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_d4 = 0x5a9511;
    FUN_004031b7();
    iVar2 = **(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      piStack_cc = (int *)0x80004003;
      piStack_d0 = (int *)0x5a9529;
      FUN_00878dfb();
    }
    piStack_cc = (int *)(unaff_EBP + -0x58);
    piStack_d0 = (int *)(unaff_EBP + -0x1c);
    iStack_d4 = 0x5a9538;
    FUN_00425067();
    piStack_cc = (int *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_d0 = (int *)0x5a9545;
    piStack_cc = (int *)FUN_00402bc3();
    if ((int)piStack_cc < 0) {
      piStack_d0 = (int *)0x5a9550;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      piStack_cc = (int *)0x5a955d;
      FUN_004125e6();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_cc = (int *)0x5a9569;
      FUN_005aa12e();
    }
    else {
      piStack_cc = &DAT_00980690;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      piStack_d0 = (int *)0x5a9582;
      FUN_00403191();
      piStack_cc = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_d0 = (int *)0x5a958f;
      FUN_00403191();
      iVar2 = *(int *)(unaff_EBP + -0x14);
      iVar3 = *(int *)(iVar2 + 4);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (iVar3 == 0) {
        piStack_cc = (int *)0x80004003;
        piStack_d0 = (int *)0x5a95a4;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar2 + 4);
      if (*(int *)(*(int *)(unaff_EBP + -0x14) + 4) == 0) {
        piStack_cc = (int *)0x80004003;
        piStack_d0 = (int *)0x5a95ba;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(unaff_EBP + -0x14);
      if (*(int *)(iVar2 + 8) == 0) {
        piStack_cc = (int *)0x80004003;
        piStack_d0 = (int *)0x5a95d1;
        FUN_00878dfb();
      }
      piVar5 = *(int **)(iVar2 + 8);
      piStack_cc = (int *)0x5a95db;
      uVar1 = FUN_0040e53d();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
      piStack_cc = (int *)0x5a95e5;
      uVar1 = FUN_0040e48b();
      iStack_d4 = *(int *)(unaff_EBP + -0x84);
      piStack_d0 = *(int **)(unaff_EBP + -0x80);
      piStack_cc = *(int **)(unaff_EBP + -0x7c);
      iVar2 = (**(code **)(*piVar5 + 0x2c))
                        (piVar5,uVar1,*(undefined4 *)(unaff_EBP + -0x10),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x88));
      if (iVar2 < 0) {
        piStack_cc = (int *)&DAT_00963cc8;
        iStack_d4 = iVar2;
        piStack_d0 = piVar5;
        FUN_00878e09();
      }
      piStack_cc = (int *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_d0 = (int *)0x5a9627;
      piStack_cc = (int *)FUN_00402bc3();
      if ((int)piStack_cc < 0) {
        piStack_d0 = (int *)0x5a9632;
        FUN_00878dfb();
      }
      piStack_cc = (int *)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_d0 = (int *)0x5a9642;
      piStack_cc = (int *)FUN_00402bc3();
      if ((int)piStack_cc < 0) {
        piStack_d0 = (int *)0x5a964d;
        FUN_00878dfb();
      }
      uVar6 = *(uint *)(DAT_00978140 + 0x30);
      while (uVar6 != 0) {
        iVar2 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
        uVar4 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
        iVar2 = *(int *)(*(int *)(uVar6 + 4) + 0x10);
        piStack_cc = (int *)0x1;
        piStack_d0 = (int *)(unaff_EBP + -0x98);
        iStack_d4 = 0x5a9693;
        FUN_0043f3d6();
        piStack_cc = (int *)0x5a969a;
        iVar3 = FUN_005a9936();
        uVar6 = uVar4;
        if (iVar3 == 0) {
          piStack_cc = (int *)(*(int *)(unaff_EBP + -0x14) + 0x10);
          piStack_d0 = (int *)(unaff_EBP + -0x98);
          iStack_d4 = unaff_EBP + -0xb8;
          iVar3 = (*DAT_0097b5a0)();
          if (iVar3 != 0) {
            piStack_cc = (int *)(*(int *)(unaff_EBP + -0x14) + 0x10);
            piStack_d0 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x78U);
            iStack_d4 = 0x5a96d3;
            iVar2 = FUN_005a9f7a();
            *(int **)(unaff_EBP + -0x10) = &iStack_d4;
            FUN_0046fc23(iVar2 + 8);
            FUN_005a8930();
            *(undefined4 *)(unaff_EBP + -0x20) = 1;
          }
        }
      }
      iVar2 = *(int *)(DAT_00978140 + 8);
      piStack_cc = (int *)0x1;
      piStack_d0 = (int *)(unaff_EBP - 0xa8);
      iStack_d4 = 0x5a9713;
      FUN_0043f3d6();
      piStack_cc = (int *)0x5a971a;
      iVar3 = FUN_005a9936();
      if (iVar3 == 0) {
        piStack_cc = (int *)(*(int *)(unaff_EBP + -0x14) + 0x10);
        piStack_d0 = (int *)(unaff_EBP - 0xa8);
        iStack_d4 = unaff_EBP + -200;
        iVar3 = (*DAT_0097b5a0)();
        if (iVar3 != 0) {
          piStack_cc = (int *)(*(int *)(unaff_EBP + -0x14) + 0x10);
          piStack_d0 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x78U);
          iStack_d4 = 0x5a9753;
          iVar2 = FUN_005a9f7a();
          *(int **)(unaff_EBP + -0x10) = &iStack_d4;
          iStack_d4 = extraout_ECX_00;
          FUN_0046fc23(iVar2 + 8);
          FUN_005a8930();
          *(undefined4 *)(unaff_EBP + -0x20) = 1;
        }
      }
      if ((*(int *)(*(int *)(unaff_EBP + -0x14) + 0x24) == 0) && (*(int *)(unaff_EBP + -0x20) == 0))
      {
LAB_005a98ec:
        *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x24) = 0;
      }
      else {
        piStack_cc = (int *)0x3;
        piStack_d0 = (int *)0xffffffff;
        iStack_d4 = 0x5a978c;
        FUN_004031b7();
        uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4);
        piVar5 = *(int **)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (piVar5 == (int *)0x0) {
          piStack_cc = (int *)0x80004003;
          piStack_d0 = (int *)0x5a97a7;
          FUN_00878dfb();
          piVar5 = *(int **)(unaff_EBP + -0x1c);
        }
        iVar2 = *piVar5;
        iStack_d4 = *(int *)(unaff_EBP + -0x74);
        piStack_d0 = *(int **)(unaff_EBP + -0x70);
        piStack_cc = *(int **)(unaff_EBP + -0x6c);
        *(int **)(unaff_EBP + -0x10) = piVar5;
        iVar2 = (**(code **)(iVar2 + 0x80))(piVar5,0,0,uVar1,*(undefined4 *)(unaff_EBP + -0x78));
        if (iVar2 < 0) {
          piStack_cc = (int *)&DAT_00963cc8;
          piStack_d0 = *(int **)(unaff_EBP + -0x10);
          iStack_d4 = iVar2;
          FUN_00878e09();
        }
        piStack_cc = (int *)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        piStack_d0 = (int *)0x5a97e6;
        piStack_cc = (int *)FUN_00402bc3();
        if ((int)piStack_cc < 0) {
          piStack_d0 = (int *)0x5a97f1;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x20) == 0) goto LAB_005a98ec;
        piStack_cc = (int *)0x3;
        piStack_d0 = (int *)0xfffffffe;
        iStack_d4 = 0x5a9806;
        FUN_004031b7();
        uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc);
        piVar5 = (int *)(*(int *)(unaff_EBP + -0x14) + 8);
        iVar2 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
        if (iVar2 == 0) {
          piStack_cc = (int *)0x80004003;
          piStack_d0 = (int *)0x5a9824;
          FUN_00878dfb();
        }
        piVar5 = (int *)*piVar5;
        iStack_d4 = *(int *)(unaff_EBP + -100);
        piStack_d0 = *(int **)(unaff_EBP + -0x60);
        piStack_cc = *(int **)(unaff_EBP + -0x5c);
        iVar2 = (**(code **)(*piVar5 + 0x80))
                          (piVar5,0,0,*(undefined4 *)(unaff_EBP + -0x10),
                           *(undefined4 *)(unaff_EBP + -0x68));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar5,&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x68);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        FUN_004031b7(*(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x20),3);
        uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 8);
        piVar5 = *(int **)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (piVar5 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar5 = *(int **)(unaff_EBP + -0x1c);
        }
        iVar2 = *piVar5;
        *(int **)(unaff_EBP + -0x10) = piVar5;
        iVar2 = (**(code **)(iVar2 + 0x80))
                          (piVar5,0,0,uVar1,*(undefined4 *)(unaff_EBP + -0x48),
                           *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                           *(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar2 < 0) {
          piStack_cc = (int *)&DAT_00963cc8;
          piStack_d0 = *(int **)(unaff_EBP + -0x10);
          iStack_d4 = iVar2;
          FUN_00878e09();
        }
        piStack_cc = (int *)(unaff_EBP + -0x48);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        piStack_d0 = (int *)0x5a98d5;
        piStack_cc = (int *)FUN_00402bc3();
        if ((int)piStack_cc < 0) {
          piStack_d0 = (int *)0x5a98e0;
          FUN_00878dfb();
        }
        *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x24) = 1;
      }
      piStack_cc = *(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_cc != (int *)0x0) {
        piStack_d0 = (int *)0x5a9904;
        (**(code **)(*piStack_cc + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        piStack_cc = (int *)0x0;
        piStack_d0 = (int *)0x5a9918;
        FUN_005aa185();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
    }
    if (*(int *)(unaff_EBP + -0x28) == 0) goto LAB_005a9927;
    iVar2 = *(int *)(unaff_EBP + -0x28);
  } while( true );
}


