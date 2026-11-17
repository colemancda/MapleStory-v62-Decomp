/* FUN_00835ab5 - 0x00835ab5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00835ab5(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  int local_24;
  
  FUN_00879bb8();
  uVar4 = *(uint *)(DAT_00978358 + 0x52c);
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  if ((uVar4 & 0xfffffffe) == 0x12) {
    local_24 = 0;
    puStack_28 = (undefined4 *)0x0;
    uStack_2c = 0;
    uStack_30 = 0;
    *(undefined1 **)(unaff_EBP + -0x10) = auStack_34;
    FUN_00679d22(auStack_34,0x19b);
    iVar3 = FUN_007db3ad();
    if (iVar3 == 0) goto LAB_00835b05;
LAB_00835b65:
    uVar5 = 0;
  }
  else {
LAB_00835b05:
    local_24 = 0;
    puStack_28 = (undefined4 *)0x835b0b;
    FUN_00429303();
    puStack_28 = (undefined4 *)0x835b12;
    iVar3 = FUN_004efada();
    uVar2 = 1;
    if (iVar3 == 0) {
      local_24 = 0x835b1e;
      iVar3 = FUN_00429303();
      uVar4 = *(uint *)(iVar3 + 0x108) >> 6 & 1;
      *(uint *)(unaff_EBP + -0x18) = uVar4;
      if (uVar4 != 0) goto LAB_00835b42;
      local_24 = 0x835b33;
      iVar3 = FUN_00429303();
      uVar4 = *(uint *)(iVar3 + 0x108) >> 1 & 1;
      *(uint *)(unaff_EBP + -0x18) = uVar4;
      if (uVar4 != 0) goto LAB_00835b42;
    }
    else {
LAB_00835b42:
      local_24 = 0;
      puStack_28 = (undefined4 *)0x0;
      uStack_2c = 0;
      uStack_30 = 0;
      *(undefined1 **)(unaff_EBP + -0x18) = auStack_34;
      FUN_00679d22(auStack_34,0xb41);
      iVar3 = FUN_007db3ad();
      if (iVar3 != 0) goto LAB_00835b65;
    }
    local_24 = 0xec;
    puStack_28 = (undefined4 *)0x835b7b;
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      local_24 = *(int *)(unaff_EBP + 0xc);
      puStack_28 = (undefined4 *)0x835b8f;
      iVar3 = FUN_006cb273();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar4 = -(uint)(iVar3 != 0) & iVar3 + 8U;
    *(uint *)(unaff_EBP + -0x1c) = -(uint)(uVar4 != 0) & uVar4 - 8;
    local_24 = 0x835bb6;
    FUN_0083e0a9();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    local_24 = 0x835bc1;
    iVar3 = FUN_004bc6a2();
    uVar5 = 0;
    if (iVar3 == 1) {
      puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x328c);
      local_24 = unaff_EBP + -0x10;
      uStack_2c = 0x835bdb;
      puStack_28 = puVar1;
      FUN_006cc787();
      uVar5 = uVar2;
      if (((char *)*puVar1 == (char *)0x0) || (*(char *)*puVar1 == '\0')) {
        if ((*(int *)(unaff_EBP + -0x10) != 0) && (*(int *)(unaff_EBP + -0x10) != 999999999)) {
          local_24 = 0;
          puStack_28 = (undefined4 *)0x835c1d;
          FUN_00457cda();
          local_24 = *(int *)(unaff_EBP + -0x10);
          puStack_28 = (undefined4 *)0x835c28;
          FUN_00457d37();
        }
      }
      else {
        local_24 = 1;
        puStack_28 = (undefined4 *)0x835bee;
        FUN_00457cda();
        *(int **)(unaff_EBP + 0xc) = &local_24;
        local_24 = 0;
        uStack_2c = 0x835bfc;
        puStack_28 = puVar1;
        FUN_00414f8b();
        puStack_28 = (undefined4 *)0x835c04;
        FUN_00459cb5();
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_24 = 0x835c36;
    FUN_0083e0c6();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


