/* FUN_0073dd5c - 0x0073dd5c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0073dd5c(void)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 uVar3;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iStack_30;
  int iStack_2c;
  int local_28;
  
  FUN_00879bb8();
  local_28 = 0x69c;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iStack_2c = 0x73dd80;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  uVar3 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    local_28 = 0x73dd93;
    iVar1 = FUN_007e62e9();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
  *(uint *)(unaff_EBP + -0x20) = -(uint)(uVar2 != 0) & uVar2 - 8;
  local_28 = 0x73ddba;
  FUN_004c26c4();
  local_28 = 0;
  iStack_2c = 1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(int **)(unaff_EBP + -0x18) = &iStack_30;
  iStack_30 = extraout_ECX_00;
  FUN_00679d22(&iStack_30,0x2fc);
  uVar5 = 0;
  uVar4 = 7;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004c2677(7,0);
  FUN_007eddac(uVar4,uVar5);
  local_28 = 0x73ddf8;
  FUN_007e6e3c();
  iStack_2c = 0x73de07;
  local_28 = extraout_ECX + 0xbc4;
  FUN_007ee05a();
  local_28 = 0x73de0f;
  iVar1 = FUN_004bc6a2();
  if (iVar1 != 1) goto LAB_0073df69;
  iStack_2c = 0x73de21;
  local_28 = extraout_ECX + 0xbc4;
  FUN_007ee6b6();
  local_28 = unaff_EBP + -0x10;
  iStack_2c = 0x73de2d;
  FUN_0073df86();
  local_28 = 0;
  iStack_2c = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_30 = 0x73de3b;
  FUN_0045ed72();
  iStack_2c = 0x73de42;
  FUN_0045ee27();
  if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) && (**(char **)(unaff_EBP + -0x10) != '\0')) {
    iStack_2c = unaff_EBP + -0x10;
    local_28 = 0;
    iStack_30 = 0x73de5f;
    iVar1 = FUN_007d1e11();
    if (iVar1 == 0) {
      iStack_2c = local_28;
      *(int **)(unaff_EBP + -0x1c) = &iStack_2c;
      local_28 = 0;
      iStack_30 = 0x2fd;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00679d22(unaff_EBP + -0x18);
      iStack_30 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0xc;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      uVar4 = FUN_00449713(0xc,0xffffffff);
      FUN_00743a59(uVar4,uVar5,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 3;
LAB_0073dea3:
      local_28 = 0x73dea8;
      FUN_00414ebb();
    }
    else {
      if (*(int *)(DAT_00978368 + 0x2098) == 0) {
        local_28 = 0;
      }
      else {
        local_28 = *(int *)(DAT_00978368 + 0x2098) + 4;
      }
      if (local_28 != 0) {
        iStack_2c = *(int *)(unaff_EBP + -0x10);
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          iStack_2c = DAT_00980dfc;
        }
        iStack_30 = 0x73deda;
        iVar1 = FUN_008858f0();
        if (iVar1 == 0) {
          iStack_2c = local_28;
          *(int **)(unaff_EBP + -0x1c) = &iStack_2c;
          local_28 = 0;
          iStack_30 = 0x2fe;
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_00679d22(unaff_EBP + -0x18);
          iStack_30 = 0;
          uVar6 = 0xffffffff;
          uVar5 = 0xc;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          uVar4 = FUN_00449713(0xc,0xffffffff);
          FUN_00743a59(uVar4,uVar5,uVar6);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          goto LAB_0073dea3;
        }
      }
      iStack_2c = unaff_EBP + -0x10;
      *(int **)(unaff_EBP + -0x1c) = &local_28;
      local_28 = 0;
      iStack_30 = 0x73df31;
      FUN_00414f8b();
      iStack_2c = 0x73df39;
      FUN_00748724();
      local_28 = 0;
      iStack_30 = unaff_EBP + -0x10;
      *(int **)(unaff_EBP + -0x1c) = &iStack_2c;
      FUN_00450368();
      iStack_30 = 0x73df51;
      FUN_00743a05();
      local_28 = 0;
      iStack_2c = 0x73df5a;
      FUN_0073e65e();
      uVar3 = 1;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  local_28 = 0x73df69;
  FUN_00414ebb();
LAB_0073df69:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_28 = 0x73df75;
  FUN_004c26e1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


