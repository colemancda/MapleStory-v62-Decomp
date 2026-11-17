/* FUN_0040b33a - 0x0040b33a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0040b33a(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *puVar7;
  undefined1 *extraout_ECX_01;
  int unaff_EBP;
  undefined1 *puStack_e8;
  int *piStack_e4;
  undefined1 *puStack_e0;
  int iStack_dc;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x3c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  iStack_dc = unaff_EBP + -0x18;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puStack_e0 = (undefined1 *)0x40b374;
  piVar3 = (int *)FUN_00679e4e();
  puVar1 = (undefined4 *)*piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (puVar1 == (undefined4 *)0x0) {
    iStack_dc = 0;
  }
  else {
    iStack_dc = *puVar1;
  }
  uVar5 = *(undefined4 *)(unaff_EBP + 0xc);
  puStack_e0 = (undefined1 *)(unaff_EBP + -0x28);
  piStack_e4 = (int *)0x40b392;
  FUN_0041354c();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iStack_dc = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
  *(int *)(unaff_EBP + -0x40) = extraout_ECX + 0x150;
  puStack_e0 = (undefined1 *)0x40b3bd;
  iVar4 = FUN_004152ed();
  if (iVar4 == 0) {
    iStack_dc = 0x40b3d1;
    iVar4 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x24) = iVar4;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar4 != 0) {
      FUN_0040b88c();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_dc = 0x40b3f4;
    FUN_00411990();
    iStack_dc = 0x40b405;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_dc = 0x40b415;
    FUN_00403191();
    iStack_dc = 0;
    puStack_e0 = (undefined1 *)(unaff_EBP + -0x94);
    piStack_e4 = (int *)(unaff_EBP + -0xb4);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_e8 = (undefined1 *)0x40b431;
    uVar5 = FUN_00411641();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_e8;
    FUN_004033a1(uVar5);
    iVar4 = unaff_EBP + -0xc4;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00405a1d(iVar4);
    FUN_00402660();
    FUN_00404a02(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_e0 = (undefined1 *)0x40b466;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x50) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (iVar4 != 0) {
      iStack_dc = 0x40b481;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        iStack_dc = 0x40b48f;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_dc = 0x40b49f;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_dc = 0x40b4aa;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_dc = 0x40b4ba;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_dc = 0x40b4c5;
      FUN_00878dfb();
    }
    puVar7 = (undefined1 *)(unaff_EBP + -0x94);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_dc = 0x40b4d5;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_dc = 0x40b4e0;
      FUN_00878dfb();
      puVar7 = extraout_ECX_00;
    }
    iStack_dc = 0;
    puStack_e8 = (undefined1 *)&puStack_e0;
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_e0;
    piStack_e4 = (int *)0x3b4;
    puStack_e0 = puVar7;
    FUN_00679e4e();
    piStack_e4 = (int *)(unaff_EBP + -0xd4);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_e8 = (undefined1 *)0x40b50b;
    FUN_0040263d();
    puStack_e8 = (undefined1 *)0x40b512;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_e0 = (undefined1 *)0x40b51d;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x48) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar4 != 0) {
      iStack_dc = 0x40b533;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        iStack_dc = 0x40b541;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_dc = 0x40b551;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_dc = 0x40b55c;
      FUN_00878dfb();
    }
    puStack_e0 = &stack0xffffff28;
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff28;
    iStack_dc = 0x3b5;
    piStack_e4 = (int *)0x40b572;
    FUN_00679e4e();
    iStack_dc = unaff_EBP + -0x84;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_e0 = (undefined1 *)0x40b585;
    FUN_0040263d();
    puStack_e0 = (undefined1 *)0x40b58c;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (*(short *)(unaff_EBP + -0x84) == 8) {
      iStack_dc = 0x40b5a6;
      FUN_0087a208();
      iStack_dc = unaff_EBP + -0x38;
      puStack_e0 = (undefined1 *)0x40b5b3;
      FUN_0040b33a();
      iStack_dc = 0x40b5bd;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
      iVar4 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      if (iVar4 == 0) {
        iStack_dc = 0x40b5d6;
        FUN_00878dfb();
      }
      iStack_dc = 0x40b5e3;
      FUN_00404960();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_dc = 0x40b5f0;
      FUN_004035f5();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_004027b3();
      *(undefined4 *)(unaff_EBP + -0x54) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x2c) == 0) {
          iStack_dc = 0x40b60e;
          FUN_00878dfb();
        }
        piStack_e4 = *(int **)(unaff_EBP + -0x2c);
        iStack_dc = unaff_EBP + -0x74;
        puStack_e0 = (undefined1 *)0x1;
        puStack_e8 = (undefined1 *)0x40b621;
        iVar4 = (**(code **)(*piStack_e4 + 0xc))();
        if (iVar4 != 0) break;
        iStack_dc = unaff_EBP + -0x1c;
        puStack_e0 = (undefined1 *)0x40b636;
        FUN_00405a23();
        iStack_dc = unaff_EBP + -0x1c;
        *(undefined1 **)(unaff_EBP + -0x44) = &stack0xffffff28;
        puStack_e0 = (undefined1 *)0x40b647;
        FUN_0040810c();
        iStack_dc = unaff_EBP + -100;
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        puStack_e0 = (undefined1 *)0x40b657;
        FUN_0041198c();
        puStack_e0 = (undefined1 *)0x40b661;
        FUN_0040263d();
        puStack_e0 = (undefined1 *)0x40b668;
        FUN_004048a4();
        iStack_dc = unaff_EBP + -0x24;
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        puStack_e0 = (undefined1 *)0x40b67f;
        FUN_00679e4e();
        if (*(undefined4 **)(unaff_EBP + -0x1c) == (undefined4 *)0x0) {
          iStack_dc = 0;
        }
        else {
          iStack_dc = **(undefined4 **)(unaff_EBP + -0x1c);
        }
        puStack_e0 = (undefined1 *)0x40b69f;
        iVar4 = FUN_0087c71f();
        FUN_00402fa6();
        if (iVar4 != 0) {
          iStack_dc = 0x40b6c5;
          FUN_00403191();
          iStack_dc = unaff_EBP + -100;
          piStack_e4 = (int *)(unaff_EBP + -0x1c);
          *(undefined1 ***)(unaff_EBP + -0x44) = &puStack_e0;
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          puStack_e8 = (undefined1 *)0x40b6e3;
          puStack_e0 = extraout_ECX_01;
          FUN_004059fd();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          piStack_e4 = (int *)0x40b6ef;
          FUN_0040263d();
          piStack_e4 = (int *)0x40b6f6;
          FUN_00404992();
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          iStack_dc = 0x40b706;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            iStack_dc = 0x40b711;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iStack_dc = 0x40b71e;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_dc = 0x40b729;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
        iStack_dc = 0x40b756;
        (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_dc = 0x40b763;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_dc = 0x40b76e;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (*(int *)(unaff_EBP + -0x34) != 0) {
        iStack_dc = 0x40b780;
        FUN_00413059();
      }
    }
    iStack_dc = 0x40b78e;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x10) + 0xc),*(IBinding **)(unaff_EBP + -0x20));
    iStack_dc = 0x40b7a0;
    FUN_00411952();
    iVar4 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_dc = unaff_EBP + 0xc;
    puStack_e0 = (undefined1 *)0x40b7b9;
    uVar5 = FUN_00415341();
    *(undefined4 *)(iVar4 + 0x14) = uVar5;
    iVar4 = *(int *)(unaff_EBP + -0x10);
    uVar5 = (*DAT_0097b704)();
    *(undefined4 *)(iVar4 + 0x10) = uVar5;
    iVar6 = *(int *)(unaff_EBP + -0x10);
    iVar4 = *(int *)(unaff_EBP + 8);
    *(int *)(iVar4 + 4) = iVar6;
    if (iVar6 != 0) {
      iStack_dc = 0x40b7df;
      InterlockedIncrement((LONG *)(iVar6 + 4));
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_dc = 0x40b7f6;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      iStack_dc = 0x40b801;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      iStack_dc = 0x40b812;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
      iStack_dc = 0x40b823;
      (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
    }
    iVar6 = *(int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    iVar4 = *(int *)(unaff_EBP + -0x10);
    uVar5 = (*DAT_0097b704)();
    *(undefined4 *)(iVar4 + 0x10) = uVar5;
    iVar2 = *(int *)(unaff_EBP + -0x10);
    iVar4 = *(int *)(unaff_EBP + 8);
    *(int *)(iVar4 + 4) = iVar2;
    iVar6 = 0;
    if (iVar2 != 0) {
      iStack_dc = 0x40b84f;
      InterlockedIncrement((LONG *)(iVar2 + 4));
      iVar6 = *(int *)(unaff_EBP + -0x10);
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  if (iVar6 != 0) {
    iStack_dc = 0x40b86a;
    FUN_00413059();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


