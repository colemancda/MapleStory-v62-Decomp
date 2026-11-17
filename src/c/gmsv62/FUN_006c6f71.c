/* FUN_006c6f71 - 0x006c6f71 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c6f71(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int *piVar4;
  int unaff_EBP;
  int iStack_a4;
  int iStack_a0;
  int *piStack_9c;
  
  FUN_00879bb8();
  piStack_9c = (int *)0x3;
  iStack_a0 = 0;
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX;
  iStack_a4 = 0x6c6f99;
  FUN_004031b7();
  iVar3 = *(int *)(extraout_ECX + 0xb84);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    piStack_9c = (int *)0x80004003;
    iStack_a0 = 0x6c6fb4;
    FUN_00878dfb();
  }
  piStack_9c = (int *)(unaff_EBP + -0x88);
  iStack_a0 = unaff_EBP + -0x10;
  iStack_a4 = 0x6c6fc6;
  FUN_00425067();
  piStack_9c = (int *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_a0 = 0x6c6fd6;
  piStack_9c = (int *)FUN_00402bc3();
  if ((int)piStack_9c < 0) {
    iStack_a0 = 0x6c6fe1;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  do {
    piStack_9c = (int *)(unaff_EBP + -0x24);
    iStack_a0 = unaff_EBP + -0x14;
    iStack_a4 = *(int *)(unaff_EBP + -0x18);
    FUN_006c831e();
    if ((*(int *)(unaff_EBP + -0x14) != 0) || (*(int *)(unaff_EBP + -0x24) != 0)) {
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      piStack_9c = (int *)0x951;
      iStack_a0 = unaff_EBP + -0x34;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_a4 = 0x6c7023;
      puVar1 = (undefined4 *)FUN_00679d22();
      iStack_a0 = *puVar1;
      piStack_9c = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_a4 = unaff_EBP + -0x28;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int *)(unaff_EBP + -0x34) != 0) {
        piStack_9c = (int *)(*(int *)(unaff_EBP + -0x34) + -0xc);
        iStack_a0 = 0x6c704d;
        FUN_00434e38();
      }
      piStack_9c = (int *)0x0;
      iStack_a0 = 0;
      iStack_a4 = -1;
      (*DAT_0097b4c8)(0,0,*(undefined4 *)(unaff_EBP + -0x28));
      piStack_9c = (int *)0x6c706a;
      FUN_0087a1b0();
      piStack_9c = (int *)0x0;
      iStack_a0 = 0;
      iStack_a4 = -1;
      uVar2 = FUN_00449713(&stack0xffffff68);
      uVar2 = FUN_00456ad5(uVar2);
      *(int **)(unaff_EBP + -0x20) = &iStack_a4;
      FUN_004033a1(uVar2);
      iVar3 = unaff_EBP + -0x98;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_0040263d(iVar3);
      FUN_004048a4(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_a4 = 0x6c70b4;
      iVar3 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x38) = iVar3;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      if (iVar3 != 0) {
        piStack_9c = (int *)(unaff_EBP + -0x38);
        iStack_a0 = 0x6c70ca;
        piStack_9c = (int *)FUN_0041a581();
        if (((int)piStack_9c < 0) && (piStack_9c != (int *)0x80004002)) {
          iStack_a0 = 0x6c70db;
          FUN_00878dfb();
        }
      }
      piStack_9c = (int *)(unaff_EBP + -0x98);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_a0 = 0x6c70eb;
      piStack_9c = (int *)FUN_00402bc3();
      if ((int)piStack_9c < 0) {
        iStack_a0 = 0x6c70f6;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        piStack_9c = (int *)0x6c7103;
        FUN_004125e6();
      }
      else {
        piStack_9c = (int *)0x3;
        iStack_a0 = 0xff;
        iStack_a4 = 0x6c7117;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (*(int *)(unaff_EBP + -0x18) == 0x2a) {
          iVar3 = *(int *)(unaff_EBP + -0x14) + 2;
        }
        else {
          iVar3 = *(int *)(unaff_EBP + -0x14);
          if (*(int *)(unaff_EBP + -0x18) != 0x39) {
            iVar3 = iVar3 + 4;
          }
        }
        piVar4 = *(int **)(unaff_EBP + -0x10);
        *(int *)(unaff_EBP + -0x30) = iVar3;
        if (piVar4 == (int *)0x0) {
          piStack_9c = (int *)0x80004003;
          iStack_a0 = 0x6c7149;
          FUN_00878dfb();
          piVar4 = *(int **)(unaff_EBP + -0x10);
        }
        iVar3 = *piVar4;
        iStack_a4 = *(int *)(unaff_EBP + -100);
        iStack_a0 = *(undefined4 *)(unaff_EBP + -0x60);
        *(int **)(unaff_EBP + -0x20) = piVar4;
        piStack_9c = *(int **)(unaff_EBP + -0x5c);
        iVar3 = (**(code **)(iVar3 + 0x80))
                          (piVar4,*(undefined4 *)(unaff_EBP + -0x30),*(int *)(unaff_EBP + -0x24) + 4
                           ,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x68));
        if (iVar3 < 0) {
          piStack_9c = (int *)&DAT_00963cc8;
          iStack_a0 = *(undefined4 *)(unaff_EBP + -0x20);
          iStack_a4 = iVar3;
          FUN_00878e09();
        }
        piStack_9c = (int *)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iStack_a0 = 0x6c7190;
        piStack_9c = (int *)FUN_00402bc3();
        if ((int)piStack_9c < 0) {
          iStack_a0 = 0x6c719b;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x18) == 0x1d) {
          piStack_9c = (int *)(unaff_EBP + -0x24);
          iStack_a0 = unaff_EBP + -0x14;
          iStack_a4 = 0x59;
          FUN_006c831e();
          piStack_9c = (int *)0x3;
          iStack_a0 = 0xff;
          iStack_a4 = 0x6c72db;
          FUN_004031b7();
          piVar4 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          if (piVar4 == (int *)0x0) {
            piStack_9c = (int *)0x80004003;
            iStack_a0 = 0x6c72f0;
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iStack_a4 = *(int *)(unaff_EBP + -0x74);
          iStack_a0 = *(undefined4 *)(unaff_EBP + -0x70);
          *(int **)(unaff_EBP + -0x20) = piVar4;
          piStack_9c = *(int **)(unaff_EBP + -0x6c);
          iVar3 = (**(code **)(*piVar4 + 0x80))
                            (*(undefined4 *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + -0x14) + 4,
                             *(int *)(unaff_EBP + -0x24) + 4,*(undefined4 *)(unaff_EBP + -0x1c),
                             *(undefined4 *)(unaff_EBP + -0x78));
          if (iVar3 < 0) {
            piStack_9c = (int *)&DAT_00963cc8;
            iStack_a0 = *(undefined4 *)(unaff_EBP + -0x20);
            iStack_a4 = iVar3;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 8;
          piStack_9c = (int *)(unaff_EBP + -0x78);
LAB_006c7337:
          iStack_a0 = 0x6c733d;
          piStack_9c = (int *)FUN_00402bc3();
          if ((int)piStack_9c < 0) {
            iStack_a0 = 0x6c7348;
            FUN_00878dfb();
          }
        }
        else {
          if (*(int *)(unaff_EBP + -0x18) == 0x2a) {
            piStack_9c = (int *)(unaff_EBP + -0x24);
            iStack_a0 = unaff_EBP + -0x14;
            iStack_a4 = 0x36;
            FUN_006c831e();
            piStack_9c = (int *)0x3;
            iStack_a0 = 0xff;
            iStack_a4 = 0x6c725c;
            FUN_004031b7();
            piVar4 = *(int **)(unaff_EBP + -0x10);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            if (piVar4 == (int *)0x0) {
              piStack_9c = (int *)0x80004003;
              iStack_a0 = 0x6c7271;
              FUN_00878dfb();
              piVar4 = *(int **)(unaff_EBP + -0x10);
            }
            iStack_a4 = *(int *)(unaff_EBP + -0x54);
            iStack_a0 = *(undefined4 *)(unaff_EBP + -0x50);
            *(int **)(unaff_EBP + -0x20) = piVar4;
            piStack_9c = *(int **)(unaff_EBP + -0x4c);
            iVar3 = (**(code **)(*piVar4 + 0x80))
                              (*(undefined4 *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + -0x14) + 2,
                               *(int *)(unaff_EBP + -0x24) + 4,*(undefined4 *)(unaff_EBP + -0x1c),
                               *(undefined4 *)(unaff_EBP + -0x58));
            if (iVar3 < 0) {
              piStack_9c = (int *)&DAT_00963cc8;
              iStack_a0 = *(undefined4 *)(unaff_EBP + -0x20);
              iStack_a4 = iVar3;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 8;
            piStack_9c = (int *)(unaff_EBP + -0x58);
            goto LAB_006c7337;
          }
          if (*(int *)(unaff_EBP + -0x18) == 0x38) {
            piStack_9c = (int *)(unaff_EBP + -0x24);
            iStack_a0 = unaff_EBP + -0x14;
            iStack_a4 = 0x5a;
            FUN_006c831e();
            piStack_9c = (int *)0x3;
            iStack_a0 = 0xff;
            iStack_a4 = 0x6c71da;
            FUN_004031b7();
            piVar4 = *(int **)(unaff_EBP + -0x10);
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            if (piVar4 == (int *)0x0) {
              piStack_9c = (int *)0x80004003;
              iStack_a0 = 0x6c71ef;
              FUN_00878dfb();
              piVar4 = *(int **)(unaff_EBP + -0x10);
            }
            iStack_a4 = *(int *)(unaff_EBP + -0x44);
            iStack_a0 = *(undefined4 *)(unaff_EBP + -0x40);
            *(int **)(unaff_EBP + -0x20) = piVar4;
            piStack_9c = *(int **)(unaff_EBP + -0x3c);
            iVar3 = (**(code **)(*piVar4 + 0x80))
                              (*(undefined4 *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + -0x14) + 4,
                               *(int *)(unaff_EBP + -0x24) + 4,*(undefined4 *)(unaff_EBP + -0x1c),
                               *(undefined4 *)(unaff_EBP + -0x48));
            if (iVar3 < 0) {
              piStack_9c = (int *)&DAT_00963cc8;
              iStack_a0 = *(undefined4 *)(unaff_EBP + -0x20);
              iStack_a4 = iVar3;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 8;
            piStack_9c = (int *)(unaff_EBP + -0x48);
            goto LAB_006c7337;
          }
        }
        piStack_9c = *(int **)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (piStack_9c != (int *)0x0) {
          iStack_a0 = 0x6c7359;
          (**(code **)(*piStack_9c + 8))();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        piStack_9c = (int *)(*(int *)(unaff_EBP + -0x28) + -0xc);
        iStack_a0 = 0x6c736d;
        FUN_00434e38();
      }
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    if (0x58 < *(int *)(unaff_EBP + -0x18)) {
      piStack_9c = *(int **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_9c != (int *)0x0) {
        iStack_a0 = 0x6c738c;
        (**(code **)(*piStack_9c + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}


