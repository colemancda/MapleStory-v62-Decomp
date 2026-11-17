/* FUN_0063920e - 0x0063920e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_0063920e(void)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int unaff_EBP;
  int iVar5;
  int *local_6c;
  
  FUN_00879bb8();
  local_6c = (int *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00638e03();
  local_6c = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00638dca(unaff_EBP + -0x38);
  piVar3 = *(int **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if ((int)piVar3 < 0) {
    if (*(int *)(unaff_EBP + -0x34) == 0) {
      *(int ***)(unaff_EBP + 0x10) = &local_6c;
      FUN_00679e4e(&local_6c,0x3d8);
      iVar5 = unaff_EBP + -0x68;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_0040263d(iVar5);
      local_6c = (int *)FUN_004048a4(iVar5);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      local_6c = (int *)FUN_00412348(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      FUN_00417232();
      local_6c = *(int **)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      if (local_6c != (int *)0x0) {
        (**(code **)(*local_6c + 8))();
      }
      local_6c = (int *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      local_6c = (int *)FUN_00402bc3();
      if ((int)local_6c < 0) {
        FUN_00878dfb();
      }
    }
    else {
      *(undefined4 *)(unaff_EBP + 0x10) = 0;
      local_6c = (int *)0xbcc;
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x2c);
      uVar1 = *puVar4;
      local_6c = *(int **)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      FUN_0041354c(unaff_EBP + 0x10,uVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      local_6c = (int *)0x6397c4;
      FUN_00402676();
      local_6c = (int *)0x6397cc;
      uVar1 = FUN_00411641();
      *(int ***)(unaff_EBP + -0x30) = &local_6c;
      FUN_00402e8e(uVar1);
      iVar5 = unaff_EBP + -0x68;
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      FUN_0040263d(iVar5);
      local_6c = (int *)FUN_004048a4(iVar5);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      local_6c = (int *)FUN_00412348(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      FUN_00417232();
      local_6c = *(int **)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      if (local_6c != (int *)0x0) {
        (**(code **)(*local_6c + 8))();
      }
      local_6c = (int *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      local_6c = (int *)FUN_00402bc3();
      if ((int)local_6c < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      local_6c = (int *)0x639848;
      FUN_00402676();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      local_6c = (int *)0x0;
      FUN_006358c0();
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
    }
    local_6c = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (local_6c != (int *)0x0) {
      (**(code **)(*local_6c + 8))();
    }
  }
  else {
    local_6c = (int *)0x63925a;
    FUN_0087a1b0();
    local_6c = (int *)&stack0xffffff98;
    uVar1 = FUN_00412335(*(undefined4 *)(unaff_EBP + 0xc));
    *(int ***)(unaff_EBP + -0x2c) = &local_6c;
    FUN_00402e8e(uVar1);
    iVar5 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0040263d(iVar5);
    local_6c = (int *)FUN_004048a4(iVar5);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    local_6c = (int *)FUN_00412348(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00417232();
    local_6c = (int *)0x6392af;
    FUN_004027b3();
    local_6c = (int *)(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piVar2 = (int *)FUN_00402bc3();
    if ((int)piVar2 < 0) {
      local_6c = piVar2;
      FUN_00878dfb();
      local_6c = extraout_ECX;
    }
    if ((*(int **)(unaff_EBP + -0x34) != (int *)0x0) && (*(int *)(unaff_EBP + 0xc) != 0)) {
      iVar5 = **(int **)(unaff_EBP + -0x34);
      if ((iVar5 == 0) || (*(int **)(iVar5 + -4) <= piVar3)) {
        *(int ***)(unaff_EBP + -0x2c) = &local_6c;
        FUN_00679e4e(&local_6c,0x3d8);
        iVar5 = unaff_EBP + -0x58;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_0040263d(iVar5);
        local_6c = (int *)FUN_004048a4(iVar5);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        local_6c = (int *)FUN_00412348(unaff_EBP + -0x24);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        FUN_00417232();
        local_6c = (int *)0x63933f;
        FUN_004027b3();
        local_6c = (int *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        piVar3 = (int *)FUN_00402bc3();
        if ((int)piVar3 < 0) {
          local_6c = piVar3;
          FUN_00878dfb();
          local_6c = extraout_ECX_00;
        }
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          *(int ***)(unaff_EBP + -0x30) = &local_6c;
          FUN_00679e4e(&local_6c,0x3d8);
          iVar5 = unaff_EBP + -0x68;
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          FUN_0040263d(iVar5);
          local_6c = (int *)FUN_004048a4(iVar5);
          *(undefined4 *)(unaff_EBP + -0x10) = 2;
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          local_6c = (int *)FUN_00412348(unaff_EBP + -0x2c);
          *(undefined4 *)(unaff_EBP + -0x10) = 6;
          *(undefined4 *)(unaff_EBP + -4) = 0x14;
          piVar3 = (int *)FUN_00417232();
          *(undefined4 *)(unaff_EBP + -0x10) = 0xe;
        }
        else {
          piVar3 = (int *)(unaff_EBP + -0x18);
        }
        piVar2 = *(int **)(unaff_EBP + 8);
        *piVar2 = *piVar3;
        local_6c = (int *)0x6393ca;
        FUN_004125cc();
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
        if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
          local_6c = (int *)0x6393e0;
          FUN_004027eb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0x13;
        if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
          local_6c = *(int **)(unaff_EBP + -0x2c);
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
          if (local_6c != (int *)0x0) {
            (**(code **)(*local_6c + 8))();
          }
        }
        *(undefined4 *)(unaff_EBP + -4) = 0x10;
        if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
          local_6c = (int *)(unaff_EBP + -0x68);
          local_6c = (int *)FUN_00402bc3();
          if ((int)local_6c < 0) {
            FUN_00878dfb();
          }
        }
        local_6c = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (local_6c != (int *)0x0) {
          (**(code **)(*local_6c + 8))();
        }
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        local_6c = (int *)0xbcd;
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x2c);
        uVar1 = *puVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        local_6c = piVar3;
        FUN_0041354c(unaff_EBP + -0x1c,uVar1);
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        local_6c = (int *)0x639479;
        FUN_00402676();
        local_6c = (int *)0x639481;
        uVar1 = FUN_00411641();
        *(int ***)(unaff_EBP + -0x30) = &local_6c;
        FUN_00402e8e(uVar1);
        iVar5 = unaff_EBP + -0x68;
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        FUN_0040263d(iVar5);
        local_6c = (int *)FUN_004048a4(iVar5);
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        local_6c = (int *)FUN_00412348(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        FUN_00417232();
        local_6c = *(int **)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        if (local_6c != (int *)0x0) {
          (**(code **)(*local_6c + 8))();
        }
        local_6c = (int *)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        piVar3 = (int *)FUN_00402bc3();
        if ((int)piVar3 < 0) {
          local_6c = piVar3;
          FUN_00878dfb();
          local_6c = extraout_ECX_01;
        }
        if (*(int *)(unaff_EBP + 0x10) == 0) {
          *(int ***)(unaff_EBP + -0x30) = &local_6c;
          FUN_00679e4e(&local_6c,0x3d8);
          iVar5 = unaff_EBP + -0x58;
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          FUN_0040263d(iVar5);
          local_6c = (int *)FUN_004048a4(iVar5);
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          local_6c = (int *)FUN_00412348(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          local_6c = (int *)FUN_0041a425();
          if (((int)local_6c < 0) && (local_6c != (int *)0x80004002)) {
            FUN_00878dfb();
          }
          local_6c = *(int **)(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          if (local_6c != (int *)0x0) {
            (**(code **)(*local_6c + 8))();
          }
          local_6c = (int *)(unaff_EBP + -0x58);
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          piVar3 = (int *)FUN_00402bc3();
          if ((int)piVar3 < 0) {
            local_6c = piVar3;
            FUN_00878dfb();
            local_6c = extraout_ECX_02;
          }
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            *(int ***)(unaff_EBP + -0x30) = &local_6c;
            FUN_00679e4e(&local_6c,0x3d8);
            iVar5 = unaff_EBP + -0x58;
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            FUN_0040263d(iVar5);
            local_6c = (int *)FUN_004048a4(iVar5);
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            local_6c = (int *)FUN_00412348(unaff_EBP + -0x28);
            *(undefined1 *)(unaff_EBP + -4) = 0x22;
            local_6c = (int *)FUN_0041a425();
            if (((int)local_6c < 0) && (local_6c != (int *)0x80004002)) {
              FUN_00878dfb();
            }
            local_6c = *(int **)(unaff_EBP + -0x28);
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            if (local_6c != (int *)0x0) {
              (**(code **)(*local_6c + 8))();
            }
            local_6c = (int *)(unaff_EBP + -0x58);
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            local_6c = (int *)FUN_00402bc3();
            if ((int)local_6c < 0) {
              FUN_00878dfb();
            }
          }
        }
        local_6c = *(int **)(unaff_EBP + 0x10);
        piVar2 = *(int **)(unaff_EBP + 8);
        *piVar2 = (int)local_6c;
        if (local_6c != (int *)0x0) {
          (**(code **)(*local_6c + 4))();
        }
        local_6c = *(int **)(unaff_EBP + 0x10);
        *(undefined4 *)(unaff_EBP + -0x10) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (local_6c != (int *)0x0) {
          (**(code **)(*local_6c + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        local_6c = (int *)0x63962d;
        FUN_00402676();
      }
      local_6c = *(int **)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (local_6c != (int *)0x0) {
        (**(code **)(*local_6c + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x34) != 0) {
        local_6c = (int *)0x0;
        FUN_006358c0();
        *(undefined4 *)(unaff_EBP + -0x34) = 0;
      }
      local_6c = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (local_6c != (int *)0x0) {
        (**(code **)(*local_6c + 8))();
      }
      goto LAB_00639870;
    }
    *(int ***)(unaff_EBP + -0x30) = &local_6c;
    FUN_00679e4e(&local_6c,0x3d8);
    iVar5 = unaff_EBP + -0x68;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_0040263d(iVar5);
    local_6c = (int *)FUN_004048a4(iVar5);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    local_6c = (int *)FUN_00412348(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00417232();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    local_6c = (int *)0x6396c3;
    FUN_004027b3();
    local_6c = (int *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    local_6c = (int *)FUN_00402bc3();
    if ((int)local_6c < 0) {
      FUN_00878dfb();
    }
    local_6c = (int *)0x6396e3;
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_6c = (int *)0x6396ef;
    FUN_0063587b();
    local_6c = (int *)0x6396f7;
    FUN_004027eb();
  }
  piVar2 = *(int **)(unaff_EBP + 8);
LAB_00639870:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar2;
}


