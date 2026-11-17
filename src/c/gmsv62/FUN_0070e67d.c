/* FUN_0070e67d - 0x0070e67d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070e67d(void)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int unaff_EBP;
  int *piStack_c4;
  int *piStack_c0;
  
  FUN_00879bb8();
  piStack_c0 = *(int **)(unaff_EBP + 8);
  piStack_c4 = (int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x68) = extraout_ECX;
  FUN_004497f5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_c0 = (int *)0x0;
    *(int ***)(unaff_EBP + -0x18) = &piStack_c4;
    FUN_00679e4e(&piStack_c4,0x10c2);
    iVar4 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0040263d(iVar4);
    piStack_c4 = (int *)FUN_004048a4(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uVar1 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_c0 = (int *)FUN_00402bc3(unaff_EBP + -0x60);
    if ((int)piStack_c0 < 0) {
      piStack_c4 = (int *)0x70e708;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x38) != 0) {
      piStack_c0 = (int *)0x0;
      *(int ***)(unaff_EBP + -0x18) = &piStack_c4;
      FUN_00679e4e(&piStack_c4,0x65e);
      iVar4 = unaff_EBP + -0x60;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0040263d(iVar4);
      piStack_c4 = (int *)FUN_004048a4(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uVar1 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x40) = uVar1;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_c0 = (int *)FUN_00402bc3(unaff_EBP + -0x60);
      if ((int)piStack_c0 < 0) {
        piStack_c4 = (int *)0x70e761;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x40) != 0) {
        piStack_c0 = (int *)0x0;
        *(int ***)(unaff_EBP + -0x18) = &piStack_c4;
        FUN_00679e4e(&piStack_c4,0x10be);
        iVar4 = unaff_EBP + -0x60;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0040263d(iVar4);
        piStack_c4 = (int *)FUN_004048a4(iVar4);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        uVar1 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x3c) = uVar1;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        piStack_c0 = (int *)FUN_00402bc3(unaff_EBP + -0x60);
        if ((int)piStack_c0 < 0) {
          piStack_c4 = (int *)0x70e7ba;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x3c) != 0) {
          piStack_c0 = (int *)&DAT_0097812c;
          *(int ***)(unaff_EBP + -0x18) = &piStack_c4;
          FUN_00679e4e(&piStack_c4,0x10c1);
          iVar4 = unaff_EBP + -0x60;
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_0040263d(iVar4);
          piStack_c4 = (int *)FUN_004048a4(iVar4);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          piStack_c4 = (int *)FUN_004343c5();
          piStack_c0 = (int *)0xffffffff;
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          FUN_004184ca();
          piStack_c0 = (int *)(unaff_EBP + -0x60);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          piStack_c4 = (int *)0x70e815;
          piVar2 = (int *)FUN_00402bc3();
          piVar3 = piStack_c0;
          if ((int)piVar2 < 0) {
            piStack_c4 = (int *)0x70e820;
            piStack_c0 = piVar2;
            FUN_00878dfb();
            piVar3 = extraout_ECX_00;
          }
          if ((*(short **)(unaff_EBP + -0x1c) != (short *)0x0) &&
             (**(short **)(unaff_EBP + -0x1c) != 0)) {
            piStack_c0 = (int *)&DAT_0097812c;
            *(int ***)(unaff_EBP + -0x18) = &piStack_c4;
            piStack_c4 = piVar3;
            FUN_00679e4e(&piStack_c4,0x64b);
            iVar4 = unaff_EBP + -0x8c;
            *(undefined1 *)(unaff_EBP + -4) = 10;
            FUN_0040263d(iVar4);
            piStack_c4 = (int *)FUN_004048a4(iVar4);
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            piStack_c4 = (int *)FUN_004343c5();
            piStack_c0 = (int *)0xffffffff;
            *(undefined4 *)(unaff_EBP + -0x2c) = 0;
            FUN_00454081();
            piStack_c0 = (int *)(unaff_EBP + -0x8c);
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            piStack_c4 = (int *)0x70e89c;
            piVar3 = (int *)FUN_00402bc3();
            if ((int)piVar3 < 0) {
              piStack_c4 = (int *)0x70e8a7;
              piStack_c0 = piVar3;
              FUN_00878dfb();
              piStack_c0 = extraout_ECX_01;
            }
            *(undefined4 *)(unaff_EBP + -0x28) = 0;
            *(int ***)(unaff_EBP + -0x18) = &piStack_c0;
            piStack_c4 = (int *)0x10bf;
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            FUN_00679e4e(&piStack_c0);
            piStack_c4 = (int *)(unaff_EBP + -0xac);
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            FUN_0040263d();
            piStack_c0 = (int *)FUN_004048a4();
            piStack_c4 = (int *)(unaff_EBP + -100);
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            piStack_c0 = (int *)FUN_00412348();
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            piStack_c4 = (int *)0x70e8f8;
            FUN_00417232();
            piStack_c0 = *(int **)(unaff_EBP + -100);
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            if (piStack_c0 != (int *)0x0) {
              piStack_c4 = (int *)0x70e909;
              (**(code **)(*piStack_c0 + 8))();
            }
            piStack_c0 = (int *)(unaff_EBP + -0xac);
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            piStack_c4 = (int *)0x70e919;
            piVar3 = (int *)FUN_00402bc3();
            if ((int)piVar3 < 0) {
              piStack_c4 = (int *)0x70e924;
              piStack_c0 = piVar3;
              FUN_00878dfb();
              piStack_c0 = extraout_ECX_02;
            }
            if (*(int *)(unaff_EBP + -0x30) != 0) {
              *(undefined4 *)(unaff_EBP + -0x20) = 0;
              while( true ) {
                piStack_c0 = (int *)0x70e938;
                FUN_0087a1b0();
                piStack_c0 = (int *)&DAT_0097812c;
                piStack_c4 = (int *)&stack0xffffff44;
                uVar1 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x20));
                *(int ***)(unaff_EBP + -0x18) = &piStack_c4;
                FUN_004033a1(uVar1);
                iVar4 = unaff_EBP + -0x7c;
                *(undefined1 *)(unaff_EBP + -4) = 0x14;
                FUN_0040263d(iVar4);
                piStack_c4 = (int *)FUN_004048a4(iVar4);
                *(undefined1 *)(unaff_EBP + -4) = 0x17;
                piStack_c4 = (int *)FUN_004343c5();
                piStack_c0 = (int *)0xffffffff;
                *(undefined4 *)(unaff_EBP + -0x14) = 0;
                FUN_00454081();
                piStack_c0 = (int *)(unaff_EBP + -0x7c);
                *(undefined1 *)(unaff_EBP + -4) = 0x19;
                piStack_c4 = (int *)0x70e98e;
                piStack_c0 = (int *)FUN_00402bc3();
                if ((int)piStack_c0 < 0) {
                  piStack_c4 = (int *)0x70e999;
                  FUN_00878dfb();
                }
                if ((*(char **)(unaff_EBP + -0x14) == (char *)0x0) ||
                   (**(char **)(unaff_EBP + -0x14) == '\0')) break;
                piStack_c0 = (int *)(unaff_EBP + -0x14);
                piStack_c4 = (int *)0xffffffff;
                FUN_004655d4();
                piStack_c4 = (int *)0x70e9b9;
                FUN_00414f8b();
                *(undefined1 *)(unaff_EBP + -4) = 0x14;
                piStack_c0 = (int *)0x70e9c5;
                FUN_00414ebb();
                *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x14;
              piStack_c0 = (int *)0x70e9d9;
              FUN_00414ebb();
              piStack_c0 = extraout_ECX_03;
            }
            *(undefined4 *)(unaff_EBP + -0x34) = 0;
            *(int ***)(unaff_EBP + -0x18) = &piStack_c0;
            piStack_c4 = (int *)0x10c0;
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            FUN_00679e4e(&piStack_c0);
            piStack_c4 = (int *)(unaff_EBP + -0x7c);
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            FUN_0040263d();
            piStack_c0 = (int *)FUN_004048a4();
            piStack_c4 = (int *)(unaff_EBP + -0x20);
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            piStack_c0 = (int *)FUN_00412348();
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            piStack_c4 = (int *)0x70ea27;
            FUN_00417232();
            piStack_c0 = *(int **)(unaff_EBP + -0x20);
            *(undefined1 *)(unaff_EBP + -4) = 0x20;
            if (piStack_c0 != (int *)0x0) {
              piStack_c4 = (int *)0x70ea38;
              (**(code **)(*piStack_c0 + 8))();
            }
            piStack_c0 = (int *)(unaff_EBP + -0x7c);
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            piStack_c4 = (int *)0x70ea45;
            piStack_c0 = (int *)FUN_00402bc3();
            if ((int)piStack_c0 < 0) {
              piStack_c4 = (int *)0x70ea50;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x24) != 0) {
              piVar3 = (int *)0x0;
              while( true ) {
                piStack_c0 = (int *)0x70ea63;
                FUN_0087a1b0();
                piStack_c4 = piVar3;
                piStack_c0 = (int *)&stack0xffffff44;
                piStack_c4 = (int *)FUN_00412335();
                *(int ***)(unaff_EBP + -0x6c) = &piStack_c0;
                FUN_00402e8e();
                piStack_c4 = (int *)(unaff_EBP + -0x9c);
                *(undefined1 *)(unaff_EBP + -4) = 0x1f;
                FUN_0040263d();
                piStack_c0 = (int *)FUN_004048a4();
                piStack_c4 = (int *)(unaff_EBP + -0x18);
                *(undefined1 *)(unaff_EBP + -4) = 0x22;
                piStack_c0 = (int *)FUN_00412348();
                *(undefined1 *)(unaff_EBP + -4) = 0x23;
                piStack_c4 = (int *)0x70eab1;
                FUN_00417232();
                piStack_c0 = *(int **)(unaff_EBP + -0x18);
                *(undefined1 *)(unaff_EBP + -4) = 0x26;
                if (piStack_c0 != (int *)0x0) {
                  piStack_c4 = (int *)0x70eac2;
                  (**(code **)(*piStack_c0 + 8))();
                }
                piStack_c0 = (int *)(unaff_EBP + -0x9c);
                *(undefined1 *)(unaff_EBP + -4) = 0x25;
                piStack_c4 = (int *)0x70ead2;
                piStack_c0 = (int *)FUN_00402bc3();
                if ((int)piStack_c0 < 0) {
                  piStack_c4 = (int *)0x70eadd;
                  FUN_00878dfb();
                }
                if (*(int *)(unaff_EBP + -0x14) == 0) {
                  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
                  goto LAB_0070eb85;
                }
                piStack_c0 = (int *)0x70eaee;
                FUN_0087a1b0();
                piStack_c0 = (int *)0x0;
                piStack_c4 = (int *)&stack0xffffff44;
                uVar1 = FUN_00412335(0);
                *(int ***)(unaff_EBP + -0x6c) = &piStack_c4;
                FUN_004033a1(uVar1);
                iVar4 = unaff_EBP + -0xbc;
                *(undefined1 *)(unaff_EBP + -4) = 0x25;
                FUN_0040263d(iVar4);
                piStack_c4 = (int *)FUN_004048a4(iVar4);
                *(undefined1 *)(unaff_EBP + -4) = 0x28;
                iVar4 = FUN_00412550();
                *(undefined1 *)(unaff_EBP + -4) = 0x25;
                piStack_c0 = (int *)FUN_00402bc3(unaff_EBP + -0xbc);
                if ((int)piStack_c0 < 0) {
                  piStack_c4 = (int *)0x70eb47;
                  FUN_00878dfb();
                }
                if (iVar4 == 0) break;
                piStack_c0 = (int *)0xffffffff;
                piStack_c4 = (int *)0x70eb55;
                piVar2 = (int *)FUN_0045f1e3();
                *piVar2 = iVar4;
                piStack_c0 = *(int **)(unaff_EBP + -0x14);
                *(undefined1 *)(unaff_EBP + -4) = 0x1f;
                if (piStack_c0 != (int *)0x0) {
                  piStack_c4 = (int *)0x70eb68;
                  (**(code **)(*piStack_c0 + 8))();
                }
                piVar3 = (int *)((int)piVar3 + 1);
              }
              piStack_c0 = *(int **)(unaff_EBP + -0x14);
              *(undefined1 *)(unaff_EBP + -4) = 0x1f;
              if (piStack_c0 != (int *)0x0) {
                piStack_c4 = (int *)0x70eb7f;
                (**(code **)(*piStack_c0 + 8))();
              }
            }
LAB_0070eb85:
            uVar1 = *(undefined4 *)(unaff_EBP + 8);
            piStack_c0 = (int *)(unaff_EBP + -0x50);
            piStack_c4 = (int *)(unaff_EBP + 8);
            *(undefined4 *)(unaff_EBP + -0x50) = 0;
            *(undefined4 *)(unaff_EBP + -0x4c) = 0x96;
            *(undefined4 *)(unaff_EBP + 8) = uVar1;
            FUN_004cda45();
            piStack_c0 = (int *)0x5b4;
            piStack_c4 = (int *)0x70ebb7;
            iVar4 = FUN_004029b9();
            *(int *)(unaff_EBP + 8) = iVar4;
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            if (iVar4 == 0) {
              iVar4 = 0;
            }
            else {
              piStack_c0 = (int *)(unaff_EBP + -0x34);
              piStack_c4 = (int *)(unaff_EBP + -0x28);
              iVar4 = FUN_0070c61d(uVar1,*(undefined4 *)(unaff_EBP + -0x38),
                                   *(undefined4 *)(unaff_EBP + -0x40),
                                   *(undefined4 *)(unaff_EBP + -0x3c),unaff_EBP + -0x1c,
                                   unaff_EBP + -0x2c);
            }
            uVar5 = -(uint)(iVar4 != 0) & iVar4 + 8U;
            *(uint *)(unaff_EBP + -0x44) = -(uint)(uVar5 != 0) & uVar5 - 8;
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            piStack_c0 = (int *)0x70ec0a;
            FUN_0070eda5();
            piStack_c0 = (int *)0x0;
            piStack_c4 = (int *)0x0;
            *(undefined1 *)(unaff_EBP + -4) = 0x2a;
            FUN_0081420c(*(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),100,
                         100,10,1);
            piStack_c0 = (int *)(unaff_EBP + -0x48);
            piStack_c4 = (int *)(unaff_EBP + 8);
            *(undefined4 *)(unaff_EBP + 8) = uVar1;
            FUN_0070ee8c();
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            piStack_c0 = (int *)0x70ec45;
            FUN_0070edc2();
            piStack_c0 = *(int **)(unaff_EBP + -0x24);
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            if (piStack_c0 != (int *)0x0) {
              piStack_c4 = (int *)0x70ec56;
              (**(code **)(*piStack_c0 + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            piStack_c0 = (int *)0x70ec62;
            FUN_00445a30();
            piStack_c0 = *(int **)(unaff_EBP + -0x30);
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            if (piStack_c0 != (int *)0x0) {
              piStack_c4 = (int *)0x70ec73;
              (**(code **)(*piStack_c0 + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            piStack_c0 = (int *)0x70ec7f;
            FUN_0045f10c();
            *(undefined1 *)(unaff_EBP + -4) = 10;
            piStack_c0 = (int *)0x70ec8b;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0;
            piStack_c0 = (int *)0x70ec96;
            FUN_00402676();
            piStack_c0 = *(int **)(unaff_EBP + -0x10);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (piStack_c0 != (int *)0x0) {
              piStack_c4 = (int *)0x70eca7;
              (**(code **)(*piStack_c0 + 8))();
            }
            goto LAB_0070eca7;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          piStack_c0 = (int *)0x70e837;
          FUN_00402676();
        }
      }
    }
  }
  piStack_c0 = (int *)0x70e83f;
  FUN_004027eb();
LAB_0070eca7:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


