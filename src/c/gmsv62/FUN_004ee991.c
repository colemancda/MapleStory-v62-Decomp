/* FUN_004ee991 - 0x004ee991 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x004eed0f) */
/* WARNING: Removing unreachable block (ram,0x004eebb9) */
/* WARNING: Removing unreachable block (ram,0x004eec7d) */

void FUN_004ee991(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int unaff_EBP;
  int iStack_88;
  int iStack_84;
  undefined *puStack_80;
  undefined1 *puStack_7c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  puStack_7c = (undefined1 *)0x4ee9b0;
  bVar1 = FUN_0042452b();
  iVar3 = DAT_00978358;
  if (bVar1 < 0x11) {
    if (bVar1 == 0x10) {
      puStack_7c = (undefined1 *)0x4eed6d;
      uVar5 = FUN_0042452b();
      *(uint *)(iVar3 + 0x1e5c) = uVar5 & 0xff;
    }
    else {
      if (bVar1 == 4) {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        puStack_7c = (undefined1 *)0x4eecdc;
        FUN_0042452b();
        puStack_7c = (undefined1 *)0xa6;
        puStack_80 = (undefined *)(unaff_EBP + -0x54);
        iStack_84 = 0x4eecf6;
        puVar4 = (undefined4 *)FUN_00679d22();
        puStack_7c = (undefined1 *)*puVar4;
        puStack_80 = (undefined *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_84 = 0x4eed05;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x54) != 0) {
          puStack_7c = (undefined1 *)(*(int *)(unaff_EBP + -0x54) + -0xc);
          puStack_80 = (undefined *)0x4eed46;
          FUN_00434e38();
        }
        puStack_80 = (undefined *)(unaff_EBP + 8);
        puStack_7c = (undefined1 *)0x9;
        iStack_84 = 0x4eed52;
        FUN_00471102();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar3 = *(int *)(unaff_EBP + 8);
      }
      else if (bVar1 == 5) {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 3;
        puStack_7c = (undefined1 *)0x4eec49;
        FUN_0042452b();
        puStack_7c = (undefined1 *)0xa8;
        puStack_80 = (undefined *)(unaff_EBP + -0x4c);
        iStack_84 = 0x4eec63;
        puVar4 = (undefined4 *)FUN_00679d22();
        puStack_7c = (undefined1 *)*puVar4;
        puStack_80 = (undefined *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iStack_84 = 0x4eec72;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (*(int *)(unaff_EBP + -0x4c) != 0) {
          puStack_7c = (undefined1 *)(*(int *)(unaff_EBP + -0x4c) + -0xc);
          puStack_80 = (undefined *)0x4eecb5;
          FUN_00434e38();
        }
        puStack_80 = (undefined *)(unaff_EBP + 8);
        puStack_7c = (undefined1 *)0x9;
        iStack_84 = 0x4eecc1;
        FUN_00471102();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar3 = *(int *)(unaff_EBP + 8);
      }
      else if (bVar1 == 6) {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 6;
        puStack_7c = (undefined1 *)0x4eeb83;
        cVar2 = FUN_0042452b();
        if (cVar2 == '\0') {
          puStack_7c = (undefined1 *)0xab;
          puStack_80 = (undefined *)(unaff_EBP + -0x48);
          iStack_84 = 0x4eebf9;
          puVar4 = (undefined4 *)FUN_00679d22();
          puStack_7c = (undefined1 *)*puVar4;
          puStack_80 = (undefined *)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          iStack_84 = 0x4eec08;
          FUN_00434e21();
          iVar3 = *(int *)(unaff_EBP + -0x48);
          *(undefined1 *)(unaff_EBP + -4) = 6;
        }
        else {
          puStack_7c = (undefined1 *)0xac;
          puStack_80 = (undefined *)(unaff_EBP + -0x40);
          iStack_84 = 0x4eeb9d;
          puVar4 = (undefined4 *)FUN_00679d22();
          puStack_7c = (undefined1 *)*puVar4;
          puStack_80 = (undefined *)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iStack_84 = 0x4eebac;
          FUN_00434e21();
          iVar3 = *(int *)(unaff_EBP + -0x40);
          *(undefined1 *)(unaff_EBP + -4) = 6;
        }
        if (iVar3 != 0) {
          puStack_7c = (undefined1 *)(iVar3 + -0xc);
          puStack_80 = (undefined *)0x4eec1e;
          FUN_00434e38();
        }
        puStack_80 = (undefined *)(unaff_EBP + 8);
        puStack_7c = (undefined1 *)0x9;
        iStack_84 = 0x4eec2a;
        FUN_00471102();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar3 = *(int *)(unaff_EBP + 8);
      }
      else {
        if (bVar1 != 9) goto LAB_004ef065;
        puStack_7c = (undefined1 *)(unaff_EBP + 8);
        puStack_80 = (undefined *)0x4ee9ed;
        FUN_0045cdbc();
        puStack_7c = &DAT_00978474;
        *(undefined4 *)(unaff_EBP + -4) = 10;
        puStack_80 = (undefined *)0x4eea01;
        iVar3 = FUN_004a3109();
        if (iVar3 == 0) {
          puStack_7c = (undefined1 *)0xae;
          puStack_80 = (undefined *)(unaff_EBP + -0x28);
          iStack_84 = 0x4eea18;
          puStack_80 = (undefined *)FUN_00679d22();
          puStack_7c = (undefined1 *)0xc;
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          iStack_84 = 0x4eea24;
          FUN_00471102();
          iVar3 = *(int *)(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 10;
        }
        else {
          puStack_7c = (undefined1 *)(unaff_EBP + -0x14);
          puStack_80 = (undefined *)0x4eea3d;
          FUN_0045cdbc();
          puStack_7c = (undefined1 *)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          puStack_80 = (undefined *)0x4eea4c;
          FUN_0045cdbc();
          puStack_7c = (undefined1 *)(unaff_EBP + 8);
          iStack_84 = unaff_EBP + -0x3c;
          puStack_80 = &DAT_00964ecc;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_88 = 0x4eea62;
          FUN_004f1f89();
          puStack_7c = &DAT_00964ec8;
          puStack_80 = (undefined *)(unaff_EBP + -0x38);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iStack_84 = 0x4eea79;
          FUN_004653c5();
          puStack_7c = (undefined1 *)(unaff_EBP + -0x14);
          puStack_80 = (undefined *)(unaff_EBP + -0x34);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iStack_84 = 0x4eea8c;
          FUN_0045e02d();
          puStack_7c = &DAT_00964ec0;
          puStack_80 = (undefined *)(unaff_EBP + -0x30);
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          iStack_84 = 0x4eeaa0;
          FUN_004653c5();
          puStack_7c = (undefined1 *)(unaff_EBP + -0x18);
          puStack_80 = (undefined *)(unaff_EBP + -0x2c);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_84 = 0x4eeab3;
          puStack_80 = (undefined *)FUN_0045e02d();
          puStack_7c = (undefined1 *)0xc;
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          iStack_84 = 0x4eeabf;
          FUN_00471102();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          if (*(int *)(unaff_EBP + -0x2c) != 0) {
            puStack_7c = (undefined1 *)(*(int *)(unaff_EBP + -0x2c) + -0xc);
            puStack_80 = (undefined *)0x4eead5;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          if (*(int *)(unaff_EBP + -0x30) != 0) {
            puStack_7c = (undefined1 *)(*(int *)(unaff_EBP + -0x30) + -0xc);
            puStack_80 = (undefined *)0x4eeaea;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          if (*(int *)(unaff_EBP + -0x34) != 0) {
            puStack_7c = (undefined1 *)(*(int *)(unaff_EBP + -0x34) + -0xc);
            puStack_80 = (undefined *)0x4eeaff;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          if (*(int *)(unaff_EBP + -0x38) != 0) {
            puStack_7c = (undefined1 *)(*(int *)(unaff_EBP + -0x38) + -0xc);
            puStack_80 = (undefined *)0x4eeb14;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          if (*(int *)(unaff_EBP + -0x3c) != 0) {
            puStack_7c = (undefined1 *)(*(int *)(unaff_EBP + -0x3c) + -0xc);
            puStack_80 = (undefined *)0x4eeb29;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            puStack_7c = (undefined1 *)(*(int *)(unaff_EBP + -0x18) + -0xc);
            puStack_80 = (undefined *)0x4eeb3e;
            FUN_00434e38();
          }
          iVar3 = *(int *)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 10;
        }
        if (iVar3 != 0) {
          puStack_7c = (undefined1 *)(iVar3 + -0xc);
          puStack_80 = (undefined *)0x4eeb53;
          FUN_00434e38();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar3 = *(int *)(unaff_EBP + 8);
      }
      if (iVar3 != 0) {
        puStack_7c = (undefined1 *)(iVar3 + -0xc);
        puStack_80 = (undefined *)0x4eeb6c;
        FUN_00434e38();
      }
    }
    goto LAB_004ef065;
  }
  if (bVar1 == 0x13) {
    puStack_7c = (undefined1 *)0x4eee2f;
    cVar2 = FUN_0042452b();
    if (cVar2 == '\0') {
      puStack_7c = (undefined1 *)0x4eef68;
      uVar6 = FUN_0042459a();
      puStack_7c = (undefined1 *)0x6c7;
      puStack_80 = (undefined *)(unaff_EBP + -0x74);
      iStack_84 = 0x4eef7a;
      puVar4 = (undefined4 *)FUN_00679d22();
      puStack_7c = (undefined1 *)*puVar4;
      iStack_84 = unaff_EBP + -0x70;
      *(undefined4 *)(unaff_EBP + -4) = 0x19;
      iStack_88 = 0x4eef93;
      puStack_80 = (undefined *)uVar6;
      puVar4 = (undefined4 *)FUN_00550c58();
      puStack_7c = (undefined1 *)0xb2;
      puStack_80 = (undefined *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      iStack_84 = 0x4eefa9;
      puVar7 = (undefined4 *)FUN_00679d22();
      iStack_84 = *puVar7;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      puStack_7c = (undefined1 *)0xc;
      puStack_80 = (undefined *)*puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iStack_88 = unaff_EBP + -0x24;
      puStack_80 = (undefined *)FUN_00434e21();
      iStack_84 = 0x4eefc9;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        puStack_7c = (undefined1 *)(*(int *)(unaff_EBP + -0x24) + -0xc);
        puStack_80 = (undefined *)0x4eefdf;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      puStack_7c = (undefined1 *)0x4eefec;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      puStack_7c = (undefined1 *)0x4eeff8;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puStack_7c = (undefined1 *)0x4ef004;
      FUN_00414ebb();
    }
    else {
      puStack_7c = (undefined1 *)0x4eee42;
      bVar1 = FUN_0042452b();
      if (bVar1 < 0xfe) {
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0x14;
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        puStack_7c = (undefined1 *)(uint)bVar1;
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        puStack_80 = (undefined *)0x4eeea4;
        puStack_80 = (undefined *)FUN_004ec897();
        puStack_7c = (undefined1 *)0xffffffff;
        iStack_84 = 0x4eeeaf;
        FUN_00414edd();
        puStack_7c = (undefined1 *)0x1;
        puStack_80 = (undefined *)(unaff_EBP + -0x14);
        iStack_84 = unaff_EBP + -0x20;
        *(int **)(unaff_EBP + -0x10) = &iStack_88;
        FUN_00450368(unaff_EBP + -0x18);
        FUN_007d3411();
        puStack_7c = (undefined1 *)0xb2;
        puStack_80 = (undefined *)(unaff_EBP + -0x68);
        iStack_84 = 0x4eeee0;
        puVar4 = (undefined4 *)FUN_00679d22();
        iStack_84 = *puVar4;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        puStack_7c = (undefined1 *)0xc;
        puStack_80 = *(undefined **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iStack_88 = unaff_EBP + -0x1c;
        puStack_80 = (undefined *)FUN_00434e21();
        iStack_84 = 0x4eef01;
        FUN_00471102();
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          puStack_7c = (undefined1 *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
          puStack_80 = (undefined *)0x4eef17;
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        if (*(int *)(unaff_EBP + -0x68) != 0) {
          puStack_7c = (undefined1 *)(*(int *)(unaff_EBP + -0x68) + -0xc);
          puStack_80 = (undefined *)0x4eef2c;
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          puStack_7c = (undefined1 *)(*(int *)(unaff_EBP + -0x14) + -0xc);
          puStack_80 = (undefined *)0x4eef41;
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          puStack_7c = (undefined1 *)(*(int *)(unaff_EBP + -0x20) + -0xc);
          puStack_80 = (undefined *)0x4eef56;
          FUN_00434e38();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar3 = *(int *)(unaff_EBP + -0x18);
      }
      else {
        puStack_7c = (undefined1 *)0xb3;
        puStack_80 = (undefined *)(unaff_EBP + -100);
        iStack_84 = 0x4eee56;
        puStack_80 = (undefined *)FUN_00679d22();
        puStack_7c = (undefined1 *)0xc;
        *(undefined4 *)(unaff_EBP + -4) = 0x13;
        iStack_84 = 0x4eee61;
        FUN_00471102();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar3 = *(int *)(unaff_EBP + -100);
      }
      if (iVar3 != 0) {
        puStack_7c = (undefined1 *)(iVar3 + -0xc);
        puStack_80 = (undefined *)0x4eee7b;
        FUN_00434e38();
      }
    }
LAB_004ef004:
    puStack_7c = (undefined1 *)0x4ef00c;
    cVar2 = FUN_0042452b();
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0x1d;
    if (cVar2 == '\0') {
      puStack_7c = (undefined1 *)0xaf;
      puStack_80 = (undefined *)(unaff_EBP + -0x78);
      iStack_84 = 0x4ef02d;
      puVar4 = (undefined4 *)FUN_00679d22();
      puStack_7c = (undefined1 *)*puVar4;
      puStack_80 = (undefined *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      iStack_84 = 0x4ef03c;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      puStack_7c = (undefined1 *)0x4ef04a;
      FUN_00414ebb();
    }
    else {
      puStack_80 = (undefined *)(unaff_EBP + 8);
      puStack_7c = (undefined1 *)0x9;
      iStack_84 = 0x4ef057;
      FUN_00471102();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if (bVar1 == 0x1a) goto LAB_004ef004;
    if (bVar1 != 0x1b) goto LAB_004ef065;
    puStack_7c = (undefined1 *)0x4eeda3;
    cVar2 = FUN_0042452b();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0x1f;
    if (cVar2 == '\0') {
      puStack_7c = (undefined1 *)0xb72;
      puStack_80 = (undefined *)(unaff_EBP + -0x5c);
      iStack_84 = 0x4eedc4;
      puVar4 = (undefined4 *)FUN_00679d22();
      puStack_7c = (undefined1 *)*puVar4;
      puStack_80 = (undefined *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      iStack_84 = 0x4eedd3;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    }
    else {
      puStack_7c = (undefined1 *)0xb73;
      puStack_80 = (undefined *)(unaff_EBP + -0x60);
      iStack_84 = 0x4eedf1;
      puVar4 = (undefined4 *)FUN_00679d22();
      puStack_7c = (undefined1 *)*puVar4;
      puStack_80 = (undefined *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iStack_84 = 0x4eee00;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    }
    puStack_7c = (undefined1 *)0x4eee0e;
    FUN_00414ebb();
    puStack_80 = (undefined *)(unaff_EBP + -0x10);
    puStack_7c = (undefined1 *)0x9;
    iStack_84 = 0x4eee19;
    FUN_00471102();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  puStack_7c = (undefined1 *)0x4ef065;
  FUN_00414ebb();
LAB_004ef065:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


