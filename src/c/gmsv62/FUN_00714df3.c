/* FUN_00714df3 - 0x00714df3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00714df3(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  uint auStack_28 [2];
  
  FUN_00879bb8();
  auStack_28[1] = 0;
  auStack_28[0] = 0x714e13;
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x70) + 4) + 0x1c))();
  *(undefined4 *)(extraout_ECX + 0xcc) = 0;
  *(uint *)(extraout_ECX + 0xd0) = *(uint *)(extraout_ECX + 0x5d0);
  auStack_28[0] = 0x714e32;
  FUN_00434e79();
  auStack_28[0] = 0x714e3d;
  FUN_00434e79();
  auStack_28[0] = *(uint *)(extraout_ECX + 0xd0);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while ((auStack_28[0] != 0 && (*(int *)(unaff_EBP + -0x10) < 0x14))) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(uint *)(unaff_EBP + -0x18) = auStack_28[0];
    iVar3 = *(int *)((-(uint)(auStack_28[0] != 0) & auStack_28[0] - 0x10) + 4);
    uVar5 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_005598d0();
    auStack_28[0] = 0x714e8b;
    uVar2 = FUN_0071b964();
    *(uint **)(unaff_EBP + -0x14) = auStack_28;
    auStack_28[0] = 0;
    FUN_00414f8b(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_0071b964();
    uVar2 = *(undefined4 *)(iVar3 + 4);
    FUN_0071b81b(uVar2);
    iVar3 = FUN_00718e1f(uVar2);
    if (iVar3 != 0) {
      if (*(int *)(unaff_EBP + -0x10) < 10) {
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
        auStack_28[0] = 0x714ece;
        puVar4 = (undefined4 *)FUN_00518b2e();
        iVar3 = *(int *)(unaff_EBP + -0x14);
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
        auStack_28[0] = 0x714ee1;
        puVar4 = (undefined4 *)FUN_00518b2e();
        iVar3 = *(int *)(unaff_EBP + -0x14);
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      iVar1 = *(int *)(unaff_EBP + -0x10);
      *puVar4 = *(undefined4 *)(iVar3 + 4);
      if (iVar1 == 0xb) {
        *(undefined4 *)(extraout_ECX + 0xd4) = *(undefined4 *)(unaff_EBP + -0x18);
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    auStack_28[0] = uVar5;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      auStack_28[0] = 0;
      FUN_005598ff();
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      auStack_28[0] = uVar5;
    }
  }
  *(uint *)(extraout_ECX + 0xd8) = auStack_28[0];
  auStack_28[0] = (uint)(*(int *)(extraout_ECX + 0xc0) != 0);
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x78) + 4) + 0x1c))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x80) + 4) + 0x1c))(0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


