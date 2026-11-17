/* FUN_00831b94 - 0x00831b94 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00831b94(void)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  if (iVar2 < 6) {
    if (iVar2 == 5) {
      if (*(int *)(extraout_ECX + 0x31cc) != 0) {
        puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x34,0x8e4);
        uVar3 = *puVar1;
        *(undefined4 *)(unaff_EBP + -4) = 9;
        FUN_007d3cdd(uVar3);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00402676();
        uVar3 = 5;
LAB_008320c7:
        FUN_008324e4(uVar3);
        goto LAB_008320ce;
      }
      puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x30,0x8e3);
      uVar3 = *puVar1;
      *(undefined4 *)(unaff_EBP + -4) = 8;
      FUN_007d3cdd(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      uVar3 = 5;
    }
    else if (iVar2 == 0) {
      if (*(int *)(extraout_ECX + 0x31ac) != 0) {
        puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x2c,0x8e4);
        uVar3 = *puVar1;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        FUN_007d3cdd(uVar3);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00402676();
        uVar3 = 0;
        goto LAB_008320c7;
      }
      puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x28,0x8e3);
      uVar3 = *puVar1;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_007d3cdd(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      uVar3 = 0;
    }
    else if (iVar2 == 1) {
      if (*(int *)(extraout_ECX + 0x31b4) != 0) {
        puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x24,0x8e4);
        uVar3 = *puVar1;
        *(undefined4 *)(unaff_EBP + -4) = 3;
        FUN_007d3cdd(uVar3);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00402676();
        uVar3 = 1;
        goto LAB_008320c7;
      }
      puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x20,0x8e3);
      uVar3 = *puVar1;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_007d3cdd(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      uVar3 = 1;
    }
    else if (iVar2 == 2) {
      if (*(int *)(extraout_ECX + 0x31bc) != 0) {
        puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x1c,0x8e4);
        uVar3 = *puVar1;
        *(undefined4 *)(unaff_EBP + -4) = 5;
        FUN_007d3cdd(uVar3);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00402676();
        uVar3 = 2;
        goto LAB_008320c7;
      }
      puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x8e3);
      uVar3 = *puVar1;
      *(undefined4 *)(unaff_EBP + -4) = 4;
      FUN_007d3cdd(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      uVar3 = 2;
    }
    else {
      if (iVar2 != 3) goto LAB_00831ffb;
      if (*(int *)(extraout_ECX + 0x31c4) != 0) {
        puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x8e4);
        uVar3 = *puVar1;
        *(undefined4 *)(unaff_EBP + -4) = 7;
        FUN_007d3cdd(uVar3);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00402676();
        uVar3 = 3;
        goto LAB_008320c7;
      }
      puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x8e3);
      uVar3 = *puVar1;
      *(undefined4 *)(unaff_EBP + -4) = 6;
      FUN_007d3cdd(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      uVar3 = 3;
    }
  }
  else if (iVar2 == 6) {
    if (*(int *)(extraout_ECX + 0x31dc) != 0) {
      puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x54,0x8e4);
      uVar3 = *puVar1;
      *(undefined4 *)(unaff_EBP + -4) = 0xb;
      FUN_007d3cdd(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      FUN_008324e4(6);
LAB_00831ffb:
      if (*(int *)(unaff_EBP + 8) != 7) goto LAB_008320ce;
      if (DAT_0097bef4 == 0) {
        puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x8e3);
        uVar3 = *puVar1;
        *(undefined4 *)(unaff_EBP + -4) = 0x12;
        FUN_007d3cdd(uVar3);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00402676();
        FUN_0085c9b5();
        iVar2 = FUN_004029b9(0x840);
        *(int *)(unaff_EBP + 8) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0x13;
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_0077aaa9(*(undefined4 *)(unaff_EBP + 0xc));
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_0083d677(uVar3);
        goto LAB_008320ce;
      }
      iVar2 = *(int *)(unaff_EBP + 0xc);
      if (*(int *)(DAT_0097bef4 + 0x588) != iVar2) {
        *(int *)(DAT_0097bef4 + 0x588) = iVar2;
        FUN_004b2699(iVar2);
        goto LAB_008320ce;
      }
      puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x8e4);
      uVar3 = *puVar1;
      *(undefined4 *)(unaff_EBP + -4) = 0x14;
      FUN_007d3cdd(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      uVar3 = 7;
      goto LAB_008320c7;
    }
    puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x50,0x8e3);
    uVar3 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 10;
    FUN_007d3cdd(uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    uVar3 = 6;
  }
  else if (iVar2 == 9) {
    if (*(int *)(extraout_ECX + 0x321c) != 0) {
      puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x4c,0x8e4);
      uVar3 = *puVar1;
      *(undefined4 *)(unaff_EBP + -4) = 0xf;
      FUN_007d3cdd(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      uVar3 = 9;
      goto LAB_008320c7;
    }
    puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x48,0x8e3);
    uVar3 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0xe;
    FUN_007d3cdd(uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    uVar3 = 9;
  }
  else if (iVar2 == 10) {
    if (*(int *)(extraout_ECX + 0x31e4) != 0) {
      puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x44,0x8e4);
      uVar3 = *puVar1;
      *(undefined4 *)(unaff_EBP + -4) = 0xd;
      FUN_007d3cdd(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      uVar3 = 10;
      goto LAB_008320c7;
    }
    puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x40,0x8e3);
    uVar3 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0xc;
    FUN_007d3cdd(uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    uVar3 = 10;
  }
  else {
    if (iVar2 != 0x16) goto LAB_00831ffb;
    if (*(int *)(extraout_ECX + 0x3224) != 0) {
      puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x3c,0x8e4);
      uVar3 = *puVar1;
      *(undefined4 *)(unaff_EBP + -4) = 0x11;
      FUN_007d3cdd(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      uVar3 = 0x16;
      goto LAB_008320c7;
    }
    puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x38,0x8e3);
    uVar3 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0x10;
    FUN_007d3cdd(uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    uVar3 = 0x16;
  }
  FUN_008320df(uVar3);
LAB_008320ce:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


