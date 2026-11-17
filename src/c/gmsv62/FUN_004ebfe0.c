/* FUN_004ebfe0 - 0x004ebfe0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ebfe0(void)

{
  char *pcVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar10;
  int *local_98;
  
  FUN_00879bb8();
  iVar8 = DAT_00978368;
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(int *)(unaff_EBP + -0x30) = iVar8;
  local_98 = (int *)0x4ec00f;
  cVar4 = FUN_0042452b();
  if (cVar4 == '\t') {
    local_98 = (int *)(unaff_EBP + -0x14);
    FUN_0045cdbc();
    *(undefined4 *)(unaff_EBP + -4) = 0xc;
    local_98 = (int *)0x4ec428;
    cVar4 = FUN_0042452b();
    local_98 = (int *)0x4ec432;
    local_98 = (int *)FUN_0042459a();
    *(int **)(unaff_EBP + 8) = local_98;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (cVar4 == '\x02') {
      local_98 = (int *)0x9e;
      puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x38);
      local_98 = *(int **)(unaff_EBP + -0x14);
      uVar7 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00434e21(unaff_EBP + -0x18,uVar7);
      iVar8 = *(int *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
LAB_004ec7c6:
      if (iVar8 != 0) {
        local_98 = (int *)(iVar8 + -0xc);
        FUN_00434e38();
      }
    }
    else {
      if (cVar4 == '\x03') {
        uVar7 = FUN_004ec897();
        local_98 = (int *)0xffffffff;
        *(undefined4 *)(unaff_EBP + 8) = 0;
        FUN_00414edd(uVar7);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        if ((*(char **)(unaff_EBP + 8) == (char *)0x0) || (**(char **)(unaff_EBP + 8) == '\0')) {
          local_98 = (int *)0x9c;
          puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x54);
          local_98 = *(int **)(unaff_EBP + -0x14);
          uVar7 = *puVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          FUN_00434e21(unaff_EBP + -0x18,uVar7);
          iVar8 = *(int *)(unaff_EBP + -0x54);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
        }
        else {
          local_98 = (int *)0x9d;
          puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x7c);
          local_98 = *(int **)(unaff_EBP + 8);
          uVar7 = *puVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          FUN_00434e21(unaff_EBP + -0x18,uVar7,*(undefined4 *)(unaff_EBP + -0x14));
          iVar8 = *(int *)(unaff_EBP + -0x7c);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
        }
        if (iVar8 != 0) {
          local_98 = (int *)(iVar8 + -0xc);
          FUN_00434e38();
        }
        iVar8 = *(int *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        goto LAB_004ec7c6;
      }
      if (cVar4 == '\x04') {
        local_98 = (int *)0x9c;
        puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x5c);
        local_98 = *(int **)(unaff_EBP + -0x14);
        uVar7 = *puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_00434e21(unaff_EBP + -0x18,uVar7);
        iVar8 = *(int *)(unaff_EBP + -0x5c);
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        goto LAB_004ec7c6;
      }
      if (cVar4 == '\x01') {
        local_98 = (int *)0x4ec574;
        uVar7 = FUN_0042459a();
        *(undefined4 *)(unaff_EBP + -0x68) = uVar7;
        local_98 = (int *)0x4ec57e;
        uVar7 = FUN_0042459a();
        piVar2 = *(int **)(unaff_EBP + 8);
        *(undefined4 *)(unaff_EBP + -0x60) = uVar7;
        if ((int)((ZEXT48(piVar2) / 1000000) % 100) == 9) {
          local_98 = (int *)0x4ec5a9;
          uVar6 = FUN_0045e4b8();
          if ((uVar6 & 1) == 0) {
            local_98 = (int *)0xa0;
            puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x70);
            local_98 = *(int **)(unaff_EBP + -0x14);
            uVar7 = *puVar5;
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            FUN_00434e21(unaff_EBP + -0x18,uVar7);
            iVar8 = *(int *)(unaff_EBP + -0x70);
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            goto LAB_004ec7c6;
          }
        }
        local_98 = piVar2;
        FUN_004e61ea(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        if (*(int *)(unaff_EBP + -0x2c) == 0) {
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          local_98 = (int *)0x4ec7e2;
          FUN_004027eb();
        }
        else {
          local_98 = (int *)0x6c6;
          puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x74);
          local_98 = (int *)*puVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          FUN_00550c58(unaff_EBP + -0x1c,piVar2);
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          if (*(int *)(unaff_EBP + -0x74) != 0) {
            local_98 = (int *)(*(int *)(unaff_EBP + -0x74) + -0xc);
            FUN_00434e38();
          }
          local_98 = (int *)0x6c7;
          puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x3c);
          local_98 = (int *)*puVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          FUN_00550c58(unaff_EBP + -0x20,piVar2);
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          local_98 = (int *)0x4ec63c;
          FUN_00414ebb();
          if ((*(char **)(unaff_EBP + -0x20) == (char *)0x0) ||
             (**(char **)(unaff_EBP + -0x20) == '\0')) {
            local_98 = (int *)(unaff_EBP + -0x1c);
            FUN_00414f8b();
          }
          else {
            local_98 = (int *)0x707;
            puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x40);
            local_98 = *(int **)(unaff_EBP + -0x20);
            uVar7 = *puVar5;
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            FUN_00434e21(unaff_EBP + -0x10,uVar7,*(undefined4 *)(unaff_EBP + -0x1c));
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            local_98 = (int *)0x4ec68a;
            FUN_00414ebb();
          }
          local_98 = (int *)0x9f;
          puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x48);
          local_98 = *(int **)(unaff_EBP + -0x10);
          uVar7 = *puVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          FUN_00434e21(unaff_EBP + -0x18,uVar7,*(undefined4 *)(unaff_EBP + -0x14));
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          local_98 = (int *)0x4ec6bf;
          FUN_00414ebb();
          local_98 = (int *)0x4ec6cd;
          uVar6 = FUN_0045e4b8();
          if ((uVar6 & 1) != 0) {
            local_98 = (int *)0x70b;
            puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x50);
            uVar7 = *puVar5;
            *(undefined4 *)(unaff_EBP + -0x34) = 0;
            *(undefined1 *)(unaff_EBP + -4) = 0x20;
            local_98 = piVar2;
            piVar9 = (int *)FUN_00434e21(unaff_EBP + -0x34,uVar7);
            iVar8 = *piVar9;
            if (iVar8 == 0) {
              local_98 = (int *)0x0;
            }
            else {
              local_98 = *(int **)(iVar8 + -4);
            }
            FUN_0045efbb(iVar8);
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            local_98 = (int *)0x4ec71b;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            local_98 = (int *)0x4ec727;
            FUN_00414ebb();
          }
          if (DAT_00979244 != 0) {
            local_98 = piVar2;
            piVar9 = (int *)FUN_004e61ea(unaff_EBP + -0x58);
            local_98 = *(int **)(unaff_EBP + -0x58);
            *(bool *)(unaff_EBP + 0xb) = *piVar9 != 0;
            if (local_98 != (int *)0x0) {
              (**(code **)(*local_98 + 8))();
            }
            if (*(char *)(unaff_EBP + 0xb) != '\0') {
              local_98 = *(int **)(unaff_EBP + -0x60);
              FUN_004ea30d(piVar2,0,0,*(undefined4 *)(unaff_EBP + -0x68));
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          local_98 = (int *)0x4ec770;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          local_98 = (int *)0x4ec77c;
          FUN_00414ebb();
          local_98 = *(int **)(unaff_EBP + -0x2c);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          if (local_98 != (int *)0x0) {
            (**(code **)(*local_98 + 8))();
          }
        }
      }
      else {
        local_98 = (int *)0x9c;
        puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x78);
        local_98 = *(int **)(unaff_EBP + -0x14);
        uVar7 = *puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        FUN_00434e21(unaff_EBP + -0x18,uVar7);
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        local_98 = (int *)0x4ec819;
        FUN_00414ebb();
      }
    }
    if ((*(char **)(unaff_EBP + -0x10) == (char *)0x0) || (**(char **)(unaff_EBP + -0x10) == '\0'))
    {
      bVar3 = 1;
    }
    else {
      bVar3 = 0;
    }
    local_98 = (int *)((-(uint)bVar3 & 5) + 7);
    FUN_00471102(unaff_EBP + -0x18);
    iVar8 = *(int *)(unaff_EBP + -0x24);
    *(undefined4 *)(iVar8 + 0x1dc) = 0;
    local_98 = (int *)0x4ec850;
    uVar7 = (*DAT_0097b704)();
    *(undefined4 *)(iVar8 + 0x1e4) = uVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    local_98 = (int *)0x4ec862;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    local_98 = (int *)0x4ec86e;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    local_98 = (int *)0x4ec87a;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_004ec881:
    local_98 = (int *)0x4ec886;
    FUN_00414ebb();
  }
  else {
    if (cVar4 == '\n') {
      local_98 = (int *)(unaff_EBP + -0x10);
      FUN_0045cdbc();
      *(undefined4 *)(unaff_EBP + -4) = 8;
      local_98 = (int *)0x4ec301;
      uVar6 = FUN_0042452b();
      *(uint *)(unaff_EBP + -0x24) = uVar6 & 0xff;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      pcVar1 = *(char **)(extraout_ECX + 0x1e0);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
        local_98 = (int *)0x70a;
        puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x84);
        local_98 = *(int **)(extraout_ECX + 0x1e0);
        uVar7 = *puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_00434e21(unaff_EBP + 8,uVar7,*(undefined4 *)(unaff_EBP + -0x10));
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (*(int *)(unaff_EBP + -0x84) != 0) {
          local_98 = (int *)(*(int *)(unaff_EBP + -0x84) + -0xc);
          FUN_00434e38();
        }
        local_98 = (int *)0x1;
        FUN_00471102(unaff_EBP + 8);
      }
      if (*(int *)(unaff_EBP + -0x24) == 0) {
        local_98 = (int *)0x4ec382;
        FUN_00495ba8();
        local_98 = (int *)0x9c;
        puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x4c);
        local_98 = *(int **)(unaff_EBP + -0x10);
        uVar7 = *puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00434e21(unaff_EBP + 8,uVar7);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (*(int *)(unaff_EBP + -0x4c) != 0) {
          local_98 = (int *)(*(int *)(unaff_EBP + -0x4c) + -0xc);
          FUN_00434e38();
        }
        local_98 = (int *)0xc;
        FUN_00471102(unaff_EBP + 8);
      }
      *(undefined4 *)(extraout_ECX + 0x1dc) = 0;
      local_98 = (int *)0x4ec3d6;
      uVar7 = (*DAT_0097b704)();
      *(undefined4 *)(extraout_ECX + 0x1e4) = uVar7;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int *)(unaff_EBP + 8) != 0) {
        local_98 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar8 = *(int *)(unaff_EBP + -0x10);
    }
    else {
      if (cVar4 != '\x12') {
        if (cVar4 != '\"') goto LAB_004ec886;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        local_98 = (int *)(unaff_EBP + -0x20);
        *(undefined4 *)(unaff_EBP + -4) = 0x22;
        FUN_0045cdbc();
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        local_98 = (int *)0x4ec054;
        cVar4 = FUN_0042452b();
        if (cVar4 == '\0') {
          local_98 = (int *)0xa1;
          puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x80);
          local_98 = *(int **)(unaff_EBP + -0x20);
          uVar7 = *puVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          FUN_00434e21(unaff_EBP + -0x1c,uVar7);
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          local_98 = (int *)0x4ec0d1;
          FUN_00414ebb();
          local_98 = (int *)0x1;
        }
        else {
          local_98 = (int *)0x4ec063;
          FUN_00495ba8();
          local_98 = (int *)0x9c;
          puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x6c);
          local_98 = *(int **)(unaff_EBP + -0x20);
          uVar7 = *puVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          FUN_00434e21(unaff_EBP + -0x1c,uVar7);
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          local_98 = (int *)0x4ec098;
          FUN_00414ebb();
          local_98 = (int *)0xc;
        }
        FUN_00471102(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        local_98 = (int *)0x4ec0ea;
        FUN_00414ebb();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        goto LAB_004ec881;
      }
      local_98 = (int *)(unaff_EBP + 8);
      FUN_0045cdbc();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      local_98 = (int *)0x4ec10b;
      cVar4 = FUN_0042452b();
      local_98 = (int *)0x4ec115;
      uVar6 = FUN_0042452b();
      *(uint *)(unaff_EBP + -0x24) = uVar6 & 0xff;
      local_98 = (int *)(unaff_EBP + -0x14);
      FUN_0045cdbc();
      local_98 = (int *)0x1;
      uVar10 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uVar7 = FUN_00415015(0x400,1);
      FUN_00471777(uVar7,uVar10);
      local_98 = (int *)0xffffffff;
      FUN_004150c0();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iVar8 = *(int *)(DAT_00978368 + 0x204c);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (cVar4 == iVar8) {
        local_98 = (int *)0x708;
        puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -100);
        local_98 = *(int **)(unaff_EBP + -0x14);
        uVar7 = *puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00434e21(unaff_EBP + -0x10,uVar7,*(undefined4 *)(unaff_EBP + 8));
        iVar8 = *(int *)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 2;
      }
      else {
        local_98 = (int *)0x709;
        puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x44);
        local_98 = *(int **)(unaff_EBP + -0x14);
        uVar7 = *puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        uVar10 = FUN_004ec897((int)cVar4);
        FUN_00434e21(unaff_EBP + -0x10,uVar7,*(undefined4 *)(unaff_EBP + 8),uVar10);
        iVar8 = *(int *)(unaff_EBP + -0x44);
        *(undefined1 *)(unaff_EBP + -4) = 2;
      }
      if (iVar8 != 0) {
        local_98 = (int *)(iVar8 + -0xc);
        FUN_00434e38();
      }
      if (*(int *)(unaff_EBP + -0x24) == 0) {
        if (*(int *)(DAT_00978134 + 0x20) != 0) {
          *(int ***)(unaff_EBP + -0x28) = &local_98;
          local_98 = (int *)0x0;
          FUN_00414f8b(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          FUN_004f14ee();
          iVar8 = FUN_0047c5bf();
          if (iVar8 == 0) goto LAB_004ec27d;
        }
        local_98 = (int *)0x0;
        FUN_0060142b(0x6c,0);
        local_98 = (int *)0x22;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_00457cda();
        *(int ***)(unaff_EBP + -0x28) = &local_98;
        local_98 = (int *)0x0;
        FUN_00414f8b(unaff_EBP + 8);
        FUN_00459cb5();
        local_98 = (int *)(unaff_EBP + -0x94);
        FUN_004751b2();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        local_98 = (int *)0x4ec27b;
        FUN_0045ebca();
      }
      else {
LAB_004ec27d:
        local_98 = (int *)0x1;
        FUN_00471102(unaff_EBP + -0x10);
      }
      if (DAT_00978360 != 0) {
        *(int ***)(unaff_EBP + -0x28) = &local_98;
        local_98 = (int *)0x0;
        FUN_00414f8b(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_00449784();
        FUN_00748724();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        local_98 = (int *)(*(int *)(unaff_EBP + -0x10) + -0xc);
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        local_98 = (int *)(*(int *)(unaff_EBP + -0x14) + -0xc);
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar8 = *(int *)(unaff_EBP + 8);
    }
    if (iVar8 != 0) {
      local_98 = (int *)(iVar8 + -0xc);
      FUN_00434e38();
    }
  }
LAB_004ec886:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


