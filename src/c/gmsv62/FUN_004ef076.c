/* FUN_004ef076 - 0x004ef076 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ef076(void)

{
  short sVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  short *psVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  piStack_9c = (int *)0x4ef096;
  uVar4 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x2c) = uVar4 & 0xff;
  piStack_9c = (int *)0x4ef0a4;
  bVar3 = FUN_0042452b();
  piStack_9c = (int *)0x4ef0b0;
  uVar4 = FUN_00424561();
  *(uint *)(unaff_EBP + -0x20) = uVar4 & 0xffff;
  if ((uVar4 & 0xffff) != 0) {
    piStack_9c = &DAT_00980690;
    piStack_a0 = (int *)0x4ef0cc;
    FUN_00403191();
    piStack_9c = &DAT_00980690;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piStack_a0 = (int *)0x4ef0d8;
    FUN_00403191();
    piStack_9c = (int *)0x0;
    piStack_a0 = (int *)0x0;
    puStack_a4 = (undefined1 *)(unaff_EBP + -0x68);
    puStack_a8 = (undefined1 *)(unaff_EBP + -0x78);
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_ac;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_ac = extraout_ECX;
    FUN_00679e4e(&uStack_ac,0x711);
    iVar5 = unaff_EBP + -0x98;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00405a1d(iVar5);
    FUN_00402660();
    FUN_00404a02(iVar5);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_a4 = (undefined1 *)0x4ef127;
    iVar5 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x44) = iVar5;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar5 != 0) {
      piStack_9c = (int *)(unaff_EBP + -0x44);
      piStack_a0 = (int *)0x4ef13d;
      piStack_9c = (int *)FUN_00404b30();
      if (((int)piStack_9c < 0) && (piStack_9c != (int *)0x80004002)) {
        piStack_a0 = (int *)0x4ef14e;
        FUN_00878dfb();
      }
    }
    piStack_9c = (int *)(unaff_EBP + -0x98);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_a0 = (int *)0x4ef15e;
    piStack_9c = (int *)FUN_00402bc3();
    if ((int)piStack_9c < 0) {
      piStack_a0 = (int *)0x4ef169;
      FUN_00878dfb();
    }
    piStack_9c = (int *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_a0 = (int *)0x4ef176;
    piStack_9c = (int *)FUN_00402bc3();
    if ((int)piStack_9c < 0) {
      piStack_a0 = (int *)0x4ef181;
      FUN_00878dfb();
    }
    piStack_9c = (int *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_a0 = (int *)0x4ef18e;
    piStack_9c = (int *)FUN_00402bc3();
    if ((int)piStack_9c < 0) {
      piStack_a0 = (int *)0x4ef199;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      piStack_9c = (int *)0x4ef1aa;
      FUN_0087a1b0();
      piStack_9c = (int *)0x0;
      piStack_a0 = (int *)0x0;
      uStack_ac = 0x4ef1b5;
      puStack_a8 = (undefined1 *)(uint)bVar3;
      puStack_a4 = &stack0xffffff68;
      puStack_a8 = (undefined1 *)FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_a4;
      uStack_ac = 0x4ef1c1;
      FUN_004033a1();
      puStack_a8 = (undefined1 *)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_ac = 0x4ef1d4;
      FUN_0040263d();
      uStack_ac = 0x4ef1db;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_a4 = (undefined1 *)0x4ef1e6;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x58) = iVar5;
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      if (iVar5 != 0) {
        piStack_9c = (int *)(unaff_EBP + -0x58);
        piStack_a0 = (int *)0x4ef1fc;
        piStack_9c = (int *)FUN_00404b30();
        if (((int)piStack_9c < 0) && (piStack_9c != (int *)0x80004002)) {
          piStack_a0 = (int *)0x4ef20d;
          FUN_00878dfb();
        }
      }
      piStack_9c = (int *)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_a0 = (int *)0x4ef21d;
      piStack_9c = (int *)FUN_00402bc3();
      if ((int)piStack_9c < 0) {
        piStack_a0 = (int *)0x4ef228;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x28) == 0) {
        piStack_9c = (int *)0x4ef235;
        FUN_004027eb();
        piStack_9c = (int *)0x4ef23d;
        FUN_004027eb();
        goto LAB_004ef64c;
      }
      piStack_9c = (int *)0x4ef24a;
      FUN_0087a1b0();
      piStack_9c = (int *)0x0;
      piStack_a0 = (int *)0x0;
      puStack_a8 = *(undefined1 **)(unaff_EBP + -0x20);
      uStack_ac = 0x4ef257;
      puStack_a4 = &stack0xffffff68;
      puStack_a8 = (undefined1 *)FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_a4;
      uStack_ac = 0x4ef263;
      FUN_004033a1();
      puStack_a8 = (undefined1 *)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      uStack_ac = 0x4ef273;
      FUN_0040263d();
      uStack_ac = 0x4ef27a;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_a4 = (undefined1 *)0x4ef285;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x20) = iVar5;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      if (iVar5 != 0) {
        piStack_9c = (int *)(unaff_EBP + -0x20);
        piStack_a0 = (int *)0x4ef29b;
        piStack_9c = (int *)FUN_00404b30();
        if (((int)piStack_9c < 0) && (piStack_9c != (int *)0x80004002)) {
          piStack_a0 = (int *)0x4ef2ac;
          FUN_00878dfb();
        }
      }
      piStack_9c = (int *)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piStack_a0 = (int *)0x4ef2b9;
      piVar6 = (int *)FUN_00402bc3();
      piVar9 = piStack_9c;
      if ((int)piVar6 < 0) {
        piStack_a0 = (int *)0x4ef2c4;
        piStack_9c = piVar6;
        FUN_00878dfb();
        piVar9 = extraout_ECX_00;
      }
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (*(int *)(unaff_EBP + -0x2c) == 0) {
          piStack_9c = (int *)0x0;
          puStack_a8 = (undefined1 *)&piStack_a0;
          *(int ***)(unaff_EBP + -0x18) = &piStack_a0;
          puStack_a4 = (undefined1 *)0x5ec;
          uStack_ac = 0x4ef3aa;
          piStack_a0 = piVar9;
          FUN_00679e4e();
          puStack_a4 = (undefined1 *)(unaff_EBP + -0x54);
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          puStack_a8 = (undefined1 *)0x4ef3ba;
          FUN_0040263d();
          puStack_a8 = (undefined1 *)0x4ef3c1;
          piStack_a0 = (int *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          puStack_a4 = (undefined1 *)0x4ef3cb;
          iVar5 = FUN_00412550();
          puStack_a4 = (undefined1 *)(unaff_EBP + -0x54);
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          puStack_a8 = (undefined1 *)0x4ef3da;
          piStack_9c = (int *)FUN_00402bc3();
          if ((int)piStack_9c < 0) {
            piStack_a0 = (int *)0x4ef3e7;
            FUN_00878dfb();
          }
          puStack_a4 = (undefined1 *)&piStack_9c;
          *(int ***)(unaff_EBP + -0x18) = &piStack_9c;
          piStack_a0 = (int *)0x88e;
          puStack_a8 = (undefined1 *)0x4ef3fa;
          FUN_00679e4e();
          piStack_a0 = (int *)(unaff_EBP + -0x54);
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          puStack_a4 = (undefined1 *)0x4ef40a;
          FUN_0040263d();
          puStack_a4 = (undefined1 *)0x4ef411;
          psVar7 = (short *)FUN_004048a4();
          sVar1 = *psVar7;
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          if (sVar1 == 8) {
            piStack_9c = *(int **)(psVar7 + 4);
          }
          else {
            piStack_9c = (int *)&DAT_0097812c;
          }
          piStack_a0 = (int *)0x4ef42e;
          FUN_00402e8e();
          piStack_9c = (int *)(unaff_EBP + -0x10);
          piStack_a0 = (int *)0x4ef43a;
          FUN_00402f41();
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            piStack_9c = (int *)0x4ef446;
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
          }
          piStack_9c = (int *)(unaff_EBP + -0x54);
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          piStack_a0 = (int *)0x4ef456;
          piStack_9c = (int *)FUN_00402bc3();
          if ((int)piStack_9c < 0) {
            piStack_a0 = (int *)0x4ef461;
            FUN_00878dfb();
          }
          if ((*(int **)(unaff_EBP + 8) == (int *)0x0) ||
             (iVar2 = **(int **)(unaff_EBP + 8), iVar2 == 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(uint *)(iVar2 + -4) >> 1;
          }
          if (uVar4 != 0) {
            piStack_9c = (int *)&DAT_00964ed4;
            piStack_a0 = (int *)(unaff_EBP + -0x2c);
            puStack_a4 = (undefined1 *)0x4ef48c;
            puVar8 = (undefined4 *)FUN_004ef663();
            *(undefined4 *)(unaff_EBP + -0x10) = *puVar8;
            piStack_9c = (int *)0x4ef499;
            FUN_00408b49();
            piStack_9c = (int *)(unaff_EBP + -0x10);
            piStack_a0 = (int *)0x4ef4a5;
            FUN_00402f41();
            if (*(int *)(unaff_EBP + -0x10) != 0) {
              piStack_9c = (int *)0x4ef4b1;
              FUN_004030b1();
              *(undefined4 *)(unaff_EBP + -0x10) = 0;
            }
            if (*(int *)(unaff_EBP + -0x2c) != 0) {
              piStack_9c = (int *)0x4ef4c0;
              FUN_004030b1();
            }
          }
          piStack_9c = (int *)&DAT_00964ed0;
          piStack_a0 = (int *)0x4ef4cd;
          FUN_00402e8e();
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          if (iVar5 == 0) {
            piStack_9c = (int *)0x890;
            piStack_a0 = (int *)(unaff_EBP + -0x3c);
            puStack_a4 = (undefined1 *)0x4ef504;
            piVar9 = (int *)FUN_00679e4e();
            *(undefined4 *)(unaff_EBP + -0x24) = 2;
            *(undefined4 *)(unaff_EBP + -4) = 0x19;
          }
          else {
            piStack_9c = (int *)0x88f;
            piStack_a0 = (int *)(unaff_EBP + -0x20);
            puStack_a4 = (undefined1 *)0x4ef4e5;
            piVar9 = (int *)FUN_00679e4e();
            *(undefined4 *)(unaff_EBP + -0x24) = 1;
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
          }
          piStack_9c = (int *)0x37e;
          piStack_a0 = (int *)(unaff_EBP + -0x38);
          puStack_a4 = (undefined1 *)0x4ef524;
          piStack_9c = (int *)FUN_00679e4e();
          piStack_a0 = (int *)(unaff_EBP + -0x30);
          *(undefined4 *)(unaff_EBP + -4) = 0x1a;
          puStack_a4 = (undefined1 *)0x4ef538;
          FUN_00432f57();
          piStack_a0 = (int *)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          puStack_a4 = (undefined1 *)0x4ef548;
          piStack_9c = piVar9;
          FUN_00432d67();
          piStack_9c = (int *)(unaff_EBP + -0x10);
          piStack_a0 = (int *)(unaff_EBP + -0x40);
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          puStack_a4 = (undefined1 *)0x4ef55b;
          piStack_9c = (int *)FUN_00432d67();
          piStack_a0 = (int *)0x4ef564;
          FUN_0040810c();
          piStack_9c = (int *)(unaff_EBP + -0x34);
          piStack_a0 = (int *)0x4ef570;
          FUN_00402f41();
          piStack_9c = (int *)0x4ef578;
          FUN_00402fa6();
          piStack_9c = (int *)0x4ef580;
          FUN_00402fa6();
          piStack_9c = (int *)0x4ef588;
          FUN_00402fa6();
          if (*(int *)(unaff_EBP + -0x30) != 0) {
            piStack_9c = (int *)0x4ef594;
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x30) = 0;
          }
          if (*(int *)(unaff_EBP + -0x38) != 0) {
            piStack_9c = (int *)0x4ef5a3;
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x38) = 0;
          }
          if (((*(byte *)(unaff_EBP + -0x24) & 2) != 0) &&
             (*(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffd,
             *(int *)(unaff_EBP + -0x3c) != 0)) {
            piStack_9c = (int *)0x4ef5bc;
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x3c) = 0;
          }
          *(undefined4 *)(unaff_EBP + -4) = 0x17;
          if (((*(byte *)(unaff_EBP + -0x24) & 1) != 0) && (*(int *)(unaff_EBP + -0x20) != 0)) {
            piStack_9c = (int *)0x4ef5d8;
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x20) = 0;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            piStack_9c = (int *)0x4ef5eb;
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
          }
        }
        else {
          puStack_a4 = (undefined1 *)&piStack_9c;
          *(int ***)(unaff_EBP + -0x18) = &piStack_9c;
          piStack_a0 = (int *)0x88d;
          puStack_a8 = (undefined1 *)0x4ef319;
          piStack_9c = piVar9;
          FUN_00679e4e();
          piStack_a0 = (int *)(unaff_EBP + -0x54);
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          puStack_a4 = (undefined1 *)0x4ef329;
          FUN_0040263d();
          puStack_a4 = (undefined1 *)0x4ef330;
          psVar7 = (short *)FUN_004048a4();
          sVar1 = *psVar7;
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          if (sVar1 == 8) {
            piStack_9c = *(int **)(psVar7 + 4);
          }
          else {
            piStack_9c = (int *)&DAT_0097812c;
          }
          piStack_a0 = (int *)0x4ef34d;
          FUN_00402e8e();
          piStack_9c = (int *)(unaff_EBP + -0x10);
          piStack_a0 = (int *)0x4ef359;
          FUN_00402f41();
          piStack_9c = (int *)0x4ef361;
          FUN_00402fa6();
          piStack_9c = (int *)(unaff_EBP + -0x54);
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          piStack_a0 = (int *)0x4ef36e;
          piStack_9c = (int *)FUN_00402bc3();
          if ((int)piStack_9c < 0) {
            piStack_a0 = (int *)0x4ef379;
            FUN_00878dfb();
          }
          piStack_9c = (int *)0x1e;
          piStack_a0 = (int *)0x4ef386;
          FUN_00849a75();
          piStack_9c = (int *)0x4ef391;
          FUN_00849b2c();
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          piStack_9c = (int *)0x0;
        }
        else {
          piStack_9c = (int *)0x4ef5fa;
          piStack_9c = (int *)FUN_00409205();
        }
        piStack_a0 = (int *)0x4ef60a;
        FUN_0073e73c();
        if (*(int *)(unaff_EBP + 8) != 0) {
          piStack_9c = (int *)0x4ef616;
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + 8) = 0;
        }
        piStack_9c = *(int **)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (piStack_9c != (int *)0x0) {
          piStack_a0 = (int *)0x4ef62a;
          (**(code **)(*piStack_9c + 8))();
        }
        piStack_9c = *(int **)(unaff_EBP + -0x28);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (piStack_9c != (int *)0x0) {
          piStack_a0 = (int *)0x4ef63b;
          (**(code **)(*piStack_9c + 8))();
        }
        piStack_9c = *(int **)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piStack_9c != (int *)0x0) {
          piStack_a0 = (int *)0x4ef64c;
          (**(code **)(*piStack_9c + 8))();
        }
        goto LAB_004ef64c;
      }
      piStack_9c = (int *)0x4ef2d1;
      FUN_004027eb();
      piStack_9c = (int *)0x4ef2d9;
      FUN_004027eb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_9c = (int *)0x4ef2e5;
    FUN_004027eb();
  }
  piStack_9c = (int *)0x0;
  piStack_a0 = (int *)0x4ef2f1;
  FUN_0073e73c();
LAB_004ef64c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


