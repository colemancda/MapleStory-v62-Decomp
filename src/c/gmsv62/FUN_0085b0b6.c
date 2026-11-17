/* FUN_0085b0b6 - 0x0085b0b6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_0085b0b6(void)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_ECX;
  int iVar8;
  int unaff_EBP;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  uVar6 = *(undefined4 *)(extraout_ECX + 0x2b40);
  puVar9 = (undefined4 *)(extraout_ECX + 0x2b44);
  puVar11 = (undefined4 *)(unaff_EBP + -0x1dc);
  for (iVar8 = 0x4a; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar9;
  *(undefined4 *)(unaff_EBP + -0x20) = uVar6;
  uVar1 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  switch(uVar1) {
  case 4:
    uVar6 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar6;
    FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    cVar2 = FUN_0042452b();
    iVar8 = *(int *)(DAT_00978134 + 0x30);
    *(int *)(unaff_EBP + -0x1c) = iVar8;
    if (iVar8 == 0) {
LAB_0085b28d:
      if (cVar2 == '\0') {
        FUN_0060142b();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_00849a47();
        FUN_00457cda();
        *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffe20;
        FUN_00414f8b();
        FUN_00459cb5();
        FUN_00485c13();
        *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffe20;
        FUN_00414edd();
        FUN_00459cb5();
        FUN_004751b2();
        *(undefined1 *)(unaff_EBP + -4) = 2;
LAB_0085b1ca:
        FUN_0045ebca();
      }
    }
    else {
      if (cVar2 != '\0') {
        *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffe20;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_004f14ee();
        iVar8 = FUN_0047c5bf();
        if (iVar8 != 0) goto LAB_0085b207;
        FUN_0060142b();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00457cda();
        FUN_00457d37();
        FUN_00457cda();
        FUN_004751b2();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        goto LAB_0085b1ca;
      }
LAB_0085b207:
      *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffe20;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_004f14ee();
      iVar8 = FUN_0047c5bf();
      if ((iVar8 != 0) || (iVar8 = FUN_00849a47(), iVar8 != 0)) goto LAB_0085b28d;
      iVar8 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x20) = iVar8;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (iVar8 != 0) {
        FUN_004defeb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffe18;
      FUN_00450368(unaff_EBP + -0x18);
      FUN_004e1441();
      FUN_008497ad();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00434e38();
    }
    iVar8 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_0085bde9;
  default:
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    FUN_00471102();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    goto LAB_0085bf43;
  case 7:
  case 0x21:
    uVar6 = FUN_0042459a();
    *(undefined4 *)(extraout_ECX + 0x2b40) = uVar6;
    FUN_004b653d();
    goto LAB_0085bb97;
  case 8:
    uVar6 = FUN_0042459a();
    *(undefined4 *)(extraout_ECX + 0x2b40) = uVar6;
    uVar6 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar6;
    uVar6 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
    sVar3 = FUN_00424561();
    *(int *)(unaff_EBP + -0x28) = (int)sVar3;
    sVar3 = FUN_00424561();
    *(int *)(unaff_EBP + -0x24) = (int)sVar3;
    _memset((undefined4 *)(extraout_ECX + 0x2b44),0,0x12a);
    iVar8 = FUN_00455c59();
    iVar8 = *(int *)(iVar8 + 4);
    FUN_0045e4a2();
    *(undefined4 *)(extraout_ECX + 0x2b44) = *(undefined4 *)(extraout_ECX + 0x2088);
    if (*(int *)(extraout_ECX + 0x2098) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(extraout_ECX + 0x2098) + 4;
    }
    if (iVar7 != 0) {
      (*DAT_0097b4b8)();
    }
    FUN_00429303();
    uVar4 = FUN_004f162d();
    uVar6 = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(extraout_ECX + 0x2bf6) = uVar4;
    *(undefined4 *)(extraout_ECX + 0x2c0e) = uVar6;
    *(undefined4 *)(extraout_ECX + 0x2c12) = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined4 *)(extraout_ECX + 0x2c16) = *(undefined4 *)(unaff_EBP + -0x28);
    *(undefined4 *)(extraout_ECX + 0x2c1a) = *(undefined4 *)(unaff_EBP + -0x24);
    sVar3 = FUN_0045f084();
    *(int *)(extraout_ECX + 0x2baa) = (int)sVar3;
    uVar5 = FUN_0045f03e(iVar8 + 0x33);
    *(uint *)(extraout_ECX + 0x2bc2) = uVar5 & 0xff;
    *(undefined4 *)(extraout_ECX + 0x2bda) = *(undefined4 *)(DAT_00978368 + 0x204c);
    *(undefined4 *)(extraout_ECX + 0x2bf2) = *(undefined4 *)(extraout_ECX + 0x2088);
    if ((DAT_0097beec == 0) && (iVar8 = FUN_0047ca6b(), iVar8 != 0)) {
      FUN_007823df();
    }
    FUN_0083c94d();
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00471102();
    iVar8 = *(int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_0085bb89:
    if (iVar8 != 0) {
      FUN_00434e38();
    }
    goto LAB_0085bb97;
  case 9:
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    FUN_00471102();
    iVar8 = *(int *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 10:
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_00471102();
    iVar8 = *(int *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0xc:
    uVar6 = FUN_0042459a();
    *(undefined4 *)(extraout_ECX + 0x2b40) = uVar6;
    iVar8 = FUN_0042459a();
    *(int *)(unaff_EBP + -0x14) = iVar8;
    cVar2 = FUN_0042452b();
    if (cVar2 == '\0') {
      *(undefined4 *)(extraout_ECX + 0x2b40) = 0;
      _memset((void *)(extraout_ECX + 0x2b44),0,0x12a);
      if (*(int *)(extraout_ECX + 0x2088) == iVar8) {
        FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x54) != 0) {
          FUN_00434e38();
        }
        FUN_0083c94d();
      }
      else {
        FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x84) != 0) {
          FUN_00434e38();
        }
      }
      if ((DAT_0097beec != 0) && (FUN_00815de9(), DAT_0097beec != 0)) {
        (*(code *)**(undefined4 **)(DAT_0097beec + 8))();
      }
    }
    else {
      cVar2 = FUN_0042452b();
      FUN_0045cdbc();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x94) != 0) {
        FUN_00434e38();
      }
      FUN_004b653d();
      if (*(int *)(extraout_ECX + 0x2088) == *(int *)(unaff_EBP + -0x14)) {
        if (cVar2 == '\0') {
          FUN_00679d22();
          *(undefined4 *)(unaff_EBP + -0x18) = 2;
          *(undefined4 *)(unaff_EBP + -4) = 0x11;
        }
        else {
          FUN_00679d22();
          *(undefined4 *)(unaff_EBP + -0x18) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
        }
        FUN_00414f8b();
        *(undefined4 *)(unaff_EBP + -4) = 0x10;
        if (((*(byte *)(unaff_EBP + -0x18) & 2) != 0) &&
           (*(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffd,
           *(int *)(unaff_EBP + -0x44) != 0)) {
          FUN_00434e38();
        }
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (((*(byte *)(unaff_EBP + -0x18) & 1) != 0) && (*(int *)(unaff_EBP + -0x7c) != 0)) {
          FUN_00434e38();
        }
        *(undefined4 *)(extraout_ECX + 0x2b40) = 0;
        _memset((void *)(extraout_ECX + 0x2b44),0,0x12a);
      }
      else {
        if (cVar2 == '\0') {
          FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          FUN_00434e21();
          iVar8 = *(int *)(unaff_EBP + -0xa4);
          *(undefined1 *)(unaff_EBP + -4) = 1;
        }
        else {
          FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          FUN_00434e21();
          iVar8 = *(int *)(unaff_EBP + -0x4c);
          *(undefined1 *)(unaff_EBP + -4) = 1;
        }
        if (iVar8 != 0) {
          FUN_00434e38();
        }
      }
      if (*(int *)(extraout_ECX + 0x2088) == *(int *)(unaff_EBP + -0x14)) {
        if (DAT_0097beec == 0) goto LAB_0085b87e;
        FUN_00815de9();
        if (DAT_0097beec != 0) {
          (*(code *)**(undefined4 **)(DAT_0097beec + 8))();
        }
      }
      if (DAT_0097beec != 0) {
        FUN_00815de9();
        FUN_0077fcef();
      }
    }
LAB_0085b87e:
    FUN_00471102();
    goto LAB_0085bb97;
  case 0xd:
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    FUN_00471102();
    iVar8 = *(int *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0xf:
    uVar6 = FUN_0042459a();
    *(undefined4 *)(extraout_ECX + 0x2b40) = uVar6;
    FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x5c) != 0) {
      FUN_00434e38();
    }
    FUN_004b653d();
    iVar8 = FUN_004a3109();
    if (iVar8 == 0) {
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x9c) != 0) {
        FUN_00434e38();
      }
LAB_0085b97d:
      FUN_0083c94d();
    }
    else {
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -100) != 0) {
        FUN_00434e38();
      }
      iVar8 = FUN_0085c65a();
      if (*(int *)(extraout_ECX + 0x2c8c) <= iVar8) goto LAB_0085b97d;
    }
    FUN_00471102();
    if (DAT_0097beec == 0) {
      iVar8 = FUN_0047ca6b();
      if (iVar8 != 0) {
        FUN_007823df();
      }
    }
    else {
      FUN_00815de9();
      FUN_0077fcef();
    }
    goto LAB_0085bb97;
  case 0x10:
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_00471102();
    iVar8 = *(int *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0x11:
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_00471102();
    iVar8 = *(int *)(unaff_EBP + -0x70);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0x12:
    goto switchD_0085b116_caseD_12;
  case 0x13:
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    FUN_00471102();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    goto LAB_0085bf43;
  case 0x15:
    FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int *)(unaff_EBP + -0x8c) != 0) {
      FUN_00434e38();
    }
    FUN_00471102();
    iVar8 = *(int *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0x16:
    FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int *)(unaff_EBP + -0x74) != 0) {
      FUN_00434e38();
    }
    FUN_00471102();
    iVar8 = *(int *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0x17:
    FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int *)(unaff_EBP + -0xa0) != 0) {
      FUN_00434e38();
    }
    FUN_00471102();
    iVar8 = *(int *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0x1a:
    uVar6 = FUN_0042459a();
    uVar5 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x18) = uVar5 & 0xff;
    iVar8 = FUN_0085c633();
    if (iVar8 != -1) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined4 *)(extraout_ECX + 0x2bf2) = uVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        FUN_00434e21();
        iVar8 = *(int *)(unaff_EBP + -0x6c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      }
      else {
        FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        FUN_00434e21();
        iVar8 = *(int *)(unaff_EBP + -0xa8);
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      }
      if (iVar8 != 0) {
        FUN_00434e38();
      }
      FUN_00471102();
      iVar8 = *(int *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      goto LAB_0085bb89;
    }
    goto LAB_0085bdcb;
  case 0x1b:
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    FUN_00471102();
    iVar8 = *(int *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0x1c:
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    FUN_00471102();
    iVar8 = *(int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0x1d:
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    FUN_00471102();
    iVar8 = *(int *)(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0x1f:
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    FUN_00471102();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x78) != 0) {
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00434e38();
    }
    goto LAB_0085bf54;
  case 0x20:
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    FUN_00471102();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    goto LAB_0085bf43;
  case 0x22:
    uVar6 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar6;
    uVar6 = FUN_0042459a();
    uVar4 = FUN_0042459a();
    iVar8 = FUN_0085c633();
    if (iVar8 == -1) goto LAB_0085bdcb;
    iVar8 = extraout_ECX + iVar8 * 4;
    *(undefined4 *)(iVar8 + 0x2bc2) = uVar6;
    *(undefined4 *)(iVar8 + 0x2baa) = uVar4;
    goto LAB_0085bb97;
  case 0x23:
    cVar2 = FUN_0042452b();
    if (cVar2 == '\0') {
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      FUN_0045cdbc();
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
LAB_0085bf43:
    FUN_00414ebb();
    goto LAB_0085bf48;
  case 0x24:
    uVar5 = FUN_0042452b();
    uVar6 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
    uVar6 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar6;
    sVar3 = FUN_00424561();
    *(int *)(unaff_EBP + -0x28) = (int)sVar3;
    sVar3 = FUN_00424561();
    if (5 < (uVar5 & 0xff)) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0x21000003;
      *(undefined4 *)(unaff_EBP + -0x34) = 0x21000003;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8();
    }
    puVar9 = (undefined4 *)((uVar5 & 0xff) * 0x10 + 0x2c0e + extraout_ECX);
    *puVar9 = *(undefined4 *)(unaff_EBP + -0x1c);
    puVar9[1] = *(undefined4 *)(unaff_EBP + -0x14);
    puVar9[2] = *(undefined4 *)(unaff_EBP + -0x28);
    puVar9[3] = (int)sVar3;
    *(undefined4 *)(unaff_EBP + -0x1c) = 1;
LAB_0085bb97:
    if (DAT_0097bef4 != 0) {
      FUN_0077e45e();
    }
    iVar8 = FUN_00429303();
    if (iVar8 != 0) {
      uVar5 = (uint)(*(int *)(extraout_ECX + 0x2b40) != 0);
      FUN_00429303(uVar5);
      FUN_004efb2d(uVar5);
    }
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      piVar10 = (int *)(unaff_EBP + -0x1dc);
      iVar8 = 6;
      do {
        if (((*piVar10 != 0) && (*piVar10 != *(int *)(extraout_ECX + 0x2088))) &&
           (iVar7 = FUN_007c0104(), iVar7 != 0)) {
          FUN_0079cab8();
        }
        piVar10 = piVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (*(int *)(extraout_ECX + 0x2b40) != 0) {
      piVar10 = (int *)(extraout_ECX + 0x2b44);
      iVar8 = 6;
      do {
        if (((*piVar10 != 0) && (*piVar10 != *(int *)(extraout_ECX + 0x2088))) &&
           (iVar7 = FUN_007c0104(), iVar7 != 0)) {
          FUN_0079cab8();
        }
        piVar10 = piVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
LAB_0085bf48:
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
LAB_0085bf54:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    goto switchD_0085b116_caseD_12;
  }
  if (iVar8 != 0) {
    FUN_00434e38();
  }
LAB_0085bdcb:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_00434e38();
  }
  iVar8 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_0085bde9:
  if (iVar8 != 0) {
    FUN_00434e38();
  }
switchD_0085b116_caseD_12:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


