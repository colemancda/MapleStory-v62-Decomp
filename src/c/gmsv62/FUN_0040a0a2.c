/* FUN_0040a0a2 - 0x0040a0a2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0040a0a2(void)

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
  puStack_e0 = (undefined1 *)0x40a0dc;
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
  piStack_e4 = (int *)0x40a0fa;
  FUN_0041354c();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iStack_dc = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
  *(int *)(unaff_EBP + -0x40) = extraout_ECX + 0xe0;
  puStack_e0 = (undefined1 *)0x40a125;
  iVar4 = FUN_00414717();
  if (iVar4 == 0) {
    iStack_dc = 0x40a139;
    iVar4 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x24) = iVar4;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar4 != 0) {
      FUN_0040a5f4();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_dc = 0x40a15c;
    FUN_004118a4();
    iStack_dc = 0x40a16d;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_dc = 0x40a17d;
    FUN_00403191();
    iStack_dc = 0;
    puStack_e0 = (undefined1 *)(unaff_EBP + -0x94);
    piStack_e4 = (int *)(unaff_EBP + -0xb4);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_e8 = (undefined1 *)0x40a199;
    uVar5 = FUN_00411641();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_e8;
    FUN_004033a1(uVar5);
    iVar4 = unaff_EBP + -0xc4;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00405a1d(iVar4);
    FUN_00402660();
    FUN_00404a02(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_e0 = (undefined1 *)0x40a1ce;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x50) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (iVar4 != 0) {
      iStack_dc = 0x40a1e9;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        iStack_dc = 0x40a1f7;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_dc = 0x40a207;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_dc = 0x40a212;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_dc = 0x40a222;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_dc = 0x40a22d;
      FUN_00878dfb();
    }
    puVar7 = (undefined1 *)(unaff_EBP + -0x94);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_dc = 0x40a23d;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_dc = 0x40a248;
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
    puStack_e8 = (undefined1 *)0x40a273;
    FUN_0040263d();
    puStack_e8 = (undefined1 *)0x40a27a;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_e0 = (undefined1 *)0x40a285;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x48) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar4 != 0) {
      iStack_dc = 0x40a29b;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        iStack_dc = 0x40a2a9;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_dc = 0x40a2b9;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_dc = 0x40a2c4;
      FUN_00878dfb();
    }
    puStack_e0 = &stack0xffffff28;
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff28;
    iStack_dc = 0x3b5;
    piStack_e4 = (int *)0x40a2da;
    FUN_00679e4e();
    iStack_dc = unaff_EBP + -0x84;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_e0 = (undefined1 *)0x40a2ed;
    FUN_0040263d();
    puStack_e0 = (undefined1 *)0x40a2f4;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (*(short *)(unaff_EBP + -0x84) == 8) {
      iStack_dc = 0x40a30e;
      FUN_0087a208();
      iStack_dc = unaff_EBP + -0x38;
      puStack_e0 = (undefined1 *)0x40a31b;
      FUN_0040a0a2();
      iStack_dc = 0x40a325;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
      iVar4 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      if (iVar4 == 0) {
        iStack_dc = 0x40a33e;
        FUN_00878dfb();
      }
      iStack_dc = 0x40a34b;
      FUN_00404960();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_dc = 0x40a358;
      FUN_004035f5();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_004027b3();
      *(undefined4 *)(unaff_EBP + -0x54) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x2c) == 0) {
          iStack_dc = 0x40a376;
          FUN_00878dfb();
        }
        piStack_e4 = *(int **)(unaff_EBP + -0x2c);
        iStack_dc = unaff_EBP + -0x74;
        puStack_e0 = (undefined1 *)0x1;
        puStack_e8 = (undefined1 *)0x40a389;
        iVar4 = (**(code **)(*piStack_e4 + 0xc))();
        if (iVar4 != 0) break;
        iStack_dc = unaff_EBP + -0x1c;
        puStack_e0 = (undefined1 *)0x40a39e;
        FUN_00405a23();
        iStack_dc = unaff_EBP + -0x1c;
        *(undefined1 **)(unaff_EBP + -0x44) = &stack0xffffff28;
        puStack_e0 = (undefined1 *)0x40a3af;
        FUN_0040810c();
        iStack_dc = unaff_EBP + -100;
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        puStack_e0 = (undefined1 *)0x40a3bf;
        FUN_004118a0();
        puStack_e0 = (undefined1 *)0x40a3c9;
        FUN_0040263d();
        puStack_e0 = (undefined1 *)0x40a3d0;
        FUN_004048a4();
        iStack_dc = unaff_EBP + -0x24;
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        puStack_e0 = (undefined1 *)0x40a3e7;
        FUN_00679e4e();
        if (*(undefined4 **)(unaff_EBP + -0x1c) == (undefined4 *)0x0) {
          iStack_dc = 0;
        }
        else {
          iStack_dc = **(undefined4 **)(unaff_EBP + -0x1c);
        }
        puStack_e0 = (undefined1 *)0x40a407;
        iVar4 = FUN_0087c71f();
        FUN_00402fa6();
        if (iVar4 != 0) {
          iStack_dc = 0x40a42d;
          FUN_00403191();
          iStack_dc = unaff_EBP + -100;
          piStack_e4 = (int *)(unaff_EBP + -0x1c);
          *(undefined1 ***)(unaff_EBP + -0x44) = &puStack_e0;
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          puStack_e8 = (undefined1 *)0x40a44b;
          puStack_e0 = extraout_ECX_01;
          FUN_004059fd();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          piStack_e4 = (int *)0x40a457;
          FUN_0040263d();
          piStack_e4 = (int *)0x40a45e;
          FUN_00404992();
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          iStack_dc = 0x40a46e;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            iStack_dc = 0x40a479;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iStack_dc = 0x40a486;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_dc = 0x40a491;
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
        iStack_dc = 0x40a4be;
        (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_dc = 0x40a4cb;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_dc = 0x40a4d6;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (*(int *)(unaff_EBP + -0x34) != 0) {
        iStack_dc = 0x40a4e8;
        FUN_00412fcf();
      }
    }
    iStack_dc = 0x40a4f6;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x10) + 0xc),*(IBinding **)(unaff_EBP + -0x20));
    iStack_dc = 0x40a508;
    FUN_00411866();
    iVar4 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_dc = unaff_EBP + 0xc;
    puStack_e0 = (undefined1 *)0x40a521;
    uVar5 = FUN_0041476b();
    *(undefined4 *)(iVar4 + 0x14) = uVar5;
    iVar4 = *(int *)(unaff_EBP + -0x10);
    uVar5 = (*DAT_0097b704)();
    *(undefined4 *)(iVar4 + 0x10) = uVar5;
    iVar6 = *(int *)(unaff_EBP + -0x10);
    iVar4 = *(int *)(unaff_EBP + 8);
    *(int *)(iVar4 + 4) = iVar6;
    if (iVar6 != 0) {
      iStack_dc = 0x40a547;
      InterlockedIncrement((LONG *)(iVar6 + 4));
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_dc = 0x40a55e;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      iStack_dc = 0x40a569;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      iStack_dc = 0x40a57a;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
      iStack_dc = 0x40a58b;
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
      iStack_dc = 0x40a5b7;
      InterlockedIncrement((LONG *)(iVar2 + 4));
      iVar6 = *(int *)(unaff_EBP + -0x10);
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  if (iVar6 != 0) {
    iStack_dc = 0x40a5d2;
    FUN_00412fcf();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


