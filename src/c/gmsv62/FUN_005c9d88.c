/* FUN_005c9d88 - 0x005c9d88 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c9d88(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int extraout_ECX;
  short *extraout_ECX_00;
  short *extraout_ECX_01;
  int unaff_EBP;
  short *psStack_4c;
  undefined1 *puStack_48;
  
  FUN_00879bb8();
  iVar3 = DAT_00978358;
  iVar2 = FUN_005ca1ff();
  if (iVar2 == 0) {
    if (*(int *)(unaff_EBP + 8) == *(int *)(iVar3 + 0xd78)) {
      psStack_4c = (short *)0x5c9dec;
      puStack_48 = (undefined1 *)(extraout_ECX + 0x104);
      iVar3 = FUN_00413367();
      if (iVar3 != -2) {
        psStack_4c = (short *)0x5c9dfb;
        puStack_48 = (undefined1 *)(extraout_ECX + 0x104);
        iVar3 = FUN_00413367();
        if (iVar3 < 1) goto LAB_005c9e4b;
      }
      if (*(int *)(unaff_EBP + 0x28) != 0) {
        puStack_48 = (undefined1 *)(extraout_ECX + 0x34c);
        psStack_4c = (short *)0x5c9e19;
        iVar3 = FUN_00413367();
        if ((iVar3 == 0) || (*(int *)(unaff_EBP + 0xc) == 0x4e23ef)) {
          puStack_48 = *(undefined1 **)(unaff_EBP + 0x34);
          psStack_4c = *(short **)(unaff_EBP + 0x30);
          FUN_005cc564(*(undefined4 *)(unaff_EBP + 0x10),*(int *)(unaff_EBP + 0x14) == 0,0,
                       *(undefined4 *)(unaff_EBP + 0x24),*(undefined4 *)(unaff_EBP + 0x28));
        }
      }
    }
  }
  else {
    puStack_48 = (undefined1 *)0x5c9db1;
    iVar3 = FUN_0065439b();
    if (iVar3 != 0) {
      puStack_48 = (undefined1 *)0x5c9dc4;
      FUN_005cfefc();
    }
  }
LAB_005c9e4b:
  iVar3 = *(int *)(unaff_EBP + 0xc);
  if (((iVar3 == 0x111ae9) || (iVar3 == 0x12a189)) || (iVar3 == 0x142829)) {
    iVar3 = *(int *)(unaff_EBP + 0x28);
    puStack_48 = (undefined1 *)0x5c9eb7;
    FUN_005ca2b4();
    if (iVar3 == 3) goto LAB_005c9ebb;
  }
  else {
    if (iVar3 == 0x31260f) {
      *(undefined4 *)(unaff_EBP + 0x1c) = 1;
    }
    if (((iVar3 != 0x12a193) && (iVar3 != 0x4faa91)) && (-1 < *(int *)(unaff_EBP + 0x18))) {
      puStack_48 = *(undefined1 **)(unaff_EBP + 0x1c);
      psStack_4c = *(short **)(unaff_EBP + 0x20);
      FUN_005ca219(*(undefined4 *)(unaff_EBP + 0x18));
    }
LAB_005c9ebb:
    puStack_48 = (undefined1 *)(-(uint)(DAT_00978358 != 0) & DAT_00978358 + 4U);
    psStack_4c = *(short **)(unaff_EBP + 0x24);
    FUN_005cc3d9();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar3 = *(int *)(extraout_ECX + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  (**(code **)(iVar3 + 0x10))();
  puStack_48 = (undefined1 *)0x5c9ef5;
  puVar4 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
  puStack_48 = (undefined1 *)*puVar4;
  psStack_4c = (short *)0x5c9efc;
  uVar5 = FUN_007d3c48();
  *(undefined4 *)(unaff_EBP + 0x28) = uVar5;
  if ((*(int *)(unaff_EBP + 0x2c) < 1) || (*(int *)(unaff_EBP + 0xc) == 0x3eba9d)) {
    pcVar1 = *(code **)(unaff_EBP + 0xc);
    if (pcVar1 == (code *)0x0) goto LAB_005ca190;
    puStack_48 = (undefined1 *)(unaff_EBP + 0xc);
    psStack_4c = (short *)0x5ca059;
    puVar4 = (undefined4 *)FUN_00679d86();
    puStack_48 = (undefined1 *)*puVar4;
    psStack_4c = (short *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    if (pcVar1 == (code *)0x2f514d) {
      if ((0 < *(int *)(unaff_EBP + 0x20)) || (*(int *)(unaff_EBP + 0x18) == 0)) {
LAB_005ca0a1:
        puStack_48 = &DAT_00978474;
        psStack_4c = (short *)0x5ca0b0;
        FUN_00470891();
      }
    }
    else if (((pcVar1 == ptr_004e23ec) || (pcVar1 == ptr_004e23ec)) &&
            (0 < *(int *)(unaff_EBP + 0x20))) goto LAB_005ca0a1;
    puStack_48 = (undefined1 *)0x5ca0bc;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
    puStack_48 = (undefined1 *)(unaff_EBP + -0x20);
    psStack_4c = (short *)0x5ca0cb;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      puStack_48 = (undefined1 *)0x5ca0d7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_48 = (undefined1 *)0x5ca0e1;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    puStack_48 = (undefined1 *)(unaff_EBP + -0x30);
    psStack_4c = (short *)0x5ca0eb;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      puStack_48 = (undefined1 *)0x5ca0f7;
      FUN_00878dfb();
    }
    puStack_48 = (undefined1 *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    psStack_4c = (short *)0x5ca10b;
    uVar5 = FUN_00411641();
    *(short ***)(unaff_EBP + 0xc) = &psStack_4c;
    psStack_4c = extraout_ECX_01;
    FUN_004033a1(uVar5);
    iVar3 = unaff_EBP + -0x40;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_48 = (undefined1 *)0x5ca13f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_48 = (undefined1 *)0x5ca14a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_48 = (undefined1 *)0x5ca157;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_48 = (undefined1 *)0x5ca162;
      FUN_00878dfb();
    }
    if (*(short *)(unaff_EBP + -0x40) == 0) {
      puStack_48 = &DAT_00978474;
      psStack_4c = (short *)0x5ca178;
      FUN_00470891();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    puStack_48 = (undefined1 *)(unaff_EBP + 0xc);
    psStack_4c = (short *)0x5c9f2c;
    puVar4 = (undefined4 *)FUN_00679d86();
    puStack_48 = (undefined1 *)*puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    psStack_4c = (short *)(unaff_EBP + -0x10);
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    if ((0 < *(int *)(unaff_EBP + 0x20)) || (*(int *)(unaff_EBP + 0x18) == 0)) {
      puStack_48 = &DAT_00978474;
      psStack_4c = (short *)0x5c9f67;
      FUN_00470891();
    }
    puStack_48 = (undefined1 *)0x5c9f73;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    puStack_48 = (undefined1 *)(unaff_EBP + -0x30);
    psStack_4c = (short *)0x5c9f82;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      puStack_48 = (undefined1 *)0x5c9f8e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_48 = (undefined1 *)0x5c9f98;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
    puStack_48 = (undefined1 *)(unaff_EBP + -0x20);
    psStack_4c = (short *)0x5c9fa2;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      puStack_48 = (undefined1 *)0x5c9fae;
      FUN_00878dfb();
    }
    puStack_48 = (undefined1 *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    psStack_4c = (short *)0x5c9fc2;
    uVar5 = FUN_00411641();
    *(short ***)(unaff_EBP + 0xc) = &psStack_4c;
    psStack_4c = extraout_ECX_00;
    FUN_004033a1(uVar5);
    iVar3 = unaff_EBP + -0x40;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_48 = (undefined1 *)0x5c9ff6;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_48 = (undefined1 *)0x5ca001;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_48 = (undefined1 *)0x5ca00e;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_48 = (undefined1 *)0x5ca019;
      FUN_00878dfb();
    }
    if (*(short *)(unaff_EBP + -0x40) == 0) {
      puStack_48 = &DAT_00978474;
      psStack_4c = (short *)0x5ca02f;
      FUN_00470891();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  puStack_48 = (undefined1 *)0x5ca185;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_48 = (undefined1 *)0x5ca190;
    FUN_00878dfb();
  }
LAB_005ca190:
  psStack_4c = *(short **)(unaff_EBP + -0x10);
  if ((psStack_4c == (short *)0x0) || (*psStack_4c == 0)) {
    if ((*(int *)(extraout_ECX + 0x274) == 0) ||
       (iVar3 = *(int *)(extraout_ECX + 0x160), iVar3 == 0)) {
      iVar3 = *(int *)(extraout_ECX + 0x15c);
    }
    puStack_48 = (undefined1 *)(iVar3 + 0xc);
    psStack_4c = (short *)0x5ca1d4;
    uVar5 = FUN_004b8c9b();
    psStack_4c = *(short **)(unaff_EBP + 0x28);
    FUN_007d4267(uVar5,0);
  }
  else {
    puStack_48 = *(undefined1 **)(unaff_EBP + 0x28);
    FUN_00433c19();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


