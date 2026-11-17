/* FUN_008351eb - 0x008351eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008351eb(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iStack_b4;
  int *piStack_b0;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = extraout_ECX;
  iVar1 = *DAT_00978358;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  piStack_b0 = (int *)0x835211;
  (**(code **)(iVar1 + 4))();
  piStack_b0 = (int *)0x835218;
  iVar1 = FUN_004bf0d4();
  if ((iVar1 != 0) || (*(int *)(unaff_EBP + 0xc) / 10000 != 0xe3)) goto LAB_008357a8;
  piStack_b0 = (int *)0x0;
  iStack_b4 = 200;
  iVar1 = FUN_004becbc();
  if (iVar1 == 0) goto LAB_008357a8;
  piStack_b0 = *(int **)(unaff_EBP + 0xc);
  iStack_b4 = 0x83525a;
  piVar2 = (int *)FUN_00833af2();
  uVar3 = -(uint)(*(int *)(DAT_00978140 + 8) != 0) & *(int *)(DAT_00978140 + 8) + 8U;
  *(uint *)(unaff_EBP + -0x34) = -(uint)(uVar3 != 0) & uVar3 - 8;
  piStack_b0 = (int *)0x835283;
  FUN_007c1660();
  piStack_b0 = (int *)(unaff_EBP + -0x50);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_b4 = 0x835292;
  iVar1 = FUN_00455c59();
  iVar1 = *(int *)(iVar1 + 4);
  piStack_b0 = (int *)0x83529d;
  FUN_0045e4a2();
  piStack_b0 = (int *)piVar2[6];
  iStack_b4 = 0x8352ac;
  iVar4 = FUN_0054e7b3();
  if (iVar4 == 0) {
    piStack_b0 = (int *)piVar2[6];
    *(int *)(unaff_EBP + -0x10) = (int)piStack_b0 / 1000000;
    iStack_b4 = unaff_EBP + -0x28;
    FUN_004497f5();
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 1;
      while( true ) {
        iVar4 = *(int *)(iVar1 + 0x3e3 + *(int *)(unaff_EBP + -0x10) * 4);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar4 + -4);
        }
        if (iVar4 + -1 < *(int *)(unaff_EBP + -0x14)) goto LAB_00835529;
        piStack_b0 = *(int **)(unaff_EBP + -0x14);
        iStack_b4 = *(int *)(unaff_EBP + -0x10);
        FUN_00458c4f(unaff_EBP + -0x30);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (*(int *)(unaff_EBP + -0x2c) == 0) break;
        piStack_b0 = (int *)0x8353bb;
        iVar4 = FUN_0045e2eb();
        if (iVar4 == piVar2[6]) {
          piVar5 = *(int **)(unaff_EBP + -0x2c);
          piStack_b0 = (int *)0x64;
          *(int **)(unaff_EBP + -0x18) = &iStack_b4;
          FUN_00679e4e(&iStack_b4,0x923);
          iVar4 = unaff_EBP + -0x70;
          *(undefined1 *)(unaff_EBP + -4) = 3;
          FUN_0040263d(iVar4);
          iStack_b4 = FUN_004048a4(iVar4);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          uVar6 = FUN_00412550();
          iVar4 = *piVar5;
          *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
          piStack_b0 = (int *)0x83540a;
          iVar4 = (**(code **)(iVar4 + 0x18))();
          piStack_b0 = (int *)(unaff_EBP + -0x70);
          *(bool *)(unaff_EBP + -0x19) = iVar4 < *(int *)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iStack_b4 = 0x835420;
          piStack_b0 = (int *)FUN_00402bc3();
          if ((int)piStack_b0 < 0) {
            iStack_b4 = 0x83542b;
            FUN_00878dfb();
          }
          if (*(char *)(unaff_EBP + -0x19) != '\0') break;
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + -0x2c) != 0) {
          piStack_b0 = (int *)0x0;
          iStack_b4 = 0x835445;
          FUN_00449913();
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        }
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        piStack_b0 = (int *)0x0;
        iStack_b4 = 0x835464;
        FUN_00449913();
      }
      piStack_b0 = *(int **)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_b0 != (int *)0x0) {
        iStack_b4 = 0x835475;
        (**(code **)(*piStack_b0 + 8))();
      }
      goto LAB_00835475;
    }
LAB_00835529:
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    iVar1 = *(int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar1 == 1) {
      piStack_b0 = (int *)0xf;
      iStack_b4 = unaff_EBP + -0x10;
      piVar2 = (int *)FUN_00679d22();
      iStack_b4 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (iStack_b4 == 0) {
        piStack_b0 = (int *)0x0;
      }
      else {
        piStack_b0 = *(int **)(iStack_b4 + -4);
      }
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 6;
LAB_00835618:
      piStack_b0 = (int *)0x83561d;
      FUN_00414ebb();
    }
    else {
      if (iVar1 == 2) {
        piStack_b0 = (int *)0x10;
        iStack_b4 = unaff_EBP + -0x20;
        piVar2 = (int *)FUN_00679d22();
        iStack_b4 = *piVar2;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (iStack_b4 == 0) {
          piStack_b0 = (int *)0x0;
        }
        else {
          piStack_b0 = *(int **)(iStack_b4 + -4);
        }
        FUN_0045efbb();
        *(undefined1 *)(unaff_EBP + -4) = 6;
        goto LAB_00835618;
      }
      if (iVar1 == 3) {
        piStack_b0 = (int *)0x11;
        iStack_b4 = unaff_EBP + -0x18;
        piVar2 = (int *)FUN_00679d22();
        iStack_b4 = *piVar2;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (iStack_b4 == 0) {
          piStack_b0 = (int *)0x0;
        }
        else {
          piStack_b0 = *(int **)(iStack_b4 + -4);
        }
        FUN_0045efbb();
        *(undefined1 *)(unaff_EBP + -4) = 6;
        goto LAB_00835618;
      }
      if (iVar1 == 4) {
        piStack_b0 = (int *)0x12;
        iStack_b4 = unaff_EBP + 8;
        piVar2 = (int *)FUN_00679d22();
        iStack_b4 = *piVar2;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (iStack_b4 == 0) {
          piStack_b0 = (int *)0x0;
        }
        else {
          piStack_b0 = *(int **)(iStack_b4 + -4);
        }
        FUN_0045efbb();
        *(undefined1 *)(unaff_EBP + -4) = 6;
        goto LAB_00835618;
      }
    }
    piStack_b0 = (int *)0xc6f;
    iStack_b4 = unaff_EBP + 8;
    piVar2 = (int *)FUN_00679d22();
    piStack_b0 = *(int **)(unaff_EBP + 0xc);
    iStack_b4 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00434e21(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_b0 = (int *)0x835652;
    FUN_00414ebb();
    iStack_b4 = unaff_EBP + 0xc;
    piStack_b0 = (int *)0xc;
    FUN_00471102();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piStack_b0 = (int *)0x83566b;
    FUN_00414ebb();
    piStack_b0 = *(int **)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piStack_b0 != (int *)0x0) {
      iStack_b4 = 0x835680;
      (**(code **)(*piStack_b0 + 8))();
    }
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    while( true ) {
      iVar4 = *(int *)(iVar1 + 999);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + -4);
      }
      if (iVar4 + -1 < *(int *)(unaff_EBP + -0x14)) {
        piStack_b0 = (int *)0xea7;
        iStack_b4 = unaff_EBP + 0xc;
        iStack_b4 = FUN_00679d22();
        piStack_b0 = (int *)0xc;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00471102();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + 0xc) != 0) {
          piStack_b0 = (int *)(*(int *)(unaff_EBP + 0xc) + -0xc);
          iStack_b4 = 0x83533c;
          FUN_00434e38();
        }
        goto LAB_0083579c;
      }
      piStack_b0 = *(int **)(unaff_EBP + -0x14);
      iStack_b4 = 1;
      iVar4 = FUN_00458c4f(unaff_EBP + -0x30);
      *(uint *)(unaff_EBP + -0x10) = (uint)(*(int *)(iVar4 + 4) == 0);
      piStack_b0 = (int *)0x8352f5;
      FUN_0046575e();
      if (*(int *)(unaff_EBP + -0x10) != 0) break;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    }
LAB_00835475:
    *(int *)(unaff_EBP + -0x60) = piVar2[2];
    *(int *)(unaff_EBP + -0x5c) = piVar2[3];
    *(int *)(unaff_EBP + -0x58) = piVar2[4];
    *(int *)(unaff_EBP + -0x54) = piVar2[5];
    piVar5 = (int *)(*(int *)(unaff_EBP + -0x34) + 4);
    piStack_b0 = (int *)0x83548c;
    iVar1 = (**(code **)(*piVar5 + 0x10))();
    piStack_b0 = *(int **)(iVar1 + 4);
    iStack_b4 = 0x835496;
    piVar5 = (int *)(**(code **)(*piVar5 + 0x10))();
    iStack_b4 = *piVar5;
    (*DAT_0097b54c)(unaff_EBP + -0x60);
    piStack_b0 = (int *)0x0;
    iStack_b4 = *piVar2;
    uVar6 = FUN_005d528b(unaff_EBP + -0x60,unaff_EBP + -0xac,1,0,0,0);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
    piStack_b0 = piVar2 + 0xd;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    iStack_b4 = 0x8354d6;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      iVar1 = piVar2[8];
      if (iVar1 == 0) {
        piStack_b0 = (int *)0xeaa;
        iStack_b4 = unaff_EBP + -0x10;
        iStack_b4 = FUN_00679d22();
        piStack_b0 = (int *)0xc;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        FUN_00471102();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
      }
      else if (iVar1 == 1) {
        piStack_b0 = (int *)0x10bb;
        iStack_b4 = unaff_EBP + -0x18;
        iStack_b4 = FUN_00679d22();
        piStack_b0 = (int *)0xc;
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        FUN_00471102();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
      }
      else {
        if (iVar1 != 2) {
          if (((iVar1 == 3) && (*(char **)(unaff_EBP + -0x24) != (char *)0x0)) &&
             (**(char **)(unaff_EBP + -0x24) != '\0')) {
            iStack_b4 = unaff_EBP + -0x24;
            piStack_b0 = (int *)0xc;
            FUN_00471102();
          }
          goto LAB_00835790;
        }
        piStack_b0 = (int *)0x10bc;
        iStack_b4 = unaff_EBP + 8;
        iStack_b4 = FUN_00679d22();
        piStack_b0 = (int *)0xc;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_00471102();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
      }
      piStack_b0 = (int *)0x835706;
      FUN_00414ebb();
    }
    else {
      piStack_b0 = (int *)0x0;
      iStack_b4 = 0;
      FUN_0060142b(0x4a);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      piStack_b0 = (int *)0x835720;
      piStack_b0 = (int *)FUN_007d1e08();
      iStack_b4 = 0x835729;
      FUN_00457d37();
      piStack_b0 = *(int **)(unaff_EBP + 8);
      iStack_b4 = 0x835734;
      FUN_0045d247();
      piStack_b0 = *(int **)(unaff_EBP + 0xc);
      iStack_b4 = 0x83573f;
      FUN_00457d37();
      piStack_b0 = *(int **)(*(int *)(unaff_EBP + -0xac) + 0x158);
      iStack_b4 = *(int *)(unaff_EBP + -0xac) + 0x150;
      piStack_b0 = (int *)FUN_004b8c9b();
      iStack_b4 = 0x835761;
      FUN_00457d37();
      piStack_b0 = (int *)(unaff_EBP + -0x48);
      iStack_b4 = 0x835770;
      FUN_004751b2();
      iVar1 = *(int *)(unaff_EBP + -0x20);
      *(undefined4 *)(iVar1 + 0x208c) = 1;
      piStack_b0 = (int *)0x83577e;
      uVar6 = FUN_007d1e08();
      *(undefined4 *)(iVar1 + 0x2090) = uVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      piStack_b0 = (int *)0x835790;
      FUN_0045ebca();
    }
LAB_00835790:
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_b0 = (int *)0x83579c;
    FUN_00414ebb();
  }
LAB_0083579c:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_b0 = (int *)0x8357a8;
  FUN_007c159e();
LAB_008357a8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


