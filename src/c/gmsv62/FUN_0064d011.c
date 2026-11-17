/* FUN_0064d011 - 0x0064d011 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0064d46b) */

void FUN_0064d011(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int *extraout_ECX_02;
  int unaff_EBP;
  undefined1 *puStack_104;
  int iStack_100;
  int iStack_fc;
  int *piStack_f8;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff10;
  *(undefined4 *)(unaff_EBP + -0x50) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_f8 = (int *)0x64d040;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_f8 = (int *)0x64d050;
  FUN_00403191();
  piStack_f8 = (int *)0x0;
  iStack_fc = unaff_EBP + -0xa0;
  iStack_100 = unaff_EBP + -0xb0;
  *(undefined1 ***)(unaff_EBP + -0x38) = &puStack_104;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e(&puStack_104,0x8a3);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00405a1d();
  FUN_00402660();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00404a02(unaff_EBP + -0xc0);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_fc = 0x64d0a9;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x5c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (iVar2 != 0) {
    piStack_f8 = (int *)0x64d0bf;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      piStack_f8 = (int *)0x64d0d0;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_f8 = (int *)0x64d0e0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_f8 = (int *)0x64d0eb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_f8 = (int *)0x64d0fb;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_f8 = (int *)0x64d106;
    FUN_00878dfb();
  }
  iVar2 = unaff_EBP + -0xa0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_f8 = (int *)0x64d116;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_f8 = (int *)0x64d121;
    FUN_00878dfb();
    iVar2 = extraout_ECX_00;
  }
  piStack_f8 = (int *)0x0;
  puStack_104 = (undefined1 *)&iStack_fc;
  *(int **)(unaff_EBP + -0x38) = &iStack_fc;
  iStack_100 = 0x85b;
  iStack_fc = iVar2;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_100 = 0x64d13f;
  FUN_00559a18();
  iStack_100 = 0x64d146;
  FUN_005593dc();
  iStack_100 = unaff_EBP + -0xe0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_104 = (undefined1 *)0x64d158;
  FUN_00559498();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_fc = 0x64d163;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x48) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar2 != 0) {
    piStack_f8 = (int *)0x64d179;
    iVar2 = FUN_0055cc56();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      piStack_f8 = (int *)0x64d18a;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_f8 = (int *)0x64d19a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_f8 = (int *)0x64d1a5;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    piStack_f8 = (int *)0x64d1b4;
    FUN_00878dfb();
  }
  piStack_f8 = (int *)0x64d1c0;
  FUN_00559523();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_f8 = (int *)0x64d1cd;
  FUN_004035f5();
  FUN_004027b3();
  piStack_f8 = (int *)0x64d1df;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  do {
    piStack_f8 = (int *)(unaff_EBP + -0x70);
    iStack_fc = *(int *)(unaff_EBP + -0x3c);
    iStack_100 = 0x64d202;
    iVar2 = FUN_00559dbc();
    if (iVar2 == 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piStack_f8 = (int *)0x64d574;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_f8 = (int *)0x64d57f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
        piStack_f8 = (int *)0x64d590;
        (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        piStack_f8 = (int *)0x64d5a1;
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
        piStack_f8 = (int *)0x64d5b2;
        (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
      }
      FUN_0064d5c5();
      return;
    }
    piStack_f8 = (int *)(unaff_EBP + -0x14);
    iStack_fc = 0x64d21a;
    iVar2 = unaff_EBP + -0x70;
    FUN_00405a23();
    iStack_fc = iVar2;
    piStack_f8 = (int *)0x0;
    iStack_100 = unaff_EBP + -0x14;
    *(int **)(unaff_EBP + -0x34) = &iStack_fc;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_104 = (undefined1 *)0x64d231;
    FUN_004059fd();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_100 = 0x64d23d;
    FUN_005593dc();
    iStack_100 = unaff_EBP + -0xd0;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_104 = (undefined1 *)0x64d24f;
    FUN_00559498();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_fc = 0x64d25a;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x4c) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (iVar2 != 0) {
      piStack_f8 = (int *)0x64d270;
      iVar2 = FUN_0055ccb6();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_f8 = (int *)0x64d281;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    piStack_f8 = (int *)0x64d291;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_f8 = (int *)0x64d29c;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      FUN_005e30f3();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00402fa6();
    }
    else {
      piStack_f8 = (int *)(unaff_EBP + -0x24);
      iStack_fc = 0x64d2ca;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (*(undefined4 **)(unaff_EBP + -0x14) == (undefined4 *)0x0) {
        piStack_f8 = (int *)0x0;
      }
      else {
        piStack_f8 = (int *)**(undefined4 **)(unaff_EBP + -0x14);
      }
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      iStack_fc = 0x64d2e9;
      FUN_00454081();
      piStack_f8 = *(int **)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_fc = 0x64d305;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (*(int *)(unaff_EBP + -0x30) != 0) {
        piStack_f8 = (int *)0x64d319;
        FUN_00434e38();
      }
      piStack_f8 = (int *)0x64d323;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_f8 = (int *)0x64d333;
      FUN_00403191();
      piStack_f8 = (int *)0x0;
      iStack_fc = unaff_EBP + -0x80;
      iStack_100 = unaff_EBP + -0x90;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      puStack_104 = (undefined1 *)0x64d34c;
      uVar4 = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x34) = &puStack_104;
      puStack_104 = extraout_ECX_01;
      FUN_00448a17(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      FUN_00405a1d();
      FUN_00402660();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      FUN_00404a02(unaff_EBP + -0xf0);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_fc = 0x64d385;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x40) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      if (iVar2 != 0) {
        piStack_f8 = (int *)0x64d39b;
        iVar2 = FUN_00404b30();
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          piStack_f8 = (int *)0x64d3ac;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      piStack_f8 = (int *)0x64d3bc;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_f8 = (int *)0x64d3c7;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      piStack_f8 = (int *)0x64d3d7;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_f8 = (int *)0x64d3e2;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      piStack_f8 = (int *)0x64d3ef;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_f8 = (int *)0x64d3fa;
        FUN_00878dfb();
      }
      if (*(undefined4 **)(unaff_EBP + -0x14) == (undefined4 *)0x0) {
        piStack_f8 = (int *)0x0;
      }
      else {
        piStack_f8 = (int *)**(undefined4 **)(unaff_EBP + -0x14);
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      iStack_fc = 0x64d415;
      FUN_004184ca();
      piStack_f8 = (int *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      iStack_fc = 0x64d429;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_f8 = *(int **)(unaff_EBP + -0x18);
      if (*(int **)(unaff_EBP + -0x18) == (int *)0x0) {
        piStack_f8 = DAT_00980b4c;
      }
      iStack_fc = 0x64d44c;
      iVar2 = FUN_0087b08f();
      if (iVar2 == 0) {
LAB_0064d499:
        bVar1 = true;
      }
      else {
        piStack_f8 = (int *)(unaff_EBP + -0x44);
        iStack_fc = 0x64d460;
        piVar5 = (int *)FUN_0046fcad();
        piStack_f8 = (int *)*piVar5;
        if ((int *)*piVar5 == (int *)0x0) {
          piStack_f8 = DAT_00980b4c;
        }
        iStack_fc = 0x64d483;
        iVar2 = FUN_0087b08f();
        FUN_00402676();
        bVar1 = false;
        if (iVar2 == 0) goto LAB_0064d499;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      FUN_00402676();
      if (!bVar1) {
        piStack_f8 = (int *)0x64d4b3;
        iVar2 = FUN_0087a208();
        piVar5 = *(int **)(unaff_EBP + -0x2c);
        piStack_f8 = *(int **)(unaff_EBP + -0x2c);
        *(undefined1 **)(unaff_EBP + -0x34) = &stack0xffffff0c;
        if (piStack_f8 != (int *)0x0) {
          iStack_fc = 0x64d4cc;
          (**(code **)(*piStack_f8 + 4))();
          piVar5 = extraout_ECX_02;
        }
        iStack_fc = unaff_EBP + -0x28;
        *(int ***)(unaff_EBP + -0x34) = &piStack_f8;
        iStack_100 = 0x64d4db;
        piStack_f8 = piVar5;
        FUN_00424dbc();
        iStack_100 = 0x64d4e4;
        iStack_fc = iVar2;
        iVar2 = FUN_0064d6fd();
        if (iVar2 == 0) {
          piStack_f8 = (int *)(unaff_EBP + -0x58);
          *(undefined4 *)(unaff_EBP + -0x58) = 0x80004005;
                    /* WARNING: Subroutine does not return */
          iStack_fc = 0x64d4fd;
          __CxxThrowException_8();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      FUN_00402676();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
        piStack_f8 = (int *)0x64d51a;
        (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        piStack_f8 = (int *)0x64d537;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
    }
    piStack_f8 = (int *)0x64d553;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_f8 = (int *)0x64d562;
      FUN_00878dfb();
    }
  } while( true );
}


