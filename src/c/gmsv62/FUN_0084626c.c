/* FUN_0084626c - 0x0084626c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084626c(void)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int extraout_ECX;
  uint extraout_ECX_00;
  int unaff_EBP;
  uint *puVar8;
  undefined4 uVar9;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  int iStack_34;
  int iStack_30;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iStack_30 = 0x846289;
  cVar2 = FUN_0042452b();
  if (cVar2 != '\0') {
    *(undefined4 *)(extraout_ECX + 0x208c) = 0;
    iStack_30 = 0x84629d;
    uVar4 = FUN_007d1e08();
    *(undefined4 *)(extraout_ECX + 0x2090) = uVar4;
  }
  iStack_30 = unaff_EBP + -0x2c;
  iStack_34 = 0x8462ae;
  iVar5 = FUN_00455c59();
  iVar1 = *(int *)(iVar5 + 4);
  iStack_30 = 0x8462b9;
  FUN_0045e4a2();
  iStack_30 = *(undefined4 *)(iVar1 + 0x35);
  iVar5 = iVar1 + 0x33;
  *(int *)(unaff_EBP + -0x18) = iVar5;
  puStack_38 = (undefined1 *)0x8462c8;
  iStack_34 = iVar5;
  uVar6 = FUN_0045f03e();
  iStack_30 = *(undefined4 *)(unaff_EBP + 8);
  *(uint *)(unaff_EBP + -0x20) = uVar6 & 0xff;
  iStack_34 = 0x8462da;
  uVar6 = FUN_004b556c();
  *(uint *)(unaff_EBP + -0x14) = uVar6;
  if ((uVar6 & 0x180008) != 0) {
    *(int *)(unaff_EBP + -0x1c) = DAT_00978358;
    iStack_30 = 0x8462f4;
    iStack_30 = FUN_0042452b();
    iStack_34 = 0x8462fd;
    FUN_007b029d();
  }
  iStack_30 = 0x846305;
  FUN_00833dbd();
  iStack_30 = *(int *)(iVar1 + 0x35);
  puStack_38 = (undefined1 *)0x84630e;
  iStack_34 = iVar5;
  uVar6 = FUN_0045f03e();
  iVar5 = iStack_30;
  if ((*(int *)(unaff_EBP + -0x20) < (int)(uVar6 & 0xff)) && (DAT_00978358 != 0)) {
    iStack_30 = 0xc00614a4;
    iStack_34 = iVar5;
    *(int **)(unaff_EBP + -0x20) = &iStack_34;
    puStack_38 = (undefined1 *)0x0;
    uStack_3c = 0x84633e;
    FUN_00424e0a();
    puStack_38 = (undefined1 *)0x0;
    uStack_3c = 0;
    puVar8 = &uStack_40;
    *(uint **)(unaff_EBP + -0x1c) = &uStack_40;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_005a9f5e(&uStack_40);
    FUN_00486ada(puVar8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00679d86(unaff_EBP + 8,0x8ec);
    uVar9 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uVar4 = FUN_00411641(0);
    FUN_00424e82(uVar4);
    FUN_0042b613(uVar4,uVar9);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_30 = 0x84638f;
    FUN_00402676();
    iStack_30 = 0x69e;
    iStack_34 = unaff_EBP + 8;
    puStack_38 = (undefined1 *)0x84639f;
    piVar7 = (int *)FUN_00679d86();
    iStack_34 = *piVar7;
    iStack_30 = 100;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    puStack_38 = (undefined1 *)0x8463b0;
    FUN_007d4073();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_30 = 0x8463be;
    FUN_00402676();
    iStack_30 = 0;
    iStack_34 = 0x8463ca;
    FUN_0079d45a();
    iStack_30 = *(undefined4 *)(iVar1 + 0x35);
    iStack_34 = *(int *)(unaff_EBP + -0x18);
    puStack_38 = (undefined1 *)0x8463d5;
    bVar3 = FUN_0045f03e();
    if ((bVar3 < 0xb) && (DAT_00978360 != 0)) {
      iStack_30 = 1;
      iStack_34 = 2;
      puStack_38 = (undefined1 *)0x8463ee;
      FUN_00747bcb();
    }
    iStack_30 = *(undefined4 *)(iVar1 + 0x35);
    iStack_34 = *(int *)(unaff_EBP + -0x18);
    puStack_38 = (undefined1 *)0x8463f9;
    cVar2 = FUN_0045f03e();
    if (cVar2 == '\x02') {
      if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x31c4) == 0) {
        iStack_30 = 0x5fc;
        iStack_34 = 0x84641d;
        iVar5 = FUN_004029b9();
        *(int *)(unaff_EBP + 8) = iVar5;
        *(undefined4 *)(unaff_EBP + -4) = 5;
        if (iVar5 == 0) {
          iStack_30 = 0;
        }
        else {
          iStack_30 = 1;
          iStack_34 = 0x846434;
          iStack_30 = FUN_00720134();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_34 = 0x84644b;
        FUN_0083d5e3();
      }
      if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x31bc) == 0) {
        iStack_30 = 0x5ec;
        iStack_34 = 0x846465;
        iVar5 = FUN_004029b9();
        *(int *)(unaff_EBP + 8) = iVar5;
        *(undefined4 *)(unaff_EBP + -4) = 6;
        if (iVar5 == 0) {
          iStack_30 = 0;
        }
        else {
          iStack_30 = 1;
          iStack_34 = 0x84647c;
          iStack_30 = FUN_0072f48a();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_34 = 0x846493;
        FUN_0083d599();
      }
      if (DAT_0097bdc4 == 0) {
        iStack_30 = 0x8464a2;
        FUN_00705bdc();
      }
      else {
        iStack_30 = 0x8464a9;
        FUN_00815de9();
      }
      iStack_30 = 0x8464b4;
      FUN_00705381();
    }
  }
  iStack_30 = 0x8464b9;
  uVar4 = FUN_007d1e08();
  iStack_30 = *(undefined4 *)(iVar1 + 0x99);
  *(undefined4 *)(unaff_EBP + 8) = uVar4;
  iStack_34 = iVar1 + 0x91;
  puStack_38 = (undefined1 *)0x8464ce;
  uVar4 = FUN_00413367();
  puStack_38 = *(undefined1 **)(iVar1 + 0x35);
  *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
  uStack_3c = *(undefined4 *)(unaff_EBP + -0x18);
  uStack_40 = 0x8464dc;
  uStack_40 = FUN_0045f03e();
  uStack_40 = uStack_40 & 0xff;
  *(float *)(unaff_EBP + -0x1c) = (float)*(int *)(unaff_EBP + -0x20);
  uVar4 = FUN_0066ba5e();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
  if (((float)_DAT_008ecb40 <= *(float *)(unaff_EBP + -0x1c) / (float)*(int *)(unaff_EBP + -0x20))
     && (piVar7 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x333c), *(int *)(unaff_EBP + 8) < *piVar7))
  {
    iStack_30 = 1;
    iStack_34 = 0x84651f;
    FUN_0079d45a();
    *piVar7 = *(int *)(unaff_EBP + 8) + 420000;
  }
  if ((*(byte *)(unaff_EBP + -0x14) & 0x30) != 0) {
    if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x31dc) != 0) {
      iStack_30 = 1;
      iStack_34 = 0x846547;
      FUN_00700788();
    }
    iStack_30 = 0x84654f;
    iVar5 = FUN_00846166();
    if (iVar5 != 0) {
      iStack_30 = 6;
      iStack_34 = 0x84655d;
      iVar5 = FUN_00849a47();
      if (iVar5 == 0) {
        iStack_30 = 0x110;
        iStack_34 = 0x846570;
        iVar5 = FUN_004029b9();
        *(int *)(unaff_EBP + 8) = iVar5;
        *(undefined4 *)(unaff_EBP + -4) = 7;
        if (iVar5 == 0) {
          uVar4 = 0;
        }
        else {
          iStack_30 = 0x846585;
          uVar4 = FUN_004defeb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_30 = 0;
        iStack_34 = 0x846597;
        FUN_004e1632();
        iStack_34 = 0x8465a0;
        iStack_30 = uVar4;
        FUN_008497ad();
      }
    }
    if ((*(byte *)(unaff_EBP + -0x14) & 0x20) != 0) {
      iStack_30 = 0xffffffff;
      puStack_38 = (undefined1 *)&iStack_34;
      *(int **)(unaff_EBP + -0x20) = &iStack_34;
      uStack_3c = 0x8465b8;
      FUN_005a9f5e();
      uStack_3c = 0x8465c2;
      FUN_0043f93c();
      puStack_38 = (undefined1 *)0x0;
      uStack_3c = 0;
      puVar8 = &uStack_40;
      *(uint **)(unaff_EBP + -0x1c) = &uStack_40;
      *(undefined4 *)(unaff_EBP + -4) = 8;
      uStack_40 = extraout_ECX_00;
      FUN_005a9f5e(&uStack_40);
      FUN_00486ada(puVar8);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_00679d86(unaff_EBP + 8,0x8ee);
      uVar9 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      uVar4 = FUN_00411641(0);
      FUN_00424e82(uVar4);
      FUN_0042b613(uVar4,uVar9);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_30 = 0x846617;
      FUN_00402676();
      iStack_30 = 0x8f1;
      iStack_34 = unaff_EBP + -0x24;
      puStack_38 = (undefined1 *)0x846627;
      piVar7 = (int *)FUN_00679d86();
      iStack_34 = *piVar7;
      iStack_30 = 100;
      *(undefined4 *)(unaff_EBP + -4) = 0xc;
      puStack_38 = (undefined1 *)0x846638;
      FUN_007d4073();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_30 = 0x846646;
      FUN_00402676();
    }
  }
  if ((*(byte *)(unaff_EBP + -0x13) & 4) != 0) {
    iStack_30 = 0;
    iStack_34 = 0x846655;
    FUN_0084d336();
  }
  if ((*(byte *)(unaff_EBP + -0x12) & 4) != 0) {
    iStack_30 = 0;
    iStack_34 = 0x846664;
    FUN_00845f10();
  }
  if (DAT_00978358 != 0) {
    iStack_30 = 0;
    iStack_34 = 0;
    puStack_38 = (undefined1 *)0x0;
    uStack_3c = 0x846676;
    FUN_007b0832();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


