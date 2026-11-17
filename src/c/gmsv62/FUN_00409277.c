/* FUN_00409277 - 0x00409277 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00409277(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *puVar6;
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
  puStack_e0 = (undefined1 *)0x4092b1;
  puVar2 = (undefined4 *)FUN_00679d86();
  iStack_dc = *puVar2;
  uVar4 = *(undefined4 *)(unaff_EBP + 0xc);
  puStack_e0 = (undefined1 *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_e4 = (int *)0x4092c5;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    iStack_dc = 0x4092dc;
    FUN_00403384();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iStack_dc = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  *(int *)(unaff_EBP + -0x40) = extraout_ECX + 0x88;
  puStack_e0 = (undefined1 *)0x4092fd;
  iVar3 = FUN_004141af();
  if (iVar3 == 0) {
    iStack_dc = 0x409311;
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x24) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar3 != 0) {
      FUN_004097c9();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_dc = 0x409334;
    FUN_004117d9();
    iStack_dc = 0x409345;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_dc = 0x409355;
    FUN_00403191();
    iStack_dc = 0;
    puStack_e0 = (undefined1 *)(unaff_EBP + -0x94);
    piStack_e4 = (int *)(unaff_EBP + -0xb4);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_e8 = (undefined1 *)0x409371;
    uVar4 = FUN_00411641();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_e8;
    FUN_004033a1(uVar4);
    iVar3 = unaff_EBP + -0xc4;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_e0 = (undefined1 *)0x4093a6;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x50) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (iVar3 != 0) {
      iStack_dc = 0x4093c1;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_dc = 0x4093cf;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_dc = 0x4093df;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_dc = 0x4093ea;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_dc = 0x4093fa;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_dc = 0x409405;
      FUN_00878dfb();
    }
    puVar6 = (undefined1 *)(unaff_EBP + -0x94);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_dc = 0x409415;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_dc = 0x409420;
      FUN_00878dfb();
      puVar6 = extraout_ECX_00;
    }
    iStack_dc = 0;
    puStack_e8 = (undefined1 *)&puStack_e0;
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_e0;
    piStack_e4 = (int *)0x3b4;
    puStack_e0 = puVar6;
    FUN_00679e4e();
    piStack_e4 = (int *)(unaff_EBP + -0xd4);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_e8 = (undefined1 *)0x40944b;
    FUN_0040263d();
    puStack_e8 = (undefined1 *)0x409452;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_e0 = (undefined1 *)0x40945d;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x48) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar3 != 0) {
      iStack_dc = 0x409473;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_dc = 0x409481;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_dc = 0x409491;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_dc = 0x40949c;
      FUN_00878dfb();
    }
    puStack_e0 = &stack0xffffff28;
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff28;
    iStack_dc = 0x3b5;
    piStack_e4 = (int *)0x4094b2;
    FUN_00679e4e();
    iStack_dc = unaff_EBP + -0x84;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_e0 = (undefined1 *)0x4094c5;
    FUN_0040263d();
    puStack_e0 = (undefined1 *)0x4094cc;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (*(short *)(unaff_EBP + -0x84) == 8) {
      iStack_dc = 0x4094e6;
      FUN_0087a208();
      iStack_dc = unaff_EBP + -0x38;
      puStack_e0 = (undefined1 *)0x4094f3;
      FUN_00409277();
      iStack_dc = 0x4094fd;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      if (iVar3 == 0) {
        iStack_dc = 0x409516;
        FUN_00878dfb();
      }
      iStack_dc = 0x409523;
      FUN_00404960();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_dc = 0x409530;
      FUN_004035f5();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_004027b3();
      *(undefined4 *)(unaff_EBP + -0x54) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x2c) == 0) {
          iStack_dc = 0x40954e;
          FUN_00878dfb();
        }
        piStack_e4 = *(int **)(unaff_EBP + -0x2c);
        iStack_dc = unaff_EBP + -0x74;
        puStack_e0 = (undefined1 *)0x1;
        puStack_e8 = (undefined1 *)0x409561;
        iVar3 = (**(code **)(*piStack_e4 + 0xc))();
        if (iVar3 != 0) break;
        iStack_dc = unaff_EBP + -0x1c;
        puStack_e0 = (undefined1 *)0x409576;
        FUN_00405a23();
        iStack_dc = unaff_EBP + -0x1c;
        *(undefined1 **)(unaff_EBP + -0x44) = &stack0xffffff28;
        puStack_e0 = (undefined1 *)0x409587;
        FUN_0040810c();
        iStack_dc = unaff_EBP + -100;
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        puStack_e0 = (undefined1 *)0x409597;
        FUN_004117d5();
        puStack_e0 = (undefined1 *)0x4095a1;
        FUN_0040263d();
        puStack_e0 = (undefined1 *)0x4095a8;
        FUN_004048a4();
        iStack_dc = unaff_EBP + -0x24;
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        puStack_e0 = (undefined1 *)0x4095bf;
        FUN_00679e4e();
        if (*(undefined4 **)(unaff_EBP + -0x1c) == (undefined4 *)0x0) {
          iStack_dc = 0;
        }
        else {
          iStack_dc = **(undefined4 **)(unaff_EBP + -0x1c);
        }
        puStack_e0 = (undefined1 *)0x4095df;
        iVar3 = FUN_0087c71f();
        FUN_00402fa6();
        if (iVar3 != 0) {
          iStack_dc = 0x409605;
          FUN_00403191();
          iStack_dc = unaff_EBP + -100;
          piStack_e4 = (int *)(unaff_EBP + -0x1c);
          *(undefined1 ***)(unaff_EBP + -0x44) = &puStack_e0;
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          puStack_e8 = (undefined1 *)0x409623;
          puStack_e0 = extraout_ECX_01;
          FUN_004059fd();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          piStack_e4 = (int *)0x40962f;
          FUN_0040263d();
          piStack_e4 = (int *)0x409636;
          FUN_00404992();
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          iStack_dc = 0x409646;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_dc = 0x409651;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iStack_dc = 0x40965e;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_dc = 0x409669;
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
        iStack_dc = 0x409696;
        (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_dc = 0x4096a3;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_dc = 0x4096ae;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (*(int *)(unaff_EBP + -0x34) != 0) {
        iStack_dc = 0x4096c0;
        FUN_00412f73();
      }
    }
    iStack_dc = 0x4096ce;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x10) + 0xc),*(IBinding **)(unaff_EBP + -0x20));
    iStack_dc = 0x4096dd;
    FUN_0041179b();
    iVar3 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_dc = unaff_EBP + 0xc;
    puStack_e0 = (undefined1 *)0x4096f6;
    uVar4 = FUN_00414203();
    *(undefined4 *)(iVar3 + 0x14) = uVar4;
    iVar3 = *(int *)(unaff_EBP + -0x10);
    uVar4 = (*DAT_0097b704)();
    *(undefined4 *)(iVar3 + 0x10) = uVar4;
    iVar5 = *(int *)(unaff_EBP + -0x10);
    iVar3 = *(int *)(unaff_EBP + 8);
    *(int *)(iVar3 + 4) = iVar5;
    if (iVar5 != 0) {
      iStack_dc = 0x40971c;
      InterlockedIncrement((LONG *)(iVar5 + 4));
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_dc = 0x409733;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_dc = 0x40973e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      iStack_dc = 0x40974f;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
      iStack_dc = 0x409760;
      (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
    }
    iVar5 = *(int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    iVar3 = *(int *)(unaff_EBP + -0x10);
    uVar4 = (*DAT_0097b704)();
    *(undefined4 *)(iVar3 + 0x10) = uVar4;
    iVar1 = *(int *)(unaff_EBP + -0x10);
    iVar3 = *(int *)(unaff_EBP + 8);
    *(int *)(iVar3 + 4) = iVar1;
    iVar5 = 0;
    if (iVar1 != 0) {
      iStack_dc = 0x40978c;
      InterlockedIncrement((LONG *)(iVar1 + 4));
      iVar5 = *(int *)(unaff_EBP + -0x10);
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  if (iVar5 != 0) {
    iStack_dc = 0x4097a7;
    FUN_00412f73();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


