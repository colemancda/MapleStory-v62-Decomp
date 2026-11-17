/* FUN_0085fe71 - 0x0085fe71 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0085fe71(void)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  int *piVar9;
  undefined4 *puVar10;
  undefined1 *puStack_1a8;
  undefined4 *puStack_1a4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + 8) == 0) {
    _puStack_1a4 = -3.4773149365173e-310;
    FUN_00878dfb();
  }
  _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0xa4,0x85feb2);
  uVar3 = FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  _puStack_1a4 = (double)CONCAT44(uVar3,0x85febf);
  FUN_004035f5();
  piVar9 = *(int **)(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar9 != (int *)0x0) {
    _puStack_1a4 = (double)CONCAT44(piVar9,0x85fed3);
    (**(code **)(*piVar9 + 8))();
  }
  _puStack_1a4 = (double)CONCAT44((VARIANTARG *)(unaff_EBP + -0xdc),0x85fee0);
  VariantInit((VARIANTARG *)(unaff_EBP + -0xdc));
  *(undefined1 *)(unaff_EBP + -4) = 6;
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x78) == 0) {
      _puStack_1a4 = -3.4773149365216e-310;
      FUN_00878dfb();
    }
    _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0xa8,unaff_EBP + -0xdc);
    puStack_1a8 = (undefined1 *)0x1;
    iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x78) + 0xc))(*(int **)(unaff_EBP + -0x78));
    if (iVar4 != 0) break;
    _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0xdc,unaff_EBP + -0x70);
    puStack_1a8 = (undefined1 *)0x85ff2b;
    FUN_00405a23();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(undefined4 **)(unaff_EBP + -0x70) == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)**(undefined4 **)(unaff_EBP + -0x70);
    }
    puStack_1a4 = (undefined4 *)0x85ff44;
    uVar3 = FUN_0087a208();
    puStack_1a8 = (undefined1 *)puVar6;
    _puStack_1a4 = 0.0;
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
    *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_1a8;
    FUN_004059fd(unaff_EBP + -0x70);
    iVar4 = unaff_EBP + -0x15c;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_0040263d(iVar4);
    FUN_004048a4(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_1a8 = (undefined1 *)0x85ff7e;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xb8) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar4 != 0) {
      _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0xb8,0x85ff9a);
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        _puStack_1a4 = (double)CONCAT44(iVar4,0x85ffab);
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0x15c,0x85ffbb);
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      _puStack_1a4 = (double)CONCAT44(iVar4,0x85ffc6);
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      _puStack_1a4 = -3.47731493653222e-310;
      FUN_00878dfb();
    }
    _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0xa0,0x85ffe0);
    uVar3 = FUN_00404960();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    _puStack_1a4 = (double)CONCAT44(uVar3,0x85ffed);
    FUN_004035f5();
    piVar9 = *(int **)(unaff_EBP + -0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (piVar9 != (int *)0x0) {
      _puStack_1a4 = (double)CONCAT44(piVar9,0x860001);
      (**(code **)(*piVar9 + 8))();
    }
    _puStack_1a4 = (double)CONCAT44((VARIANTARG *)(unaff_EBP + -0xcc),0x86000e);
    VariantInit((VARIANTARG *)(unaff_EBP + -0xcc));
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    *(undefined4 *)(unaff_EBP + -0x9c) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        _puStack_1a4 = -3.47731493653628e-310;
        FUN_00878dfb();
      }
      _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0x9c,unaff_EBP + -0xcc);
      puStack_1a8 = (undefined1 *)0x1;
      iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x18) + 0xc))(*(int **)(unaff_EBP + -0x18));
      if (iVar4 != 0) break;
      _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0xcc,unaff_EBP + -0x6c);
      puStack_1a8 = (undefined1 *)0x860054;
      FUN_00405a23();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      if (*(undefined4 **)(unaff_EBP + -0x6c) == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)**(undefined4 **)(unaff_EBP + -0x6c);
      }
      puStack_1a4 = (undefined4 *)0x86006d;
      uVar3 = FUN_0087a208();
      puStack_1a8 = (undefined1 *)puVar6;
      _puStack_1a4 = 0.0;
      *(undefined4 *)(unaff_EBP + -0x38) = uVar3;
      *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_1a8;
      FUN_004059fd(unaff_EBP + -0x6c);
      iVar4 = unaff_EBP + -0x16c;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_0040263d(iVar4);
      FUN_004048a4(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      puStack_1a8 = (undefined1 *)0x8600a7;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0xac) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x54) = 0;
      if (iVar4 != 0) {
        _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0xac,0x8600c3);
        iVar4 = FUN_00404b30();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          _puStack_1a4 = (double)CONCAT44(iVar4,0x8600d4);
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0x16c,0x8600e4);
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        _puStack_1a4 = (double)CONCAT44(iVar4,0x8600ef);
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x54) == 0) {
        _puStack_1a4 = -3.4773149365469e-310;
        FUN_00878dfb();
      }
      _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0xb4,0x860109);
      uVar3 = FUN_00404960();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      _puStack_1a4 = (double)CONCAT44(uVar3,0x860116);
      FUN_004035f5();
      piVar9 = *(int **)(unaff_EBP + -0xb4);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (piVar9 != (int *)0x0) {
        _puStack_1a4 = (double)CONCAT44(piVar9,0x86012a);
        (**(code **)(*piVar9 + 8))();
      }
      _puStack_1a4 = (double)CONCAT44((VARIANTARG *)(unaff_EBP + -0xec),0x860137);
      VariantInit((VARIANTARG *)(unaff_EBP + -0xec));
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      *(undefined4 *)(unaff_EBP + -0xbc) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x80) == 0) {
          _puStack_1a4 = -3.4773149365513e-310;
          FUN_00878dfb();
        }
        _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0xbc,unaff_EBP + -0xec);
        puStack_1a8 = (undefined1 *)0x1;
        iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x80) + 0xc))(*(int **)(unaff_EBP + -0x80));
        if (iVar4 != 0) break;
        _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0xec,unaff_EBP + -100);
        puStack_1a8 = (undefined1 *)0x860184;
        FUN_00405a23();
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        if (*(undefined4 **)(unaff_EBP + -100) == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = (undefined4 *)**(undefined4 **)(unaff_EBP + -100);
        }
        puStack_1a4 = (undefined4 *)0x86019d;
        uVar3 = FUN_0087a208();
        puStack_1a8 = (undefined1 *)puVar6;
        _puStack_1a4 = 0.0;
        *(undefined4 *)(unaff_EBP + -0x88) = uVar3;
        *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_1a8;
        FUN_004059fd(unaff_EBP + -100);
        iVar4 = unaff_EBP + -0x17c;
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        FUN_0040263d(iVar4);
        FUN_004048a4(iVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        puStack_1a8 = (undefined1 *)0x8601da;
        iVar4 = FUN_004032b4();
        *(int *)(unaff_EBP + -0xb0) = iVar4;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        if (iVar4 != 0) {
          _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0xb0,0x8601f6);
          iVar4 = FUN_00404b30();
          if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
            _puStack_1a4 = (double)CONCAT44(iVar4,0x860207);
            FUN_00878dfb();
          }
        }
        puVar6 = (undefined4 *)(unaff_EBP + -0x17c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        puStack_1a4 = (undefined4 *)0x860217;
        iVar4 = FUN_00402bc3();
        puStack_1a4 = puVar6;
        if (iVar4 < 0) {
          _puStack_1a4 = (double)CONCAT44(iVar4,0x860222);
          FUN_00878dfb();
          puStack_1a4 = extraout_ECX_00;
        }
        puVar6 = (undefined4 *)0x0;
        *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_1a4;
        puStack_1a8 = (undefined1 *)0x8f3;
        FUN_00679e4e(&puStack_1a4);
        puStack_1a8 = (undefined1 *)(unaff_EBP + -0x19c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_0040263d();
        uVar3 = FUN_004048a4();
        _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        puStack_1a8 = (undefined1 *)0x86025a;
        uVar3 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x74) = uVar3;
        puStack_1a8 = (undefined1 *)(unaff_EBP + -0x19c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          _puStack_1a4 = (double)CONCAT44(iVar4,0x86027a);
          FUN_00878dfb();
        }
        puVar6 = (undefined4 *)0x0;
        *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_1a4;
        puStack_1a8 = (undefined1 *)0x8f5;
        FUN_00679e4e(&puStack_1a4);
        puStack_1a8 = (undefined1 *)(unaff_EBP + -0x18c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_0040263d();
        uVar3 = FUN_004048a4();
        _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        puStack_1a8 = (undefined1 *)0x8602b2;
        uVar3 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x5c) = uVar3;
        puStack_1a8 = (undefined1 *)(unaff_EBP + -0x18c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          _puStack_1a4 = (double)CONCAT44(iVar4,0x8602d2);
          FUN_00878dfb();
        }
        puVar6 = (undefined4 *)0x0;
        *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_1a4;
        puStack_1a8 = (undefined1 *)0x8f4;
        FUN_00679e4e(&puStack_1a4);
        puStack_1a8 = (undefined1 *)(unaff_EBP + -0x11c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_0040263d();
        uVar3 = FUN_004048a4();
        _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        puStack_1a8 = (undefined1 *)0x86030a;
        uVar3 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x60) = uVar3;
        puStack_1a8 = (undefined1 *)(unaff_EBP + -0x11c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          _puStack_1a4 = (double)CONCAT44(iVar4,0x86032a);
          FUN_00878dfb();
        }
        puVar6 = (undefined4 *)0x0;
        *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_1a4;
        puStack_1a8 = (undefined1 *)0x8f6;
        FUN_00679e4e(&puStack_1a4);
        puStack_1a8 = (undefined1 *)(unaff_EBP + -0xfc);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_0040263d();
        uVar3 = FUN_004048a4();
        _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        puStack_1a8 = (undefined1 *)0x860362;
        uVar3 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x7c) = uVar3;
        puStack_1a8 = (undefined1 *)(unaff_EBP + -0xfc);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          _puStack_1a4 = (double)CONCAT44(iVar4,0x860382);
          FUN_00878dfb();
        }
        puVar6 = (undefined4 *)0x0;
        *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_1a4;
        puStack_1a8 = (undefined1 *)0xb56;
        FUN_00679e4e(&puStack_1a4);
        puStack_1a8 = (undefined1 *)(unaff_EBP + -0x13c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_0040263d();
        uVar3 = FUN_004048a4();
        _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        puStack_1a8 = (undefined1 *)0x8603ba;
        uVar3 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x58) = uVar3;
        puStack_1a8 = (undefined1 *)(unaff_EBP + -0x13c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          _puStack_1a4 = (double)CONCAT44(iVar4,0x8603da);
          FUN_00878dfb();
        }
        puVar6 = (undefined4 *)0x0;
        *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_1a4;
        puStack_1a8 = (undefined1 *)0xb57;
        FUN_00679e4e(&puStack_1a4);
        puStack_1a8 = (undefined1 *)(unaff_EBP + -0x10c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_0040263d();
        uVar3 = FUN_004048a4();
        _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        puStack_1a8 = (undefined1 *)0x860412;
        uVar3 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
        puStack_1a8 = (undefined1 *)(unaff_EBP + -0x10c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          _puStack_1a4 = (double)CONCAT44(iVar4,0x860432);
          FUN_00878dfb();
        }
        puVar6 = (undefined4 *)0x0;
        *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_1a4;
        puStack_1a8 = (undefined1 *)0x10fd;
        FUN_00679e4e(&puStack_1a4);
        puStack_1a8 = (undefined1 *)(unaff_EBP + -300);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_0040263d();
        uVar3 = FUN_004048a4();
        _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        puStack_1a8 = (undefined1 *)0x86046a;
        iVar4 = FUN_00412550();
        puStack_1a8 = (undefined1 *)(unaff_EBP + -300);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          _puStack_1a4 = (double)CONCAT44(iVar5,0x86048f);
          FUN_00878dfb();
        }
        puVar6 = (undefined4 *)0x0;
        *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_1a4;
        puStack_1a8 = (undefined1 *)0x773;
        FUN_00679e4e(&puStack_1a4);
        puStack_1a8 = (undefined1 *)(unaff_EBP + -0x14c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_0040263d();
        uVar3 = FUN_004048a4();
        _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        puStack_1a8 = (undefined1 *)0x8604c7;
        uVar3 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
        puStack_1a8 = (undefined1 *)(unaff_EBP + -0x14c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          _puStack_1a4 = (double)CONCAT44(iVar5,0x8604e7);
          FUN_00878dfb();
        }
        puVar6 = (undefined4 *)0x0;
        *(undefined4 ***)(unaff_EBP + -0x68) = &puStack_1a4;
        puStack_1a8 = (undefined1 *)0x774;
        FUN_00679e4e(&puStack_1a4);
        puStack_1a8 = (undefined1 *)(unaff_EBP + -0x98);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_0040263d();
        uVar3 = FUN_004048a4();
        _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        puStack_1a8 = (undefined1 *)0x86051f;
        uVar3 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x68) = uVar3;
        puStack_1a8 = (undefined1 *)(unaff_EBP + -0x98);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          _puStack_1a4 = (double)CONCAT44(iVar5,0x86053f);
          FUN_00878dfb();
        }
        _puStack_1a4 = 1.27324086924922e-312;
        iVar5 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x30) = iVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          _puStack_1a4 = (double)CONCAT44(0x86055d,puStack_1a4);
          iVar5 = FUN_00860fac();
        }
        *(int *)(unaff_EBP + -0x44) = iVar5;
        if (iVar5 != 0) {
          _puStack_1a4 = (double)CONCAT44((LONG *)(iVar5 + 4),0x860572);
          InterlockedIncrement((LONG *)(iVar5 + 4));
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        if (*(int *)(unaff_EBP + -0x58) != 0) {
          _puStack_1a4 = (double)*(int *)(unaff_EBP + -0x58) * _DAT_008e8cd0;
          puStack_1a8 = (undefined1 *)0x860594;
          FUN_005d0f1a();
        }
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          _puStack_1a4 = (double)*(int *)(unaff_EBP + -0x14) * _DAT_008e8cd0;
          puStack_1a8 = (undefined1 *)0x8605b2;
          FUN_005d0f1a();
        }
        if ((iVar4 != 0) != 0) {
          _puStack_1a4 = (double)CONCAT44((uint)(iVar4 != 0),0x8605c2);
          FUN_0079d760();
        }
        _puStack_1a4 = 1.86739969136672e-312;
        iVar4 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x30) = iVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x32;
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          _puStack_1a4 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x44),
                                          *(undefined4 *)(unaff_EBP + -0x68));
          puStack_1a8 = *(undefined1 **)(unaff_EBP + -0x28);
          iVar4 = FUN_008610ec(*(undefined4 *)(unaff_EBP + -0x88),*(undefined4 *)(unaff_EBP + -0x74)
                               ,*(undefined4 *)(unaff_EBP + -0x5c),
                               *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x7c)
                               ,*(undefined4 *)(unaff_EBP + -0x3c),
                               *(undefined4 *)(unaff_EBP + -0x38));
        }
        *(int *)(unaff_EBP + -0x4c) = iVar4;
        if (iVar4 != 0) {
          _puStack_1a4 = (double)CONCAT44((LONG *)(iVar4 + 4),0x860616);
          InterlockedIncrement((LONG *)(iVar4 + 4));
        }
        iVar4 = *(int *)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0x50,0x860629);
        FUN_00861c8c();
        _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0x50,unaff_EBP + -0x88);
        puStack_1a8 = (undefined1 *)0x86063f;
        FUN_00862fb4();
        _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0x50,*(undefined4 *)(unaff_EBP + -0x7c));
        puStack_1a8 = *(undefined1 **)(unaff_EBP + -0x60);
        FUN_00861b8b(*(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x5c));
        iVar5 = *(int *)(iVar4 + 0x34);
        piVar9 = (int *)(iVar4 + 0x34);
        if (iVar5 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar5 + -4);
        }
        *(int *)(unaff_EBP + -0x14) = iVar4;
        if (iVar4 <= *(int *)(unaff_EBP + -0x38)) {
          puVar1 = (undefined1 *)(*(int *)(unaff_EBP + -0x38) + 1);
          _puStack_1a4 = (double)((ulonglong)(unaff_EBP - 0x81) << 0x20);
          puStack_1a8 = puVar1;
          FUN_00862cd4();
          _puStack_1a4 = (double)((ulonglong)(unaff_EBP - 0x3d) << 0x20);
          puStack_1a8 = puVar1;
          FUN_00862dc0();
          iVar4 = *(int *)(unaff_EBP + -0x14);
          do {
            *(undefined4 *)(*piVar9 + iVar4 * 8) = 0x7fffffff;
            *(undefined4 *)(*piVar9 + 4 + iVar4 * 8) = 0x80000000;
            iVar4 = iVar4 + 1;
          } while (iVar4 <= *(int *)(unaff_EBP + -0x38));
        }
        iVar4 = *(int *)(unaff_EBP + -0x74);
        piVar9 = (int *)(*piVar9 + *(int *)(unaff_EBP + -0x38) * 8);
        if (iVar4 < *(int *)(unaff_EBP + -0x60)) {
          iVar5 = iVar4;
          iVar4 = *(int *)(unaff_EBP + -0x60);
        }
        else {
          iVar5 = *(int *)(unaff_EBP + -0x60);
        }
        iVar8 = *(int *)(unaff_EBP + -0x7c);
        if (*(int *)(unaff_EBP + -0x5c) < iVar8) {
          *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x5c);
        }
        else {
          *(int *)(unaff_EBP + -0x14) = iVar8;
          iVar8 = *(int *)(unaff_EBP + -0x5c);
        }
        *(int *)(unaff_EBP + -0x58) = iVar8;
        iVar8 = *(int *)(unaff_EBP + -0x20);
        if (iVar5 + 0x1e < *(int *)(iVar8 + 0x24)) {
          *(int *)(iVar8 + 0x24) = iVar5 + 0x1e;
        }
        if (iVar5 < *piVar9) {
          *piVar9 = iVar5;
        }
        if (*(int *)(iVar8 + 0x2c) < iVar4 + -0x1e) {
          *(int *)(iVar8 + 0x2c) = iVar4 + -0x1e;
        }
        if (piVar9[1] < iVar4) {
          piVar9[1] = iVar4;
        }
        iVar4 = *(int *)(unaff_EBP + -0x14) + -300;
        if (iVar4 < *(int *)(iVar8 + 0x28)) {
          *(int *)(iVar8 + 0x28) = iVar4;
        }
        iVar4 = *(int *)(unaff_EBP + -0x58) + 10;
        if (*(int *)(iVar8 + 0x30) < iVar4) {
          *(int *)(iVar8 + 0x30) = iVar4;
        }
        iVar4 = *(int *)(*(int *)(iVar8 + 0x3c) + *(int *)(unaff_EBP + -0x38) * 4);
        if ((iVar4 == 0) || (*(int *)(iVar4 + -4) == 0)) {
          _puStack_1a4 = -NAN;
          puVar6 = (undefined4 *)FUN_0045f1e3();
          *puVar6 = *(undefined4 *)(unaff_EBP + -0x38);
        }
        _puStack_1a4 = -NAN;
        puVar7 = (undefined4 *)FUN_0047cf98();
        *puVar7 = *(undefined4 *)(unaff_EBP + -0x88);
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        if (*(int *)(unaff_EBP + -0x4c) != 0) {
          _puStack_1a4 = 4.33974763446111e-317;
          FUN_004cd642();
          *(undefined4 *)(unaff_EBP + -0x4c) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        if (*(int *)(unaff_EBP + -0x44) != 0) {
          _puStack_1a4 = 4.33975800983967e-317;
          FUN_00862044();
          *(undefined4 *)(unaff_EBP + -0x44) = 0;
        }
        piVar9 = *(int **)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        if (piVar9 != (int *)0x0) {
          _puStack_1a4 = (double)CONCAT44(piVar9,0x8607ac);
          (**(code **)(*piVar9 + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        if (*(int *)(unaff_EBP + -100) != 0) {
          _puStack_1a4 = (double)CONCAT44(0x8607bc,puStack_1a4);
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -100) = 0;
        }
        _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0xec,0x8607cb);
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          _puStack_1a4 = (double)CONCAT44(iVar4,0x8607da);
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0xec,0x8607ef);
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        _puStack_1a4 = (double)CONCAT44(iVar4,0x8607fa);
        FUN_00878dfb();
      }
      piVar9 = *(int **)(unaff_EBP + -0x80);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      if (piVar9 != (int *)0x0) {
        _puStack_1a4 = (double)CONCAT44(piVar9,0x86080b);
        (**(code **)(*piVar9 + 8))();
      }
      piVar9 = *(int **)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      if (piVar9 != (int *)0x0) {
        _puStack_1a4 = (double)CONCAT44(piVar9,0x86081c);
        (**(code **)(*piVar9 + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (*(int *)(unaff_EBP + -0x6c) != 0) {
        _puStack_1a4 = (double)CONCAT44(0x86082c,puStack_1a4);
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x6c) = 0;
      }
      _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0xcc,0x86083b);
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        _puStack_1a4 = (double)CONCAT44(iVar4,0x86084a);
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0xcc,0x86085f);
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      _puStack_1a4 = (double)CONCAT44(iVar4,0x86086a);
      FUN_00878dfb();
    }
    piVar9 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (piVar9 != (int *)0x0) {
      _puStack_1a4 = (double)CONCAT44(piVar9,0x86087b);
      (**(code **)(*piVar9 + 8))();
    }
    piVar9 = *(int **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (piVar9 != (int *)0x0) {
      _puStack_1a4 = (double)CONCAT44(piVar9,0x86088c);
      (**(code **)(*piVar9 + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (*(int *)(unaff_EBP + -0x70) != 0) {
      _puStack_1a4 = (double)CONCAT44(0x86089c,puStack_1a4);
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x70) = 0;
    }
    _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0xdc,0x8608ab);
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      _puStack_1a4 = (double)CONCAT44(iVar4,0x8608ba);
      FUN_00878dfb();
    }
  }
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    puVar6 = (undefined4 *)0x0;
    *(undefined4 ***)(unaff_EBP + -0x30) = &puStack_1a4;
    puStack_1a8 = (undefined1 *)0x601;
    FUN_00679e4e(&puStack_1a4);
    puStack_1a8 = (undefined1 *)(unaff_EBP + -0x98);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_0040263d();
    uVar3 = FUN_004048a4();
    _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    puStack_1a8 = (undefined1 *)0x860900;
    iVar4 = FUN_00412550();
    puStack_1a8 = (undefined1 *)(unaff_EBP + -0x98);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      _puStack_1a4 = (double)CONCAT44(iVar5,0x860925);
      FUN_00878dfb();
    }
    if (iVar4 != 0) {
      puVar6 = (undefined4 *)0x0;
      *(undefined4 ***)(unaff_EBP + -0x30) = &puStack_1a4;
      puStack_1a8 = (undefined1 *)0x5fd;
      FUN_00679e4e(&puStack_1a4);
      puStack_1a8 = (undefined1 *)(unaff_EBP + -0x98);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_0040263d();
      uVar3 = FUN_004048a4();
      _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      puStack_1a8 = (undefined1 *)0x860965;
      iVar4 = FUN_00412550();
      puStack_1a8 = (undefined1 *)(unaff_EBP + -0x98);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        _puStack_1a4 = (double)CONCAT44(iVar5,0x860984);
        FUN_00878dfb();
      }
      puVar6 = (undefined4 *)0x0;
      *(undefined4 ***)(unaff_EBP + -0x30) = &puStack_1a4;
      puStack_1a8 = (undefined1 *)0x5fe;
      FUN_00679e4e(&puStack_1a4);
      puStack_1a8 = (undefined1 *)(unaff_EBP + -0x98);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_0040263d();
      uVar3 = FUN_004048a4();
      _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      puStack_1a8 = (undefined1 *)0x8609bc;
      uVar3 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
      puStack_1a8 = (undefined1 *)(unaff_EBP + -0x98);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        _puStack_1a4 = (double)CONCAT44(iVar5,0x8609dc);
        FUN_00878dfb();
      }
      puVar6 = (undefined4 *)0x0;
      *(undefined4 ***)(unaff_EBP + -0x30) = &puStack_1a4;
      puStack_1a8 = (undefined1 *)0x5ff;
      FUN_00679e4e(&puStack_1a4);
      puStack_1a8 = (undefined1 *)(unaff_EBP + -0x98);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_0040263d();
      uVar3 = FUN_004048a4();
      _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      puStack_1a8 = (undefined1 *)0x860a14;
      uVar3 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
      puStack_1a8 = (undefined1 *)(unaff_EBP + -0x98);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        _puStack_1a4 = (double)CONCAT44(iVar5,0x860a34);
        FUN_00878dfb();
      }
      puVar6 = (undefined4 *)0x0;
      *(undefined4 ***)(unaff_EBP + -0x30) = &puStack_1a4;
      puStack_1a8 = (undefined1 *)0x600;
      FUN_00679e4e(&puStack_1a4);
      puStack_1a8 = (undefined1 *)(unaff_EBP + -0x98);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_0040263d();
      uVar3 = FUN_004048a4();
      _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      puStack_1a8 = (undefined1 *)0x860a6c;
      uVar3 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x68) = uVar3;
      puStack_1a8 = (undefined1 *)(unaff_EBP + -0x98);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        _puStack_1a4 = (double)CONCAT44(iVar5,0x860a8c);
        FUN_00878dfb();
      }
      if (iVar4 == 0) {
        iVar5 = *(int *)(unaff_EBP + -0x20);
      }
      else {
        iVar5 = *(int *)(unaff_EBP + -0x20);
        if (*(int *)(iVar5 + 0x24) < iVar4 + 0x14) {
          *(int *)(iVar5 + 0x24) = iVar4 + 0x14;
        }
      }
      if ((*(int *)(unaff_EBP + -0x3c) != 0) &&
         (iVar4 = *(int *)(unaff_EBP + -0x3c) + -0x14, iVar4 < *(int *)(iVar5 + 0x2c))) {
        *(int *)(iVar5 + 0x2c) = iVar4;
      }
      if ((*(int *)(unaff_EBP + -0x28) != 0) &&
         (iVar4 = *(int *)(unaff_EBP + -0x28) + 0x41, *(int *)(iVar5 + 0x28) < iVar4)) {
        *(int *)(iVar5 + 0x28) = iVar4;
      }
      iVar4 = *(int *)(unaff_EBP + -0x68);
      if ((iVar4 != 0) && (iVar4 < *(int *)(iVar5 + 0x30))) {
        *(int *)(iVar5 + 0x30) = iVar4;
      }
      goto LAB_00860adb;
    }
  }
  iVar5 = *(int *)(unaff_EBP + -0x20);
LAB_00860adb:
  *(undefined4 *)(iVar5 + 0x40) = 0;
  iVar4 = 0;
  while( true ) {
    if (*(int *)(iVar5 + 0x34) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(iVar5 + 0x34) + -4);
    }
    if (iVar8 <= iVar4) goto LAB_00860b07;
    if (*(int *)(*(int *)(iVar5 + 0x34) + iVar4 * 8) <=
        *(int *)(*(int *)(iVar5 + 0x34) + 4 + iVar4 * 8)) break;
    iVar4 = iVar4 + 1;
  }
  *(int *)(iVar5 + 0x40) = iVar4;
LAB_00860b07:
  iVar4 = *(int *)(iVar5 + 0x88);
  *(int *)(unaff_EBP + -0x18) = iVar4;
  if (iVar4 != 0) {
    do {
      iVar4 = *(int *)(unaff_EBP + -0x18);
      iVar5 = *(int *)(iVar4 + 4);
      iVar4 = *(int *)((-(uint)(iVar4 != 0) & iVar4 - 0x10U) + 4);
      *(uint *)(unaff_EBP + -0x18) = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
      *(int *)(unaff_EBP + -0x3c) = iVar5;
      *(undefined4 *)(unaff_EBP + -0x44) = 0;
      *(undefined4 *)(unaff_EBP + -0x4c) = 0;
      iVar4 = *(int *)(iVar5 + 0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      if (iVar4 == 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
        iVar4 = unaff_EBP + -0x34;
      }
      else {
        _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0x48,(undefined4 *)(iVar5 + 0x4c));
        puStack_1a8 = (undefined1 *)0x860b64;
        FUN_004d2051();
        iVar4 = unaff_EBP + -0x48;
      }
      bVar2 = *(byte *)(unaff_EBP + -0x10);
      *(undefined4 *)(iVar5 + 0x4c) = *(undefined4 *)(iVar4 + 4);
      if (((bVar2 & 1) != 0) &&
         (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe,
         *(int *)(unaff_EBP + -0x30) != 0)) {
        _puStack_1a4 = 4.34025998053585e-317;
        FUN_004cd642();
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
      }
      puVar7 = (undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 0x50);
      if (*(int *)(*(int *)(unaff_EBP + -0x3c) + 0x50) == 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 2;
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
        iVar4 = unaff_EBP + -0x2c;
      }
      else {
        _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0x50,puVar7);
        puStack_1a8 = (undefined1 *)0x860bb1;
        FUN_004d2051();
        iVar4 = unaff_EBP + -0x50;
      }
      bVar2 = *(byte *)(unaff_EBP + -0x10);
      *puVar7 = *(undefined4 *)(iVar4 + 4);
      if (((bVar2 & 2) != 0) &&
         (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd,
         *(int *)(unaff_EBP + -0x28) != 0)) {
        _puStack_1a4 = 4.34029802359058e-317;
        FUN_004cd642();
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      if (*(int *)(unaff_EBP + -0x4c) != 0) {
        _puStack_1a4 = 4.34030839896914e-317;
        FUN_004cd642();
        *(undefined4 *)(unaff_EBP + -0x4c) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int *)(unaff_EBP + -0x44) != 0) {
        _puStack_1a4 = 4.3403187743477e-317;
        FUN_004cd642();
        *(undefined4 *)(unaff_EBP + -0x44) = 0;
      }
    } while (*(int *)(unaff_EBP + -0x18) != 0);
    iVar5 = *(int *)(unaff_EBP + -0x20);
  }
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    _puStack_1a4 = (double)CONCAT44(0x860c26,puStack_1a4);
    iVar4 = FUN_0040cf4d();
    *(int *)(unaff_EBP + -0x14) = iVar4;
    _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0x3d,iVar4 + 1);
    *(int *)(unaff_EBP + -0x28) = iVar5 + 0xa8;
    puStack_1a8 = (undefined1 *)0x860c3d;
    FUN_00863135();
    *(undefined4 *)(unaff_EBP + -0x24) = 1;
    if (0 < *(int *)(unaff_EBP + -0x14)) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0x1c;
      do {
        _puStack_1a4 = (double)CONCAT44(0x860c5b,puStack_1a4);
        FUN_0087a1b0();
        _puStack_1a4 = 0.0;
        puStack_1a8 = &stack0xfffffe64;
        uVar3 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x24));
        *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_1a8;
        FUN_004033a1(uVar3);
        iVar4 = unaff_EBP + -0x98;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_0040263d(iVar4);
        FUN_004048a4(iVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x41;
        puStack_1a8 = (undefined1 *)0x860c99;
        iVar4 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x3c) = iVar4;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        if (iVar4 != 0) {
          _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0x3c,0x860caf);
          iVar4 = FUN_00404b30();
          if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
            _puStack_1a4 = (double)CONCAT44(iVar4,0x860cc0);
            FUN_00878dfb();
          }
        }
        puVar6 = (undefined4 *)(unaff_EBP + -0x98);
        *(undefined1 *)(unaff_EBP + -4) = 0x43;
        puStack_1a4 = (undefined4 *)0x860cd0;
        iVar4 = FUN_00402bc3();
        puVar7 = puVar6;
        if (iVar4 < 0) {
          puStack_1a4 = (undefined4 *)0x860cdb;
          FUN_00878dfb();
          puVar7 = extraout_ECX_01;
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          *(undefined1 *)(unaff_EBP + -4) = 6;
        }
        else {
          puVar10 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + **(int **)(unaff_EBP + -0x28));
          puVar6 = (undefined4 *)0x0;
          *puVar10 = *(undefined4 *)(unaff_EBP + -0x24);
          *(undefined4 ***)(unaff_EBP + -0x30) = &puStack_1a4;
          puStack_1a8 = (undefined1 *)0x8f7;
          puStack_1a4 = puVar7;
          FUN_00679e4e(&puStack_1a4);
          puStack_1a8 = (undefined1 *)(unaff_EBP + -0x14c);
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          FUN_0040263d();
          uVar3 = FUN_004048a4();
          _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x45;
          puStack_1a8 = (undefined1 *)0x860d2e;
          iVar4 = FUN_00412550();
          puVar10[1] = (uint)(iVar4 != 0);
          puStack_1a8 = (undefined1 *)(unaff_EBP + -0x14c);
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            _puStack_1a4 = (double)CONCAT44(iVar4,0x860d54);
            FUN_00878dfb();
          }
          puVar6 = (undefined4 *)0x0;
          *(undefined4 ***)(unaff_EBP + -0x30) = &puStack_1a4;
          puStack_1a8 = (undefined1 *)0x8f8;
          FUN_00679e4e(&puStack_1a4);
          puStack_1a8 = (undefined1 *)(unaff_EBP + -300);
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          FUN_0040263d();
          uVar3 = FUN_004048a4();
          _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x47;
          puStack_1a8 = (undefined1 *)0x860d8c;
          iVar4 = FUN_00412550();
          puVar10[2] = (uint)(iVar4 != 0);
          puStack_1a8 = (undefined1 *)(unaff_EBP + -300);
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            _puStack_1a4 = (double)CONCAT44(iVar4,0x860db2);
            FUN_00878dfb();
          }
          puVar6 = (undefined4 *)0x0;
          *(undefined4 ***)(unaff_EBP + -0x30) = &puStack_1a4;
          puStack_1a8 = (undefined1 *)0x3ca;
          FUN_00679e4e(&puStack_1a4);
          puStack_1a8 = (undefined1 *)(unaff_EBP + -0x10c);
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          FUN_0040263d();
          uVar3 = FUN_004048a4();
          _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x49;
          puStack_1a8 = (undefined1 *)0x860dea;
          uVar3 = FUN_00412550();
          puVar10[3] = uVar3;
          puStack_1a8 = (undefined1 *)(unaff_EBP + -0x10c);
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            _puStack_1a4 = (double)CONCAT44(iVar4,0x860e0a);
            FUN_00878dfb();
          }
          puVar6 = (undefined4 *)0x0;
          *(undefined4 ***)(unaff_EBP + -0x30) = &puStack_1a4;
          puStack_1a8 = (undefined1 *)0x8f5;
          FUN_00679e4e(&puStack_1a4);
          puStack_1a8 = (undefined1 *)(unaff_EBP + -0x13c);
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          FUN_0040263d();
          uVar3 = FUN_004048a4();
          _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x4b;
          puStack_1a8 = (undefined1 *)0x860e42;
          uVar3 = FUN_00412550();
          puVar10[4] = uVar3;
          puStack_1a8 = (undefined1 *)(unaff_EBP + -0x13c);
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            _puStack_1a4 = (double)CONCAT44(iVar4,0x860e62);
            FUN_00878dfb();
          }
          puVar6 = (undefined4 *)0x0;
          *(undefined4 ***)(unaff_EBP + -0x30) = &puStack_1a4;
          puStack_1a8 = (undefined1 *)0x8f6;
          FUN_00679e4e(&puStack_1a4);
          puStack_1a8 = (undefined1 *)(unaff_EBP + -0xfc);
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          FUN_0040263d();
          uVar3 = FUN_004048a4();
          _puStack_1a4 = (double)CONCAT44(puVar6,uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x4d;
          puStack_1a8 = (undefined1 *)0x860e9a;
          uVar3 = FUN_00412550();
          puVar10[5] = uVar3;
          puStack_1a8 = (undefined1 *)(unaff_EBP + -0xfc);
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            _puStack_1a4 = (double)CONCAT44(iVar4,0x860eba);
            FUN_00878dfb();
          }
          *(undefined4 ***)(unaff_EBP + -0x30) = &puStack_1a4;
          puStack_1a8 = (undefined1 *)0x6db;
          FUN_00679e4e(&puStack_1a4);
          puStack_1a8 = (undefined1 *)(unaff_EBP + -0x11c);
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          FUN_0040263d();
          puStack_1a4 = (undefined4 *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x4f;
          puStack_1a8 = (undefined1 *)0x860ef2;
          uVar3 = FUN_00412550();
          puVar10[6] = uVar3;
          puStack_1a8 = (undefined1 *)(unaff_EBP + -0x11c);
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            puStack_1a4 = (undefined4 *)0x860f12;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
            puStack_1a4 = (undefined4 *)0x860f23;
            (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
          }
        }
        *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x1c;
      } while (*(int *)(unaff_EBP + -0x24) <= *(int *)(unaff_EBP + -0x14));
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  _puStack_1a4 = (double)CONCAT44(unaff_EBP + -0xdc,0x860f46);
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    _puStack_1a4 = (double)CONCAT44(iVar4,0x860f51);
    FUN_00878dfb();
  }
  piVar9 = *(int **)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar9 != (int *)0x0) {
    _puStack_1a4 = (double)CONCAT44(piVar9,0x860f62);
    (**(code **)(*piVar9 + 8))();
  }
  piVar9 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar9 != (int *)0x0) {
    _puStack_1a4 = (double)CONCAT44(piVar9,0x860f73);
    (**(code **)(*piVar9 + 8))();
  }
  piVar9 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar9 != (int *)0x0) {
    _puStack_1a4 = (double)CONCAT44(piVar9,0x860f84);
    (**(code **)(*piVar9 + 8))();
  }
  piVar9 = *(int **)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar9 != (int *)0x0) {
    _puStack_1a4 = (double)CONCAT44(piVar9,0x860f95);
    (**(code **)(*piVar9 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


