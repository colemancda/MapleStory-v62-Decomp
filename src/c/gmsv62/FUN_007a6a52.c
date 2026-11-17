/* FUN_007a6a52 - 0x007a6a52 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007a6a52(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  int unaff_EBP;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  undefined1 *puStack_54;
  int local_50;
  
  FUN_00879bb8();
  iVar6 = DAT_00978368;
  local_50 = unaff_EBP + -0x38;
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  puStack_54 = (undefined1 *)0x7a6a76;
  FUN_00455c59();
  local_50 = 0x7a6a7e;
  FUN_0045e4a2();
  local_50 = 1;
  puStack_54 = (undefined1 *)(unaff_EBP + -0x4c);
  *(undefined4 *)(unaff_EBP + -0x34) = DAT_00978364;
  iStack_58 = 0x7a6a92;
  FUN_00817e25();
  local_50 = unaff_EBP + -0x4c;
  puStack_54 = (undefined1 *)0x7a6aa1;
  iVar1 = FUN_007c0c0f();
  local_50 = 0x7a6aae;
  uVar2 = FUN_0045e4b8();
  if ((uVar2 & 1) != 0) {
    local_50 = unaff_EBP + -0x4c;
    puStack_54 = (undefined1 *)0x7a6ac7;
    iVar3 = FUN_004d494d();
    *(int *)(unaff_EBP + -0x30) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      local_50 = unaff_EBP + -0x28;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      puStack_54 = (undefined1 *)0x7a6ae3;
      uVar4 = FUN_006ded92();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
      local_50 = 0xd57;
      puStack_54 = (undefined1 *)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_58 = 0x7a6afd;
      puVar5 = (undefined4 *)FUN_00679d22();
      local_50 = **(int **)(unaff_EBP + -0x10);
      puStack_54 = (undefined1 *)*puVar5;
      iStack_58 = unaff_EBP + -0x14;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_5c = 0x7a6b12;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      local_50 = extraout_ECX_00;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        local_50 = *(int *)(unaff_EBP + -0x20) + -0xc;
        puStack_54 = (undefined1 *)0x7a6b29;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_60 = local_50;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        local_50 = *(int *)(unaff_EBP + -0x28) + -0xc;
        puStack_54 = (undefined1 *)0x7a6b3d;
        FUN_00434e38();
        iStack_60 = local_50;
      }
      local_50 = 0;
      puStack_54 = (undefined1 *)0x0;
      iStack_58 = 0;
      iStack_5c = 0;
      *(int **)(unaff_EBP + -0x28) = &iStack_60;
      FUN_00450368(unaff_EBP + -0x14);
      iVar3 = FUN_007db791();
      if (iVar3 == 6) {
        local_50 = 0;
        puStack_54 = (undefined1 *)0x0;
        iStack_58 = 0x6f;
        iStack_5c = 0x7a6b73;
        FUN_0060142b();
        local_50 = 0x2b;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        puStack_54 = (undefined1 *)0x7a6b81;
        FUN_00457cda();
        local_50 = *(int *)(*(int *)(unaff_EBP + -0x30) + 0x78);
        puStack_54 = (undefined1 *)0x7a6b8f;
        FUN_00457d37();
        local_50 = unaff_EBP + -0x40;
        puStack_54 = (undefined1 *)0x7a6b9e;
        FUN_004751b2();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        local_50 = 0x7a6ba9;
        FUN_0045ebca();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          local_50 = *(int *)(unaff_EBP + -0x14) + -0xc;
          puStack_54 = (undefined1 *)0x7a6bc1;
          FUN_00434e38();
        }
        goto LAB_007a6f15;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        local_50 = *(int *)(unaff_EBP + -0x14) + -0xc;
        puStack_54 = (undefined1 *)0x7a6bdb;
        FUN_00434e38();
      }
    }
  }
  local_50 = 0;
  puStack_54 = (undefined1 *)(unaff_EBP + -0x4c);
  iStack_58 = 0x7a6be9;
  FUN_00817e25();
  if (iVar1 != 0) {
    puStack_54 = *(undefined1 **)(iVar1 + 0xd7c);
    local_50 = -1;
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar1 + 0xd78);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_58 = 0x7a6c0e;
    FUN_00414edd();
    local_50 = 0xc0;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    puStack_54 = (undefined1 *)0x7a6c26;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x34) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_50 = *(int *)(unaff_EBP + -0x48);
      iStack_5c = unaff_EBP + -0x10;
      puStack_54 = *(undefined1 **)(unaff_EBP + -0x4c);
      *(int **)(unaff_EBP + -0x30) = &iStack_58;
      iStack_60 = 0x7a6c46;
      iStack_58 = extraout_ECX_01;
      FUN_00450368();
      iStack_5c = 0x7a6c4e;
      iVar1 = FUN_007dedd3();
    }
    uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
    *(uint *)(unaff_EBP + -0x20) = -(uint)(uVar2 != 0) & uVar2 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    local_50 = 0x7a6c75;
    FUN_007b4334();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    local_50 = 0x7a6c81;
    iVar1 = FUN_004bc6a2();
    if (iVar1 == 1) {
      iVar1 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0xb0);
      if (iVar1 == 0) {
        local_50 = 0;
        puStack_54 = (undefined1 *)0x0;
        iStack_58 = *(int *)(unaff_EBP + -0x14);
        iStack_5c = 0x7a6ea6;
        FUN_00849105();
      }
      else if (iVar1 == 1) {
        local_50 = *(int *)(unaff_EBP + -0x10);
        puStack_54 = (undefined1 *)0x7a6e84;
        FUN_0082812c();
        if (DAT_00978360 != 0) {
          local_50 = 0;
          puStack_54 = (undefined1 *)0x7a6e94;
          FUN_0073e65e();
        }
      }
      else if (iVar1 == 2) {
        local_50 = 0x7a6e60;
        iVar6 = FUN_00429303();
        if (iVar6 != 0) {
          local_50 = unaff_EBP + -0x10;
          puStack_54 = (undefined1 *)0x7a6e6d;
          FUN_00429303();
          puStack_54 = (undefined1 *)0x7a6e74;
          FUN_004e9b8c();
        }
      }
      else if (iVar1 == 3) {
        if (DAT_00978360 != 0) {
          local_50 = 1;
          iStack_58 = unaff_EBP + -0x10;
          *(undefined1 ***)(unaff_EBP + -0x34) = &puStack_54;
          iStack_5c = 0x7a6e49;
          puStack_54 = extraout_ECX_02;
          FUN_00450368();
          *(undefined1 *)(unaff_EBP + -4) = 6;
          iStack_58 = 0x7a6e52;
          FUN_00449784();
          iStack_58 = 0x7a6e59;
          FUN_00743a05();
        }
      }
      else if (iVar1 == 4) {
        if (((DAT_00978360 != 0) && (*(int *)(iVar6 + 0x2b40) != 0)) &&
           (*(int *)(iVar6 + 0x2bf2) == *(int *)(iVar6 + 0x2088))) {
          local_50 = 0x7a6e16;
          iVar6 = FUN_00429303();
          if (iVar6 != 0) {
            local_50 = unaff_EBP + -0x10;
            puStack_54 = (undefined1 *)0x7a6e27;
            FUN_00429303();
            puStack_54 = (undefined1 *)0x7a6e2e;
            FUN_004e9ed9();
          }
        }
      }
      else if (iVar1 == 5) {
        if ((DAT_00978360 != 0) && (*(int *)(iVar6 + 0x2cac) != 0)) {
          local_50 = *(int *)(iVar6 + 0x2088);
          if (**(int **)(iVar6 + 0x2cb8) != local_50) {
            puStack_54 = (undefined1 *)0x7a6da9;
            iVar6 = FUN_004ea83d();
            if (iVar6 != 2) goto LAB_007a6ea6;
          }
          local_50 = 0x7a6db7;
          iVar6 = FUN_00429303();
          if (iVar6 != 0) {
            puStack_54 = (undefined1 *)(unaff_EBP + -0x10);
            *(int **)(unaff_EBP + -0x34) = &local_50;
            local_50 = 0;
            iStack_58 = 0x7a6dd0;
            FUN_00414f8b();
            *(undefined1 *)(unaff_EBP + -4) = 6;
            puStack_54 = (undefined1 *)0x7a6dd9;
            FUN_00429303();
            puStack_54 = (undefined1 *)0x7a6de0;
            FUN_004ea68f();
          }
        }
      }
      else if (iVar1 == 6) {
        local_50 = 0xa8;
        puStack_54 = (undefined1 *)0x7a6cd1;
        iVar6 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x34) = iVar6;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          puStack_54 = (undefined1 *)(unaff_EBP + -0x10);
          *(int **)(unaff_EBP + -0x30) = &local_50;
          local_50 = 0;
          iStack_58 = 0x7a6ced;
          FUN_00414f8b();
          puStack_54 = (undefined1 *)0x7a6cf5;
          iVar6 = FUN_007dfb14();
        }
        uVar2 = -(uint)(iVar6 != 0) & iVar6 + 8U;
        *(uint *)(unaff_EBP + -0x28) = -(uint)(uVar2 != 0) & uVar2 - 8;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        local_50 = 0x7a6d1c;
        FUN_007b4367();
        *(undefined1 *)(unaff_EBP + -4) = 10;
        local_50 = 0x7a6d28;
        iVar6 = FUN_004bc6a2();
        if (iVar6 == 1) {
          puStack_54 = (undefined1 *)&local_50;
          *(int **)(unaff_EBP + -0x34) = &local_50;
          iStack_58 = 0x7a6d3c;
          FUN_007b42be();
          iStack_58 = 0x7a6d43;
          FUN_007e02b9();
          *(undefined1 *)(unaff_EBP + -4) = 10;
          puStack_54 = (undefined1 *)0x7a6d4f;
          FUN_007b42be();
          puStack_54 = (undefined1 *)0x7a6d56;
          puStack_54 = (undefined1 *)FUN_007a6f24();
          iStack_58 = *(int *)(unaff_EBP + -0x14);
          iStack_5c = 0x7a6d5f;
          FUN_004e21db();
          iStack_5c = 0x7a6d66;
          FUN_0084d4d8();
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        local_50 = 0x7a6d72;
        FUN_007b4384();
      }
    }
LAB_007a6ea6:
    *(undefined1 *)(unaff_EBP + -4) = 4;
    local_50 = 0x7a6eb2;
    FUN_007b4351();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_50 = 0x7a6ebe;
    FUN_00414ebb();
  }
  local_50 = unaff_EBP + -0x18;
  puStack_54 = (undefined1 *)(unaff_EBP + -0x44);
  iStack_58 = unaff_EBP + -0x4c;
  iStack_5c = 0x7a6ed5;
  FUN_006851fe();
  if (*(int *)(unaff_EBP + -0x44) == 1) {
    local_50 = -*(int *)(unaff_EBP + -0x18);
    puStack_54 = (undefined1 *)0x7a6f15;
    FUN_00834d98();
  }
  else if (((*(int *)(unaff_EBP + -0x44) == 2) && (*(int *)(unaff_EBP + -0x18) != 0x14011e)) &&
          ((*(int *)(unaff_EBP + -0x18) != 0x4dd5cf ||
           (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x17ac) < 1)))) {
    local_50 = *(int *)(unaff_EBP + -0x18);
    puStack_54 = (undefined1 *)0x7a6f06;
    FUN_007bd2b0();
  }
LAB_007a6f15:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


