/* FUN_0042c7ee - 0x0042c7ee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042c7ee(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_58;
  undefined8 local_54;
  undefined8 local_4c;
  int iStack_44;
  int iStack_40;
  undefined8 local_3c;
  undefined8 local_34;
  
  FUN_00879bb8();
  if (extraout_ECX[8] < *(int *)(unaff_EBP + 8)) {
    local_34._4_4_ = 1;
    uVar4 = local_34._4_4_;
  }
  else {
    local_34 = CONCAT44(0x42c81e,(undefined4)local_34);
    uVar2 = __ftol();
    local_34 = CONCAT44(0x42c82c,(undefined4)local_34);
    uVar3 = FUN_004133f0();
    if (uVar3 % 0x3e9 <= uVar2) {
      if (*extraout_ECX == 0) {
        local_34 = 0x800040030042c84d;
        FUN_00878dfb();
      }
      local_34 = CONCAT44(0x42c854,(undefined4)local_34);
      uVar4 = FUN_0040cf4d();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
      local_34 = CONCAT44(0x42c85e,(undefined4)local_34);
      uVar2 = FUN_004133f0();
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(uint *)(unaff_EBP + -0x1c) = uVar2 % 0x2bd + 300;
      *(double *)(unaff_EBP + -0x1c) = (double)*(longlong *)(unaff_EBP + -0x1c) * _DAT_008e8a90;
      local_34 = CONCAT44(0x42c887,(int)local_34);
      FUN_0087a1b0();
      local_34 = 0;
      local_3c = ZEXT48(&stack0xffffffd4) << 0x20;
      iStack_40 = *(undefined4 *)(unaff_EBP + -0x10);
      iStack_44 = 0x42c895;
      uVar4 = FUN_0042517f();
      iStack_40 = 0x42c89d;
      local_3c._0_4_ = uVar4;
      local_3c._0_4_ = FUN_00412335();
      *(int *)(unaff_EBP + -0x10) = (int)&local_3c + 4;
      iStack_40 = 0x42c8a9;
      FUN_004033a1();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_3c = CONCAT44(local_3c._4_4_,unaff_EBP + -0x2c);
      iStack_40 = 0x42c8b8;
      FUN_0040263d();
      iStack_40 = 0x42c8bf;
      FUN_004048a4();
      uVar4 = 1;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      local_3c = CONCAT44(0x42c8cc,(undefined4)local_3c);
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x14) = iVar5;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      if (iVar5 != 0) {
        local_34 = CONCAT44(unaff_EBP + -0x14,0x42c8e2);
        iVar5 = FUN_00404b30();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          local_34 = CONCAT44(iVar5,0x42c8f3);
          FUN_00878dfb();
        }
      }
      local_34._4_4_ = unaff_EBP + -0x2c;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      local_34._0_4_ = 0x42c900;
      iVar6 = FUN_00402bc3();
      iVar5 = local_34._4_4_;
      if (iVar6 < 0) {
        local_34 = CONCAT44(iVar6,0x42c90b);
        FUN_00878dfb();
        iVar5 = extraout_ECX_00;
      }
      if (*(int *)(unaff_EBP + 8) == 0) goto LAB_0042c9e5;
      local_34 = 0;
      local_3c = *(undefined8 *)(unaff_EBP + -0x1c);
      iStack_40 = extraout_ECX[9];
      *(int **)(unaff_EBP + -0x10) = &iStack_44;
      local_4c = 2.16246851429786e-317;
      iStack_44 = iVar5;
      FUN_00424e0a();
      local_4c = (double)CONCAT44(-(extraout_ECX[0xb] >> 1),extraout_ECX[0xb] + 1);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      local_54 = (double)CONCAT44(0x42c94a,(undefined4)local_54);
      uVar4 = FUN_0042517f();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
      iVar5 = extraout_ECX[10];
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      local_4c = (double)*(longlong *)(unaff_EBP + -0x1c) + *(double *)(extraout_ECX + 4);
      local_54 = (double)CONCAT44(-(iVar5 >> 1),iVar5 + 1);
      uStack_58 = 0x42c96a;
      uVar4 = FUN_0042517f();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      local_54 = (double)*(longlong *)(unaff_EBP + -0x1c) + *(double *)(extraout_ECX + 2);
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_58;
      FUN_00424dbc(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00424e82();
      FUN_0042b7b9();
      if (((short *)extraout_ECX[1] != (short *)0x0) && (*(short *)extraout_ECX[1] != 0)) {
        local_34 = CONCAT44(0x42c9a9,(undefined4)local_34);
        iVar5 = FUN_007d1e08();
        if (DAT_00978128 + 0x32 < iVar5) {
          local_34 = 100;
          local_3c = CONCAT44(extraout_ECX[1],0x42c9c8);
          FUN_00433c19();
          local_34 = CONCAT44(0x42c9cd,(undefined4)local_34);
          DAT_00978128 = FUN_007d1e08();
        }
      }
      piVar1 = *(int **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piVar1 != (int *)0x0) {
        local_34 = CONCAT44(piVar1,0x42c9e3);
        (**(code **)(*piVar1 + 8))();
      }
    }
    uVar4 = 0;
  }
LAB_0042c9e5:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


