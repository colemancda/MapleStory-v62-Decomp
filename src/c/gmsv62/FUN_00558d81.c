/* FUN_00558d81 - 0x00558d81 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00558d81(void)

{
  byte bVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_fc;
  int *piStack_f8;
  undefined *puStack_f4;
  int *piStack_f0;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x5c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x88) = 0;
  bVar1 = DAT_00979398 & 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (bVar1 == 0) {
    DAT_00979398 = DAT_00979398 | 1;
    piStack_f0 = (int *)&DAT_0097812c;
    _DAT_00979388 = 0;
    puStack_f4 = (undefined *)0x558dce;
    FUN_004184ca();
    piStack_f0 = &DAT_0097938c;
    puStack_f4 = (undefined *)0x558de0;
    FUN_00679d86();
    piStack_f0 = (int *)&DAT_00979390;
    puStack_f4 = (undefined *)0x558df1;
    FUN_00679d86();
    piStack_f0 = (int *)&DAT_00979394;
    puStack_f4 = (undefined *)0x558e02;
    FUN_00679d86();
    piStack_f0 = (int *)0x558e0c;
    FUN_008796d0();
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 **)(unaff_EBP + -0x1c) = &DAT_0097938c;
  do {
    piStack_f0 = (int *)(unaff_EBP + -100);
    puStack_f4 = (undefined *)0x558e2e;
    puVar5 = (undefined4 *)FUN_00679d86();
    piStack_f0 = (int *)*puVar5;
    puStack_f4 = (undefined *)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piStack_f8 = (int *)0x558e43;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -100) != 0) {
      piStack_f0 = (int *)0x558e5a;
      FUN_00403384();
    }
    piStack_f0 = (int *)0x0;
    puStack_f4 = (undefined *)0x558e65;
    piStack_f8 = (int *)FUN_00411641();
    *(undefined ***)(unaff_EBP + -0x10) = &puStack_f4;
    iStack_fc = 0x558e71;
    FUN_004033a1();
    piStack_f8 = (int *)(unaff_EBP + -0xd8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_fc = 0x558e81;
    FUN_00559a18();
    iStack_fc = 0x558e88;
    FUN_005593dc();
    iStack_fc = 0x558e8f;
    FUN_00559498();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_f4 = (undefined *)0x558e9a;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x48) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar6 != 0) {
      piStack_f0 = (int *)0x558eb0;
      iVar6 = FUN_0055cc56();
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        piStack_f0 = (int *)0x558ec1;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_f0 = (int *)0x558ed1;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      piStack_f0 = (int *)0x558edc;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      piStack_f0 = (int *)0x558eeb;
      FUN_00878dfb();
    }
    piStack_f0 = (int *)0x558ef7;
    FUN_00559523();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_f0 = (int *)0x558f04;
    FUN_004035f5();
    FUN_004027b3();
    piStack_f0 = (int *)0x558f16;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
    *(undefined1 *)(unaff_EBP + -4) = 10;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    while( true ) {
      piStack_f0 = (int *)(unaff_EBP + -0x74);
      puStack_f4 = *(undefined **)(unaff_EBP + -0x34);
      piStack_f8 = (int *)0x558f2d;
      iVar6 = FUN_00559dbc();
      if (iVar6 == 0) break;
      piStack_f0 = (int *)(unaff_EBP + -0x20);
      puStack_f4 = (undefined *)0x558f45;
      puVar3 = (undefined *)(unaff_EBP + -0x74);
      FUN_00405a23();
      puStack_f4 = puVar3;
      piStack_f0 = (int *)0x0;
      piStack_f8 = (int *)(unaff_EBP + -0x20);
      *(undefined ***)(unaff_EBP + -0x10) = &puStack_f4;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_fc = 0x558f5c;
      FUN_004059fd();
      piStack_f8 = (int *)(unaff_EBP + -0xb8);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_fc = 0x558f6f;
      FUN_005593dc();
      iStack_fc = 0x558f76;
      FUN_00559498();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_f4 = (undefined *)0x558f81;
      iVar6 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x44) = iVar6;
      *(undefined4 *)(unaff_EBP + -0x38) = 0;
      if (iVar6 != 0) {
        piStack_f0 = (int *)0x558f97;
        iVar6 = FUN_0055ccb6();
        if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
          piStack_f0 = (int *)0x558fa8;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piStack_f0 = (int *)0x558fb8;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        piStack_f0 = (int *)0x558fc3;
        FUN_00878dfb();
      }
      piStack_f0 = (int *)0x558fcc;
      cVar4 = FUN_005597f7();
      if (cVar4 == '\0') {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        piStack_f0 = (int *)0x558fe3;
        FUN_00419192();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (*(undefined4 **)(unaff_EBP + -0x20) == (undefined4 *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = **(undefined4 **)(unaff_EBP + -0x20);
        }
        piStack_f0 = (int *)0x558fff;
        FUN_0087a007();
        piStack_f0 = (int *)&DAT_00965698;
        puStack_f4 = (undefined *)0x55900a;
        FUN_0046febf();
        piStack_f0 = (int *)0x559012;
        FUN_0087a007();
        puStack_f4 = (undefined *)0x55901c;
        piStack_f0 = (int *)uVar7;
        FUN_0046febf();
        piStack_f0 = (int *)0x55902d;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_f0 = (int *)0x55903d;
        FUN_00403191();
        piStack_f0 = (int *)0x0;
        puStack_f4 = (undefined *)(unaff_EBP + -0x98);
        piStack_f8 = (int *)(unaff_EBP + -0xa8);
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        iStack_fc = 0x559059;
        uVar7 = FUN_00411641();
        *(int **)(unaff_EBP + -0x40) = &iStack_fc;
        iStack_fc = extraout_ECX_00;
        FUN_004033a1(uVar7);
        iVar6 = unaff_EBP + -200;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        FUN_00405a1d(iVar6);
        FUN_00402660();
        FUN_00404a02(iVar6);
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        puStack_f4 = (undefined *)0x55908e;
        iVar6 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x60) = iVar6;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        if (iVar6 != 0) {
          piStack_f0 = (int *)0x5590a4;
          iVar6 = FUN_00404b30();
          if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
            piStack_f0 = (int *)0x5590b5;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        piStack_f0 = (int *)0x5590c5;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_f0 = (int *)0x5590d0;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        piStack_f0 = (int *)0x5590e0;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_f0 = (int *)0x5590eb;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        piStack_f0 = (int *)0x5590fb;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_f0 = (int *)0x559106;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          piStack_f0 = (int *)0x559115;
          FUN_00878dfb();
        }
        piStack_f0 = (int *)0x559121;
        FUN_00404960();
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        piStack_f0 = (int *)0x55912e;
        FUN_004035f5();
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        if (*(int **)(unaff_EBP + -0x58) != (int *)0x0) {
          piStack_f0 = (int *)0x55913f;
          (**(code **)(**(int **)(unaff_EBP + -0x58) + 8))();
        }
        piStack_f0 = (int *)0x55914c;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x84));
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        *(undefined4 *)(unaff_EBP + -0x50) = 0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x30) == 0) {
            piStack_f0 = (int *)0x559162;
            FUN_00878dfb();
          }
          piStack_f8 = *(int **)(unaff_EBP + -0x30);
          piStack_f0 = (int *)(unaff_EBP + -0x84);
          puStack_f4 = (undefined *)0x1;
          iStack_fc = 0x559178;
          iVar6 = (**(code **)(*piStack_f8 + 0xc))();
          if (iVar6 != 0) break;
          piStack_f0 = (int *)(unaff_EBP + -0x28);
          puStack_f4 = (undefined *)0x559190;
          puVar3 = (undefined *)(unaff_EBP + -0x84);
          FUN_00405a23();
          puStack_f4 = puVar3;
          piStack_f0 = (int *)0x0;
          piStack_f8 = (int *)(unaff_EBP + -0x28);
          *(undefined ***)(unaff_EBP + -0x40) = &puStack_f4;
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          iStack_fc = 0x5591a7;
          FUN_004059fd();
          piStack_f8 = (int *)(unaff_EBP + -0xe8);
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          iStack_fc = 0x5591ba;
          FUN_0040263d();
          iStack_fc = 0x5591c1;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          puStack_f4 = (undefined *)0x5591cc;
          iVar6 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x54) = iVar6;
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
          if (iVar6 != 0) {
            piStack_f0 = (int *)0x5591e2;
            iVar6 = FUN_00404b30();
            if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
              piStack_f0 = (int *)0x5591f3;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          piStack_f0 = (int *)0x559203;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            piStack_f0 = (int *)0x55920e;
            FUN_00878dfb();
          }
          piStack_f0 = *(int **)(unaff_EBP + -0x2c);
          *(undefined1 **)(unaff_EBP + -0x40) = &stack0xffffff14;
          if (piStack_f0 != (int *)0x0) {
            puStack_f4 = (undefined *)0x559226;
            (**(code **)(*piStack_f0 + 4))();
          }
          piStack_f0 = (int *)0x55922e;
          piStack_f0 = (int *)FUN_004091f9();
          puStack_f4 = (undefined *)0x559234;
          piStack_f0 = (int *)FUN_0087a208();
          puStack_f4 = (undefined *)0x55923e;
          FUN_005527ce();
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
            piStack_f0 = (int *)0x55924f;
            (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          if (*(int *)(unaff_EBP + -0x28) != 0) {
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x28) = 0;
          }
          piStack_f0 = (int *)0x55926e;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            piStack_f0 = (int *)0x55927d;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        piStack_f0 = (int *)0x559292;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_f0 = (int *)0x55929d;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
          piStack_f0 = (int *)0x5592ae;
          (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
          piStack_f0 = (int *)0x5592bf;
          (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_00402676();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
        piStack_f0 = (int *)0x5592e1;
        (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
      }
      piStack_f0 = (int *)0x5592fd;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        piStack_f0 = (int *)0x55930c;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_f0 = (int *)0x55931e;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      piStack_f0 = (int *)0x559329;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
      piStack_f0 = (int *)0x55933a;
      (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      piStack_f0 = (int *)0x55934b;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 4;
  } while (*(int *)(unaff_EBP + -0x1c) < 0x979395);
  if (DAT_0097c1a8 == (int *)0x0) {
    piStack_f0 = (int *)0x55936e;
    FUN_00878dfb();
  }
  piVar2 = DAT_0097c1a8;
  piStack_f0 = DAT_0097c1a8;
  puStack_f4 = (undefined *)0x55937b;
  iVar6 = (**(code **)(*DAT_0097c1a8 + 0x24))();
  if (iVar6 < 0) {
    puStack_f4 = &DAT_00963cf8;
    piStack_f8 = piVar2;
    iStack_fc = iVar6;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_f4 = (undefined *)0x559396;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


