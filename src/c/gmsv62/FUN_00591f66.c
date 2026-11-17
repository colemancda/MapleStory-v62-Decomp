/* FUN_00591f66 - 0x00591f66 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00591f66(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar6;
  undefined4 uStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  FUN_0081622a();
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0xdc);
  piVar5 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar5 == (int *)0x0) {
    FUN_00878dfb();
    piVar5 = *(int **)(unaff_EBP + 8);
  }
  iVar1 = *piVar5;
  *(int **)(unaff_EBP + -0x18) = piVar5;
  iVar1 = (**(code **)(iVar1 + 0x80))();
  if (iVar1 < 0) {
    iStack_108 = *(undefined4 *)(unaff_EBP + -0x18);
    iStack_110 = 0x591ff6;
    iStack_10c = iVar1;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_108 = 0x592003;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_108 = 0x59200e;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iVar1 = *(int *)(unaff_EBP + -0x24);
  iVar4 = *(int *)(iVar1 + 0xd0);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar4 != 0) {
    iStack_108 = unaff_EBP + -0x10;
    iStack_10c = 0x592037;
    puVar2 = (undefined4 *)FUN_00679d86();
    iStack_108 = *puVar2;
    iStack_10c = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_110 = 0x59204d;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      iStack_108 = 0x592064;
      FUN_00403384();
    }
    iStack_108 = 0x59206e;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_108 = 0x59207b;
    FUN_00403191();
    iStack_108 = 0;
    iStack_10c = unaff_EBP + -0x70;
    iStack_110 = unaff_EBP + -0x40;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uStack_114 = 0x592091;
    uVar3 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + -0x30) = &uStack_114;
    FUN_004033a1(uVar3);
    iVar1 = unaff_EBP + -0x80;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_10c = 0x5920c3;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar1 != 0) {
      iStack_108 = 0x5920d9;
      iVar1 = FUN_0041a581();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        iStack_108 = 0x5920ea;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_108 = 0x5920f7;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_108 = 0x592102;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_108 = 0x59210f;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_108 = 0x59211a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_108 = 0x592127;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_108 = 0x592132;
      FUN_00878dfb();
    }
    iStack_108 = 0x59213b;
    FUN_00403191();
    piVar5 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (piVar5 == (int *)0x0) {
      iStack_108 = 0x592150;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piVar5;
    uStack_114 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_110 = *(undefined4 *)(unaff_EBP + -0x50);
    iStack_10c = *(int *)(unaff_EBP + -0x4c);
    iStack_108 = *(undefined4 *)(unaff_EBP + -0x48);
    *(int **)(unaff_EBP + -0x18) = piVar5;
    iVar1 = (**(code **)(iVar1 + 0x80))(piVar5,0x104,10);
    if (iVar1 < 0) {
      iStack_108 = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_110 = 0x592187;
      iStack_10c = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_108 = 0x592194;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_108 = 0x59219f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004125e6();
    iVar1 = *(int *)(unaff_EBP + -0x24);
  }
  uVar6 = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  while( true ) {
    iStack_108 = unaff_EBP + -0x50;
    iStack_10c = 0x5921cb;
    FUN_00592cf6();
    iVar1 = *(int *)(*(int *)(iVar1 + 0xd8) + 0x1c);
    if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) <= uVar6)) {
      iStack_108 = unaff_EBP + -0x54;
      iStack_10c = 0x592476;
      puVar2 = (undefined4 *)FUN_00679d86();
      iStack_108 = *puVar2;
      iStack_10c = unaff_EBP + -0x1c;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_110 = 0x592487;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00402676();
      iStack_108 = 0x5924a2;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
      iStack_108 = unaff_EBP + -0x70;
      iStack_10c = 0x5924ac;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        iStack_108 = 0x5924ba;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iStack_108 = 0x5924c7;
      FUN_00403191();
      iStack_108 = 0;
      iStack_10c = unaff_EBP + -0x70;
      iStack_110 = unaff_EBP + -0x80;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      uStack_114 = 0x5924dd;
      uVar3 = FUN_00411641();
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_114;
      FUN_004033a1(uVar3);
      iVar1 = unaff_EBP + -0xe0;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      FUN_00405a1d(iVar1);
      FUN_00402660();
      FUN_00404a02(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iStack_10c = 0x592512;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x30) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      if (iVar1 != 0) {
        iStack_108 = 0x592528;
        iVar1 = FUN_0041a581();
        if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
          iStack_108 = 0x592539;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      iStack_108 = 0x592549;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_108 = 0x592554;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      iStack_108 = 0x592561;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_108 = 0x59256c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      iStack_108 = 0x592579;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_108 = 0x592584;
        FUN_00878dfb();
      }
      iStack_108 = 0x59258a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      iStack_108 = unaff_EBP + -0x40;
      iStack_10c = 0x592594;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        iStack_108 = 0x5925a0;
        FUN_00878dfb();
      }
      piVar5 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      if (piVar5 == (int *)0x0) {
        iStack_108 = 0x5925b5;
        FUN_00878dfb();
        piVar5 = *(int **)(unaff_EBP + 8);
      }
      iVar1 = *piVar5;
      uStack_114 = *(undefined4 *)(unaff_EBP + -0x28);
      iStack_110 = *(undefined4 *)(unaff_EBP + -0x40);
      iStack_10c = *(int *)(unaff_EBP + -0x3c);
      iStack_108 = *(undefined4 *)(unaff_EBP + -0x38);
      *(int **)(unaff_EBP + -0x20) = piVar5;
      iVar1 = (**(code **)(iVar1 + 0x80))
                        (piVar5,*(undefined4 *)(unaff_EBP + -0x50),
                         *(undefined4 *)(unaff_EBP + -0x4c));
      if (iVar1 < 0) {
        iStack_108 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_110 = 0x5925eb;
        iStack_10c = iVar1;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      iStack_108 = 0x5925f8;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_108 = 0x592603;
        FUN_00878dfb();
      }
      piVar5 = *(int **)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    else {
      iStack_108 = unaff_EBP + -0x58;
      iStack_10c = 0x5921fc;
      puVar2 = (undefined4 *)FUN_00679d86();
      iStack_108 = *puVar2;
      iStack_10c = unaff_EBP + -0x1c;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_110 = 0x59220d;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x58) != 0) {
        iStack_108 = 0x592224;
        FUN_00403384();
      }
      iStack_108 = 0x592231;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_108 = 0x592241;
      FUN_00403191();
      iStack_108 = 0;
      iStack_10c = unaff_EBP + -0x90;
      iStack_110 = unaff_EBP + -0xa0;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      uStack_114 = 0x59225d;
      uVar3 = FUN_00411641();
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_114;
      FUN_004033a1(uVar3);
      iVar1 = unaff_EBP + -0xd0;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_00405a1d(iVar1);
      FUN_00402660();
      FUN_00404a02(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_10c = 0x592292;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x60) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      if (iVar1 != 0) {
        iStack_108 = 0x5922a8;
        iVar1 = FUN_0041a581();
        if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
          iStack_108 = 0x5922b9;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_108 = 0x5922c9;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_108 = 0x5922d4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_108 = 0x5922e4;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_108 = 0x5922ef;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_108 = 0x5922ff;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_108 = 0x59230a;
        FUN_00878dfb();
      }
      iStack_108 = 0x592316;
      FUN_00403191();
      piVar5 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (piVar5 == (int *)0x0) {
        iStack_108 = 0x59232b;
        FUN_00878dfb();
        piVar5 = *(int **)(unaff_EBP + 8);
      }
      iVar1 = *piVar5;
      uStack_114 = *(undefined4 *)(unaff_EBP + -0x2c);
      iStack_110 = *(undefined4 *)(unaff_EBP + -0xb0);
      iStack_10c = *(int *)(unaff_EBP + -0xac);
      iStack_108 = *(undefined4 *)(unaff_EBP + -0xa8);
      *(int **)(unaff_EBP + -0x10) = piVar5;
      iVar1 = (**(code **)(iVar1 + 0x80))
                        (piVar5,*(undefined4 *)(unaff_EBP + -0x50),
                         *(undefined4 *)(unaff_EBP + -0x4c));
      if (iVar1 < 0) {
        FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iVar1 = FUN_00402bc3(unaff_EBP + -0xb0);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
      iVar1 = *(int *)(unaff_EBP + -0x24);
      iVar4 = *(int *)(*(int *)(*(int *)(iVar1 + 0xd8) + 0x1c) + 4 + *(int *)(unaff_EBP + -0x14)) /
              0x3c + 1;
      if (iVar4 < 1) {
        iVar4 = 1;
      }
      else if (0xe < iVar4) {
        iVar4 = 0xe;
      }
      *(uint *)(unaff_EBP + -0x10) = (iVar4 == 0xe) + 2 + iVar4 * 5;
      FUN_00403191(&DAT_00980690);
      piVar5 = *(int **)(unaff_EBP + 8);
      uVar3 = *(undefined4 *)(iVar1 + 0xe0);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      *(undefined4 *)(unaff_EBP + -0x5c) = uVar3;
      if (piVar5 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar5 = *(int **)(unaff_EBP + 8);
      }
      *(int **)(unaff_EBP + -0x20) = piVar5;
      iVar1 = (**(code **)(*piVar5 + 0x84))
                        (*(undefined4 *)(unaff_EBP + 8),*(int *)(unaff_EBP + -0x50) + 7,
                         *(int *)(unaff_EBP + -0x4c) + 0x11,*(undefined4 *)(unaff_EBP + -0x5c),0xff,
                         *(undefined4 *)(unaff_EBP + -0x10),8,0,0,*(undefined4 *)(unaff_EBP + -0x10)
                         ,8,*(undefined4 *)(unaff_EBP + -0xc0),*(undefined4 *)(unaff_EBP + -0xbc),
                         *(undefined4 *)(unaff_EBP + -0xb8),*(undefined4 *)(unaff_EBP + -0xb4));
      if (iVar1 < 0) {
        iStack_108 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_110 = 0x59243c;
        iStack_10c = iVar1;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_108 = 0x59244c;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_108 = 0x592457;
        FUN_00878dfb();
      }
      piVar5 = *(int **)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    if (piVar5 != (int *)0x0) {
      iStack_108 = 0x592614;
      (**(code **)(*piVar5 + 8))();
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x14;
    if (399 < *(int *)(unaff_EBP + -0x14)) break;
    uVar6 = *(uint *)(unaff_EBP + -0x18);
    iVar1 = *(int *)(unaff_EBP + -0x24);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_108 = 0x592645;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


