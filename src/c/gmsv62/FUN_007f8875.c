/* FUN_007f8875 - 0x007f8875 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007f8875(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  float10 fVar8;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined8 local_10;
  uint local_8;
  
  uVar7 = 1;
  if (*(int *)(param_1 + 0x47c) == 0) goto LAB_007f89f9;
  iVar4 = param_1 + 0x20;
  local_8 = 0;
  local_10 = (double)((ulonglong)local_10 & 0xffffffff);
  FUN_004f1993(iVar4,*(undefined4 *)(param_1 + 0x30));
  uVar2 = __ftol();
  iVar3 = FUN_0087a90a(uVar2);
  if (9 < iVar3) {
    fVar8 = (float10)FUN_004f1993(iVar4,*(undefined4 *)(param_1 + 0x30));
    if (fVar8 <= (float10)*(int *)(param_1 + 0x474)) {
      local_8 = 1;
    }
    else {
      local_8 = 0xffffffff;
    }
  }
  FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
  uVar2 = __ftol();
  iVar3 = FUN_0087a90a(uVar2);
  if (iVar3 < 10) {
    local_10 = (double)CONCAT44(0xffffffff,(undefined4)local_10);
  }
  else {
    fVar8 = (float10)FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
    if ((float10)*(int *)(param_1 + 0x478) < fVar8) {
      FUN_007f1fec();
    }
  }
  FUN_007f7fd3(local_8,local_10._4_4_);
  FUN_004f1993(iVar4,*(undefined4 *)(param_1 + 0x30));
  local_1c = __ftol();
  FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
  uVar2 = __ftol();
  local_2c = 0xfffffff5;
  local_28 = 0xfffffff5;
  local_24 = 0xb0000000b;
  local_3c = 0xffffff6a;
  local_38 = 0xffffff6a;
  local_34 = 0x96;
  local_30 = 0x96;
  (*DAT_0097b54c)(&local_2c,*(undefined4 *)(param_1 + 0x474),*(undefined4 *)(param_1 + 0x478));
  (*DAT_0097b54c)(&local_3c,*(undefined4 *)(param_1 + 0x474),*(undefined4 *)(param_1 + 0x478));
  iVar4 = (*DAT_0097b57c)(&local_2c,local_1c,uVar2);
  if (iVar4 == 0) {
    if (*(int **)(param_1 + 0x240) == (int *)0x0) goto LAB_007f89f9;
    puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x240) + 0x10))();
    iVar4 = (*DAT_0097b57c)(&local_3c,*puVar5,puVar5[1]);
    if (iVar4 != 0) goto LAB_007f89f9;
  }
  *(undefined4 *)(param_1 + 0x47c) = 0;
LAB_007f89f9:
  iVar4 = *(int *)(param_1 + 0x47c);
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  if ((iVar4 != 0) || (uVar2 = uVar7, *(int *)(param_1 + 0x240) == 0)) {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x2d8) = uVar2;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  if ((iVar4 != 0) || (*(int *)(param_1 + 0x240) != 0)) {
    uVar7 = 0;
  }
  *(undefined4 *)(param_1 + 0x3dc) = uVar7;
  *(undefined4 *)(param_1 + 0x464) = 1;
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x240) != 0) {
      *(undefined4 *)(param_1 + 0x2dc) = 1;
      *(undefined4 *)(param_1 + 0x304) = 1;
      *(undefined4 *)(param_1 + 0x330) = 1;
      puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x240) + 0x10))();
      *(undefined4 *)(param_1 + 0x338) = *puVar5;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x240) + 0x10))();
      *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(iVar4 + 4);
      if (*(int *)(param_1 + 0x484) == 0) {
        uVar6 = FUN_004133f0();
        *(uint *)(param_1 + 0x484) = uVar6 % 0x3c + 0x3c;
      }
      puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x240) + 0x10))();
      *(undefined4 *)(param_1 + 0x474) = *puVar5;
      *(undefined4 *)(param_1 + 0x478) = puVar5[1];
      uVar6 = FUN_004133f0();
      *(undefined4 *)(param_1 + 0x308) = 1;
      *(uint *)(param_1 + 0x300) = uVar6 % 0xf0;
      *(int *)(param_1 + 0x474) = *(int *)(param_1 + 0x474) + (uVar6 % 0xf0 - 0x78);
      uVar6 = FUN_004133f0();
      *(undefined4 *)(param_1 + 0x334) = 1;
      piVar1 = (int *)(param_1 + 0x478);
      *(uint *)(param_1 + 0x32c) = uVar6 % 0x50;
      *(undefined4 *)(param_1 + 0x480) = 0xffffffff;
      *piVar1 = *piVar1 + (uVar6 % 0x50 - 0x28);
      *(int *)(param_1 + 0x484) = *(int *)(param_1 + 0x484) + -1;
      *(undefined4 *)(param_1 + 0x47c) = 1;
      *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x474);
      *(int *)(param_1 + 0x344) = *piVar1;
      if (*(int *)(param_1 + 0x484) < 1) {
        FUN_007f73d8(0,0,0);
      }
    }
    *(uint *)(param_1 + 0x3dc) = (uint)(*(int *)(param_1 + 0x240) == 0);
    if (*(int *)(param_1 + 0x240) == 0) {
      *(undefined4 *)(param_1 + 0x3e0) = 1;
      *(undefined4 *)(param_1 + 0x36c) = 1;
      *(undefined4 *)(param_1 + 0x398) = 1;
      *(undefined4 *)(param_1 + 0x3c4) = 1;
      iVar4 = DAT_00978138;
      local_14 = DAT_00978138;
      if ((*(int *)(param_1 + 0x484) < 1) || (*(int *)(param_1 + 0x480) < 0)) {
        *(undefined4 *)(param_1 + 0x2a4) = 1;
        if (*(int *)(iVar4 + 0x38) == 0) {
          local_8 = 0;
        }
        else {
          local_8 = *(uint *)(*(int *)(iVar4 + 0x38) + -4);
        }
        uVar6 = FUN_004133f0();
        if (0 < (int)local_8) {
          uVar6 = uVar6 % local_8;
        }
        *(uint *)(param_1 + 0x2a0) = uVar6;
        *(undefined4 *)(param_1 + 0x2a8) = 1;
        iVar3 = *(int *)(*(int *)(iVar4 + 0x38) + uVar6 * 4);
        *(int *)(param_1 + 0x480) = iVar3;
        local_10 = (double)CONCAT44(*(int *)(iVar4 + 0x34) + iVar3 * 8,(undefined4)local_10);
        uVar6 = FUN_004133f0();
        *(uint *)(param_1 + 0x484) = (local_10._4_4_[1] - *local_10._4_4_) + 0x28 + uVar6 % 200 >> 3
        ;
        *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_1 + 0x480);
      }
      piVar1 = (int *)(*(int *)(iVar4 + 0x3c) + *(int *)(param_1 + 0x480) * 4);
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        local_8 = 0;
      }
      else {
        local_8 = *(uint *)(iVar4 + -4);
      }
      local_10._4_4_ = piVar1;
      uVar6 = FUN_004133f0();
      if (0 < (int)local_8) {
        uVar6 = uVar6 % local_8;
      }
      *(uint *)(param_1 + 0x368) = uVar6;
      *(undefined4 *)(param_1 + 0x370) = 1;
      local_18 = *(undefined4 *)(*local_10._4_4_ + uVar6 * 4);
      iVar4 = FUN_004d19c1(local_18);
      local_10._4_4_ = (int *)__ftol();
      local_8 = FUN_004133f0();
      if (0 < (int)local_10._4_4_) {
        local_8 = local_8 % (uint)local_10._4_4_;
      }
      local_10 = (double)(int)local_8;
      *(uint *)(param_1 + 0x394) = local_8;
      *(undefined4 *)(param_1 + 0x39c) = 1;
      uVar7 = __ftol();
      *(undefined4 *)(param_1 + 0x474) = uVar7;
      local_24 = *(undefined8 *)(iVar4 + 0x38);
      local_14 = *(undefined4 *)(iVar4 + 0x10);
      uVar6 = FUN_004133f0();
      *(undefined4 *)(param_1 + 0x3c8) = 1;
      local_10 = (double)(ulonglong)(uVar6 % 0x3c);
      *(uint *)(param_1 + 0x3c0) = uVar6 % 0x3c;
      uVar7 = __ftol();
      *(int *)(param_1 + 0x484) = *(int *)(param_1 + 0x484) + -1;
      *(undefined4 *)(param_1 + 0x3cc) = local_18;
      *(uint *)(param_1 + 0x3d0) = local_8;
      *(undefined4 *)(param_1 + 0x478) = uVar7;
      *(undefined4 *)(param_1 + 0x47c) = 1;
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x474);
      *(undefined4 *)(param_1 + 0x3d8) = uVar7;
    }
  }
  if (*(int *)(param_1 + 0x464) == 0) {
    *(undefined4 *)(param_1 + 0x46c) = 0;
  }
  return;
}


