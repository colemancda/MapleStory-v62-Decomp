/* FUN_00714756 - 0x00714756 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00714756(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int extraout_ECX;
  uint uVar6;
  uint uVar7;
  int unaff_EBP;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  int iStack_2c;
  uint uStack_28;
  uint local_24;
  
  FUN_00879bb8();
  iVar3 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x10) = DAT_00979174;
  if (iVar3 == 1000) {
    local_24 = 0;
    uStack_28 = 0x714782;
    FUN_00718149();
  }
  else {
    if (iVar3 == 0x3e9) {
      local_24 = 0x71479f;
      FUN_00434e79();
      local_24 = extraout_ECX + 0xa4;
      uStack_28 = 0x7147ad;
      FUN_00559727();
      local_24 = 0x7147b4;
      FUN_00434e79();
      local_24 = extraout_ECX + 0x90;
      uStack_28 = 0x7147c2;
      FUN_00559727();
      *(undefined4 *)(extraout_ECX + 0xd8) = *(undefined4 *)(extraout_ECX + 0xd4);
      *(undefined4 *)(extraout_ECX + 0xd4) = *(undefined4 *)(extraout_ECX + 0xd0);
      *(int *)(extraout_ECX + 0xd0) = *(int *)(extraout_ECX + 0xcc);
      local_24 = 0x7147f1;
      FUN_00434e79();
      iVar3 = *(int *)(extraout_ECX + 0xd0);
      iVar3 = *(int *)((-(uint)(iVar3 != 0) & iVar3 - 0x10U) + 8);
      *(undefined4 *)(unaff_EBP + 8) = 0;
      uVar7 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
      while ((uVar7 != 0 && (*(int *)(unaff_EBP + 8) < 10))) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        *(uint *)(unaff_EBP + -0x18) = uVar7;
        iVar3 = *(int *)((-(uint)(uVar7 != 0) & uVar7 - 0x10) + 8);
        uVar6 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        *(uint *)(unaff_EBP + -0x14) = uVar7;
        local_24 = 0x71484e;
        FUN_0055992e();
        local_24 = 0x714856;
        FUN_0071ba9f();
        *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4);
        local_24 = 0x714867;
        uStack_28 = FUN_0071b964();
        *(uint **)(unaff_EBP + -0x14) = &local_24;
        local_24 = 0;
        iStack_2c = 0x714875;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        uStack_28 = 0x714880;
        iVar3 = FUN_0071b964();
        uStack_28 = *(undefined4 *)(iVar3 + 4);
        iStack_2c = 0x71488b;
        iVar3 = FUN_00718e1f();
        if (iVar3 != 0) {
          *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
          local_24 = 0x7148a0;
          puVar4 = (undefined4 *)FUN_0071bc2b();
          uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4);
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
          *puVar4 = uVar1;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uVar7 = uVar6;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          local_24 = 0;
          uStack_28 = 0x7148bd;
          FUN_005598ff();
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        }
      }
      *(undefined4 *)(extraout_ECX + 0xcc) = *(undefined4 *)(unaff_EBP + -0x18);
      local_24 = 1;
      uStack_28 = 0x7148de;
      (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x78) + 4) + 0x1c))();
      iVar2 = *(int *)(extraout_ECX + 0x98);
      iVar3 = *(int *)(extraout_ECX + 0x70);
    }
    else {
      if (iVar3 != 0x3ea) {
        if ((iVar3 == 0x3eb) && (local_24 = *(uint *)(extraout_ECX + 0x88), -1 < (int)local_24)) {
          uStack_28 = 0x714a69;
          puVar5 = (uint *)FUN_005d1241();
          uVar7 = *puVar5;
          uStack_28 = unaff_EBP + -0x10;
          iStack_2c = 0x714a7b;
          local_24 = uVar7;
          FUN_0045a1d8();
          local_24 = 0xde4;
          uStack_28 = unaff_EBP + -0x18;
          *(undefined4 *)(unaff_EBP + -4) = 4;
          iStack_2c = 0x714a95;
          puVar4 = (undefined4 *)FUN_00679d22();
          uStack_28 = *puVar4;
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          local_24 = *(uint *)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          iStack_2c = unaff_EBP + -0x14;
          uStack_30 = 0x714aab;
          local_24 = FUN_00434e21();
          *(undefined4 *)(unaff_EBP + 8) = 0;
          uStack_28 = 0x714aba;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 9;
          local_24 = 0x714ac6;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          local_24 = 0x714ad2;
          FUN_00414ebb();
          local_24 = 0;
          uStack_28 = 0;
          iStack_2c = 0;
          uStack_30 = 0;
          *(undefined1 **)(unaff_EBP + -0x1c) = auStack_34;
          FUN_00450368(unaff_EBP + 8);
          iVar3 = FUN_007db791();
          if (iVar3 == 6) {
            uStack_28 = 0x714afe;
            local_24 = uVar7;
            FUN_00718ea5();
            local_24 = 0x714b09;
            FUN_0083cb3e();
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          local_24 = 0x714b15;
          FUN_00414ebb();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          local_24 = 0x714b21;
          FUN_00414ebb();
        }
        goto LAB_00714b21;
      }
      local_24 = 0x714904;
      FUN_00434e79();
      local_24 = extraout_ECX + 0xa4;
      uStack_28 = 0x714912;
      FUN_00559727();
      local_24 = 0x714919;
      FUN_00434e79();
      local_24 = extraout_ECX + 0xb8;
      uStack_28 = 0x714927;
      FUN_00559727();
      *(undefined4 *)(extraout_ECX + 0xcc) = *(undefined4 *)(extraout_ECX + 0xd0);
      *(undefined4 *)(extraout_ECX + 0xd0) = *(undefined4 *)(extraout_ECX + 0xd4);
      *(uint *)(extraout_ECX + 0xd4) = *(uint *)(extraout_ECX + 0xd8);
      local_24 = 0x714956;
      FUN_00434e79();
      local_24 = *(uint *)(extraout_ECX + 0xd4);
      *(undefined4 *)(unaff_EBP + 8) = 0;
      while ((local_24 != 0 && (*(int *)(unaff_EBP + 8) < 10))) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        iVar3 = *(int *)((-(uint)(local_24 != 0) & local_24 - 0x10) + 4);
        uVar7 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        uStack_28 = 0x71499f;
        FUN_005598d0();
        local_24 = 0x7149a7;
        uStack_28 = FUN_0071b964();
        *(uint **)(unaff_EBP + -0x18) = &local_24;
        local_24 = 0;
        iStack_2c = 0x7149b5;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        uStack_28 = 0x7149c1;
        iVar3 = FUN_0071b964();
        uStack_28 = *(undefined4 *)(iVar3 + 4);
        iStack_2c = 0x7149cc;
        iVar3 = FUN_00718e1f();
        if (iVar3 != 0) {
          *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
          local_24 = 0x7149e1;
          puVar4 = (undefined4 *)FUN_00518b2e();
          uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 4);
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
          *puVar4 = uVar1;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        local_24 = uVar7;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          local_24 = 0;
          uStack_28 = 0x714a02;
          FUN_005598ff();
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          local_24 = uVar7;
        }
      }
      *(uint *)(extraout_ECX + 0xd8) = local_24;
      local_24 = 1;
      uStack_28 = 0x714a1d;
      (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x70) + 4) + 0x1c))();
      iVar2 = *(int *)(extraout_ECX + 0xc0);
      iVar3 = *(int *)(extraout_ECX + 0x78);
    }
    uStack_28 = (uint)(iVar2 != 0);
    iStack_2c = 0x714a35;
    (**(code **)(*(int *)(iVar3 + 4) + 0x1c))();
    iStack_2c = 0;
    uStack_30 = 0x714a3d;
    FUN_008161f1();
  }
LAB_00714b21:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


