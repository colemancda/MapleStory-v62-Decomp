/* FUN_00427eb9 - 0x00427eb9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00427eb9(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  int iStack_60;
  int *piStack_5c;
  
  FUN_00879bb8();
  piStack_5c = &DAT_00980690;
  iStack_60 = 0x427ed9;
  FUN_00403191();
  piStack_5c = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_60 = 0x427ee7;
  FUN_00403191();
  piStack_5c = (int *)0x0;
  iStack_60 = 0;
  puStack_64 = (undefined1 *)(unaff_EBP + -0x38);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x28);
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_6c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004033a1(*(undefined4 *)(unaff_EBP + 8));
  iVar2 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_64 = (undefined1 *)0x427f29;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    piStack_5c = (int *)(unaff_EBP + -0x14);
    iStack_60 = 0x427f3f;
    piStack_5c = (int *)FUN_00404b30();
    if (((int)piStack_5c < 0) && (piStack_5c != (int *)0x80004002)) {
      iStack_60 = 0x427f50;
      FUN_00878dfb();
    }
  }
  piStack_5c = (int *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_60 = 0x427f5d;
  piStack_5c = (int *)FUN_00402bc3();
  if ((int)piStack_5c < 0) {
    iStack_60 = 0x427f68;
    FUN_00878dfb();
  }
  piStack_5c = (int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_60 = 0x427f75;
  piStack_5c = (int *)FUN_00402bc3();
  if ((int)piStack_5c < 0) {
    iStack_60 = 0x427f80;
    FUN_00878dfb();
  }
  piStack_5c = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_60 = 0x427f8d;
  piStack_5c = (int *)FUN_00402bc3();
  if ((int)piStack_5c < 0) {
    iStack_60 = 0x427f98;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_5c = (int *)0x427fa6;
    uVar3 = FUN_007d1e08();
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    piStack_5c = (int *)0x427fb4;
    puVar4 = (undefined4 *)FUN_00436582();
    puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
    *puVar4 = *(undefined4 *)(unaff_EBP + 0xc);
    puVar4[1] = *puVar1;
    puVar4[2] = puVar1[1];
    puVar4[3] = puVar1[2];
    puVar4[4] = puVar1[3];
    piStack_5c = (int *)0x0;
    puStack_68 = (undefined1 *)&iStack_60;
    *(int **)(unaff_EBP + 0xc) = &iStack_60;
    puStack_64 = (undefined1 *)0x3ca;
    uStack_6c = 0x427fe0;
    FUN_00679e4e();
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x427ff0;
    FUN_0040263d();
    puStack_68 = (undefined1 *)0x427ff7;
    iStack_60 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_64 = (undefined1 *)0x428001;
    uVar3 = FUN_00412550();
    puVar4[5] = uVar3;
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x428011;
    piStack_5c = (int *)FUN_00402bc3();
    if ((int)piStack_5c < 0) {
      iStack_60 = 0x42801e;
      FUN_00878dfb();
    }
    piStack_5c = (int *)0x0;
    puStack_68 = (undefined1 *)&iStack_60;
    *(int **)(unaff_EBP + 0xc) = &iStack_60;
    puStack_64 = (undefined1 *)0x3cb;
    uStack_6c = 0x428032;
    FUN_00679e4e();
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x428042;
    FUN_0040263d();
    puStack_68 = (undefined1 *)0x428049;
    iStack_60 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_64 = (undefined1 *)0x428053;
    uVar3 = FUN_00412550();
    puVar4[6] = uVar3;
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x428063;
    piStack_5c = (int *)FUN_00402bc3();
    if ((int)piStack_5c < 0) {
      iStack_60 = 0x428070;
      FUN_00878dfb();
    }
    piStack_5c = (int *)0x0;
    puStack_68 = (undefined1 *)&iStack_60;
    *(int **)(unaff_EBP + 0xc) = &iStack_60;
    puStack_64 = (undefined1 *)0x5ec;
    uStack_6c = 0x428084;
    FUN_00679e4e();
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x428094;
    FUN_0040263d();
    puStack_68 = (undefined1 *)0x42809b;
    iStack_60 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_64 = (undefined1 *)0x4280a5;
    uVar3 = FUN_00412550();
    puVar4[7] = uVar3;
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x4280b5;
    piStack_5c = (int *)FUN_00402bc3();
    if ((int)piStack_5c < 0) {
      iStack_60 = 0x4280c2;
      FUN_00878dfb();
    }
    piStack_5c = (int *)0x0;
    puStack_68 = (undefined1 *)&iStack_60;
    *(int **)(unaff_EBP + 0xc) = &iStack_60;
    puStack_64 = (undefined1 *)0x3cd;
    uStack_6c = 0x4280d6;
    FUN_00679e4e();
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x4280e6;
    FUN_0040263d();
    puStack_68 = (undefined1 *)0x4280ed;
    iStack_60 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_64 = (undefined1 *)0x4280f7;
    uVar3 = FUN_00412550();
    puVar4[8] = uVar3;
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x428107;
    piStack_5c = (int *)FUN_00402bc3();
    if ((int)piStack_5c < 0) {
      iStack_60 = 0x428114;
      FUN_00878dfb();
    }
    piStack_5c = (int *)0x0;
    puStack_68 = (undefined1 *)&iStack_60;
    *(int **)(unaff_EBP + 0xc) = &iStack_60;
    puStack_64 = (undefined1 *)0x3ce;
    uStack_6c = 0x428128;
    FUN_00679e4e();
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x428138;
    FUN_0040263d();
    puStack_68 = (undefined1 *)0x42813f;
    iStack_60 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_64 = (undefined1 *)0x428149;
    uVar3 = FUN_00412550();
    puVar4[9] = uVar3;
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x428159;
    piStack_5c = (int *)FUN_00402bc3();
    if ((int)piStack_5c < 0) {
      iStack_60 = 0x428166;
      FUN_00878dfb();
    }
    piStack_5c = (int *)0x0;
    puStack_68 = (undefined1 *)&iStack_60;
    *(int **)(unaff_EBP + 0xc) = &iStack_60;
    puStack_64 = (undefined1 *)0x3cf;
    uStack_6c = 0x42817a;
    FUN_00679e4e();
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x42818a;
    FUN_0040263d();
    puStack_68 = (undefined1 *)0x428191;
    iStack_60 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    puStack_64 = (undefined1 *)0x42819b;
    uVar3 = FUN_00412550();
    puVar4[10] = uVar3;
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x4281ab;
    piStack_5c = (int *)FUN_00402bc3();
    if ((int)piStack_5c < 0) {
      iStack_60 = 0x4281b8;
      FUN_00878dfb();
    }
    piStack_5c = (int *)0x0;
    puStack_68 = (undefined1 *)&iStack_60;
    *(int **)(unaff_EBP + 0xc) = &iStack_60;
    puStack_64 = (undefined1 *)0x3d0;
    uStack_6c = 0x4281cc;
    FUN_00679e4e();
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x4281dc;
    FUN_0040263d();
    puStack_68 = (undefined1 *)0x4281e3;
    iStack_60 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_64 = (undefined1 *)0x4281ed;
    iVar2 = FUN_00412550();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puVar4[0xb] = iVar2 + *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + 0x14);
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    puStack_68 = (undefined1 *)0x428203;
    piStack_5c = (int *)FUN_00402bc3();
    if ((int)piStack_5c < 0) {
      iStack_60 = 0x428210;
      FUN_00878dfb();
    }
    piStack_5c = (int *)0x0;
    puStack_68 = (undefined1 *)&iStack_60;
    *(int **)(unaff_EBP + 0xc) = &iStack_60;
    puStack_64 = (undefined1 *)0x3d1;
    uStack_6c = 0x428224;
    FUN_00679e4e();
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x428234;
    FUN_0040263d();
    puStack_68 = (undefined1 *)0x42823b;
    iStack_60 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_64 = (undefined1 *)0x428245;
    iVar2 = FUN_00412550();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puVar4[0xc] = iVar2 + *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + 0x14);
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    puStack_68 = (undefined1 *)0x42825b;
    piStack_5c = (int *)FUN_00402bc3();
    if ((int)piStack_5c < 0) {
      iStack_60 = 0x428268;
      FUN_00878dfb();
    }
    iVar2 = 0;
    while( true ) {
      piStack_5c = (int *)0x428272;
      FUN_0087a1b0();
      piStack_5c = (int *)0x0;
      iStack_60 = 0;
      uStack_6c = 0x42827d;
      puStack_68 = (undefined1 *)iVar2;
      puStack_64 = &stack0xffffffa8;
      puStack_68 = (undefined1 *)FUN_00412335();
      *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_64;
      uStack_6c = 0x428289;
      FUN_004033a1();
      puStack_68 = (undefined1 *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_6c = 0x428299;
      FUN_0040263d();
      uStack_6c = 0x4282a0;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      puStack_64 = (undefined1 *)0x4282ab;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + 8) = iVar5;
      *(undefined4 *)(unaff_EBP + 0x14) = 0;
      if (iVar5 != 0) {
        piStack_5c = (int *)(unaff_EBP + 8);
        iStack_60 = 0x4282c1;
        piStack_5c = (int *)FUN_00404b30();
        if (((int)piStack_5c < 0) && (piStack_5c != (int *)0x80004002)) {
          iStack_60 = 0x4282d2;
          FUN_00878dfb();
        }
      }
      piStack_5c = (int *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_60 = 0x4282df;
      piStack_5c = (int *)FUN_00402bc3();
      if ((int)piStack_5c < 0) {
        iStack_60 = 0x4282ea;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 0x14) == 0) break;
      piStack_5c = (int *)0xffffffff;
      iStack_60 = unaff_EBP + 0x14;
      puStack_64 = (undefined1 *)0x4282fd;
      FUN_0043440c();
      piStack_5c = *(int **)(unaff_EBP + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (piStack_5c != (int *)0x0) {
        iStack_60 = 0x42830e;
        (**(code **)(*piStack_5c + 8))();
      }
      iVar2 = iVar2 + 1;
    }
    piStack_5c = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_5c != (int *)0x0) {
      iStack_60 = 0x428325;
      (**(code **)(*piStack_5c + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


