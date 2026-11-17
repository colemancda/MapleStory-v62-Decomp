/* FUN_00687b24 - 0x00687b24 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00687b24(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  short *psVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int *extraout_ECX_06;
  int unaff_EBP;
  undefined4 uStack_e4;
  undefined1 *puStack_e0;
  undefined1 *puStack_dc;
  int *piStack_d8;
  int *piStack_d4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = extraout_ECX;
  piStack_d4 = (int *)0x687b44;
  FUN_0068829c();
  piStack_d4 = &DAT_00980690;
  piStack_d8 = (int *)0x687b52;
  FUN_00403191();
  piStack_d4 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_d8 = (int *)0x687b60;
  FUN_00403191();
  piStack_d4 = (int *)0x0;
  piStack_d8 = (int *)0x0;
  puStack_dc = (undefined1 *)(unaff_EBP + -0x50);
  puStack_e0 = (undefined1 *)(unaff_EBP + -0x40);
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_e4;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_e4 = extraout_ECX_00;
  FUN_00679e4e(&uStack_e4,0x714);
  iVar2 = unaff_EBP + -0xa0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_dc = (undefined1 *)0x687baf;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar2 != 0) {
    piStack_d4 = (int *)(unaff_EBP + -0x2c);
    piStack_d8 = (int *)0x687bc5;
    piStack_d4 = (int *)FUN_00404b30();
    if (((int)piStack_d4 < 0) && (piStack_d4 != (int *)0x80004002)) {
      piStack_d8 = (int *)0x687bd6;
      FUN_00878dfb();
    }
  }
  piStack_d4 = (int *)(unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_d8 = (int *)0x687be6;
  piStack_d4 = (int *)FUN_00402bc3();
  if ((int)piStack_d4 < 0) {
    piStack_d8 = (int *)0x687bf1;
    FUN_00878dfb();
  }
  piStack_d4 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_d8 = (int *)0x687bfe;
  piStack_d4 = (int *)FUN_00402bc3();
  if ((int)piStack_d4 < 0) {
    piStack_d8 = (int *)0x687c09;
    FUN_00878dfb();
  }
  piStack_d4 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_d8 = (int *)0x687c16;
  piStack_d4 = (int *)FUN_00402bc3();
  if ((int)piStack_d4 < 0) {
    piStack_d8 = (int *)0x687c21;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    piStack_d4 = (int *)0x687c30;
    FUN_004027eb();
  }
  else {
    piStack_d4 = (int *)0x687c3a;
    piStack_d8 = (int *)FUN_0040cf4d();
    piStack_d4 = (int *)(unaff_EBP + -0x21);
    puStack_dc = (undefined1 *)0x687c46;
    FUN_006882d9();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        piStack_d4 = (int *)0x80004003;
        piStack_d8 = (int *)0x687c5b;
        FUN_00878dfb();
      }
      piStack_d4 = (int *)0x687c63;
      uVar3 = FUN_0040cf4d();
      if (uVar3 <= *(uint *)(unaff_EBP + -0x10)) break;
      piStack_d4 = (int *)0x687c74;
      FUN_0087a1b0();
      piStack_d4 = (int *)0x0;
      piStack_d8 = (int *)0x0;
      puStack_e0 = *(undefined1 **)(unaff_EBP + -0x10);
      uStack_e4 = 0x687c81;
      puStack_dc = &stack0xffffff30;
      puStack_e0 = (undefined1 *)FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_dc;
      uStack_e4 = 0x687c8d;
      FUN_004033a1();
      puStack_e0 = (undefined1 *)(unaff_EBP + -0x80);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_e4 = 0x687c9d;
      FUN_0040263d();
      uStack_e4 = 0x687ca4;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_dc = (undefined1 *)0x687caf;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x30) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (iVar2 != 0) {
        piStack_d4 = (int *)(unaff_EBP + -0x30);
        piStack_d8 = (int *)0x687cc5;
        piStack_d4 = (int *)FUN_00404b30();
        if (((int)piStack_d4 < 0) && (piStack_d4 != (int *)0x80004002)) {
          piStack_d8 = (int *)0x687cd6;
          FUN_00878dfb();
        }
      }
      piStack_d4 = (int *)(unaff_EBP + -0x80);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_d8 = (int *)0x687ce3;
      piVar4 = (int *)FUN_00402bc3();
      piStack_d8 = piStack_d4;
      if ((int)piVar4 < 0) {
        piStack_d8 = (int *)0x687cee;
        piStack_d4 = piVar4;
        FUN_00878dfb();
        piStack_d8 = extraout_ECX_01;
      }
      piStack_d4 = (int *)0x1f;
      puStack_e0 = (undefined1 *)&piStack_d8;
      *(int ***)(unaff_EBP + -0x14) = &piStack_d8;
      puStack_dc = (undefined1 *)0xc33;
      uStack_e4 = 0x687d03;
      FUN_00679e4e();
      puStack_dc = (undefined1 *)(unaff_EBP + -0xc0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      puStack_e0 = (undefined1 *)0x687d16;
      FUN_0040263d();
      puStack_e0 = (undefined1 *)0x687d1d;
      piStack_d8 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_dc = (undefined1 *)0x687d27;
      uVar5 = FUN_00412550();
      piStack_d4 = *(int **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
      piStack_d8 = (int *)0x687d38;
      iVar2 = FUN_0068832b();
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(unaff_EBP + -0x14);
      piStack_d4 = (int *)(unaff_EBP + -0xc0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_d8 = (int *)0x687d4e;
      piVar4 = (int *)FUN_00402bc3();
      piStack_d8 = piStack_d4;
      if ((int)piVar4 < 0) {
        piStack_d8 = (int *)0x687d59;
        piStack_d4 = piVar4;
        FUN_00878dfb();
        piStack_d8 = extraout_ECX_02;
      }
      piStack_d4 = (int *)0x0;
      puStack_e0 = (undefined1 *)&piStack_d8;
      *(int ***)(unaff_EBP + -0x14) = &piStack_d8;
      puStack_dc = (undefined1 *)0x715;
      uStack_e4 = 0x687d6d;
      FUN_00679e4e();
      puStack_dc = (undefined1 *)(unaff_EBP + -0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      puStack_e0 = (undefined1 *)0x687d7d;
      FUN_0040263d();
      puStack_e0 = (undefined1 *)0x687d84;
      piStack_d8 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      puStack_dc = (undefined1 *)0x687d8e;
      uVar5 = FUN_00412550();
      piStack_d4 = *(int **)(unaff_EBP + -0x10);
      piStack_d8 = (int *)0x687da0;
      puVar6 = (undefined4 *)FUN_0068832b();
      *puVar6 = uVar5;
      piStack_d4 = (int *)(unaff_EBP + -0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_d8 = (int *)0x687daf;
      piVar4 = (int *)FUN_00402bc3();
      piStack_d8 = piStack_d4;
      if ((int)piVar4 < 0) {
        piStack_d8 = (int *)0x687dba;
        piStack_d4 = piVar4;
        FUN_00878dfb();
        piStack_d8 = extraout_ECX_03;
      }
      piStack_d4 = (int *)0x0;
      puStack_e0 = (undefined1 *)&piStack_d8;
      *(int ***)(unaff_EBP + -0x14) = &piStack_d8;
      puStack_dc = (undefined1 *)0x716;
      uStack_e4 = 0x687dce;
      FUN_00679e4e();
      puStack_dc = (undefined1 *)(unaff_EBP + -0x70);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      puStack_e0 = (undefined1 *)0x687dde;
      FUN_0040263d();
      puStack_e0 = (undefined1 *)0x687de5;
      piStack_d8 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_dc = (undefined1 *)0x687def;
      uVar5 = FUN_00412550();
      piStack_d4 = *(int **)(unaff_EBP + -0x10);
      piStack_d8 = (int *)0x687e01;
      iVar2 = FUN_0068832b();
      *(undefined4 *)(iVar2 + 4) = uVar5;
      piStack_d4 = (int *)(unaff_EBP + -0x70);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_d8 = (int *)0x687e11;
      piVar4 = (int *)FUN_00402bc3();
      piStack_d8 = piStack_d4;
      if ((int)piVar4 < 0) {
        piStack_d8 = (int *)0x687e1c;
        piStack_d4 = piVar4;
        FUN_00878dfb();
        piStack_d8 = extraout_ECX_04;
      }
      piStack_d4 = (int *)0x0;
      puStack_e0 = (undefined1 *)&piStack_d8;
      *(int ***)(unaff_EBP + -0x14) = &piStack_d8;
      puStack_dc = (undefined1 *)0x3ce;
      uStack_e4 = 0x687e30;
      FUN_00679e4e();
      puStack_dc = (undefined1 *)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      puStack_e0 = (undefined1 *)0x687e43;
      FUN_0040263d();
      puStack_e0 = (undefined1 *)0x687e4a;
      piStack_d8 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      puStack_dc = (undefined1 *)0x687e54;
      uVar5 = FUN_00412550();
      piStack_d4 = *(int **)(unaff_EBP + -0x10);
      piStack_d8 = (int *)0x687e66;
      iVar2 = FUN_0068832b();
      *(undefined4 *)(iVar2 + 8) = uVar5;
      piStack_d4 = (int *)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_d8 = (int *)0x687e79;
      piVar4 = (int *)FUN_00402bc3();
      piStack_d8 = piStack_d4;
      if ((int)piVar4 < 0) {
        piStack_d8 = (int *)0x687e84;
        piStack_d4 = piVar4;
        FUN_00878dfb();
        piStack_d8 = extraout_ECX_05;
      }
      piStack_d4 = (int *)0x0;
      puStack_e0 = (undefined1 *)&piStack_d8;
      *(int ***)(unaff_EBP + -0x14) = &piStack_d8;
      puStack_dc = (undefined1 *)0x719;
      uStack_e4 = 0x687e98;
      FUN_00679e4e();
      puStack_dc = (undefined1 *)(unaff_EBP + -0xb0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      puStack_e0 = (undefined1 *)0x687eab;
      FUN_0040263d();
      puStack_e0 = (undefined1 *)0x687eb2;
      piStack_d8 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      puStack_dc = (undefined1 *)0x687ebc;
      uVar5 = FUN_00412550();
      piStack_d4 = *(int **)(unaff_EBP + -0x10);
      piStack_d8 = (int *)0x687ece;
      iVar2 = FUN_0068832b();
      *(undefined4 *)(iVar2 + 0x10) = uVar5;
      piStack_d4 = (int *)(unaff_EBP + -0xb0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_d8 = (int *)0x687ee1;
      piVar4 = (int *)FUN_00402bc3();
      if ((int)piVar4 < 0) {
        piStack_d8 = (int *)0x687eec;
        piStack_d4 = piVar4;
        FUN_00878dfb();
        piStack_d4 = extraout_ECX_06;
      }
      puStack_dc = (undefined1 *)&piStack_d4;
      *(int ***)(unaff_EBP + -0x14) = &piStack_d4;
      piStack_d8 = (int *)0x71a;
      puStack_e0 = (undefined1 *)0x687eff;
      FUN_00679e4e();
      piStack_d8 = (int *)(unaff_EBP + -0xd0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      puStack_dc = (undefined1 *)0x687f12;
      FUN_0040263d();
      puStack_dc = (undefined1 *)0x687f19;
      psVar7 = (short *)FUN_004048a4();
      sVar1 = *psVar7;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (sVar1 == 8) {
        piStack_d8 = *(int **)(psVar7 + 4);
      }
      else {
        piStack_d8 = (int *)&DAT_0097812c;
      }
      piStack_d4 = (int *)0xffffffff;
      puStack_dc = (undefined1 *)0x687f44;
      FUN_004184ca();
      piStack_d4 = (int *)(unaff_EBP + -0xd0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_d8 = (int *)0x687f54;
      piStack_d4 = (int *)FUN_00402bc3();
      if ((int)piStack_d4 < 0) {
        piStack_d8 = (int *)0x687f5f;
        FUN_00878dfb();
      }
      piStack_d4 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (piStack_d4 != (int *)0x0) {
        piStack_d8 = (int *)0x687f70;
        (**(code **)(*piStack_d4 + 8))();
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 0x18;
    }
    piStack_d4 = (int *)0x687f82;
    uVar5 = (*DAT_0097b704)();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 8) = uVar5;
    piStack_d4 = *(int **)(unaff_EBP + -0x1c);
    if (piStack_d4 != (int *)0x0) {
      piStack_d8 = (int *)0x687f99;
      (**(code **)(*piStack_d4 + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


