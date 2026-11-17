/* FUN_004e65d0 - 0x004e65d0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e65d0(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined *puStack_38;
  int iStack_34;
  undefined *local_30;
  
  FUN_00879bb8();
  local_30 = (undefined *)0x4e65e7;
  FUN_0059f698();
  local_30 = (undefined *)0x4e65ee;
  FUN_004e68fb();
  local_30 = *(undefined **)(unaff_EBP + 8);
  iStack_34 = 0x4e65f8;
  FUN_004e6c7c();
  local_30 = (undefined *)0x4e65ff;
  FUN_004e6dd6();
  local_30 = (undefined *)0x4e6606;
  FUN_004e7eee();
  local_30 = (undefined *)0x4e660d;
  FUN_004e83f6();
  local_30 = (undefined *)0x4e6614;
  FUN_004e6840();
  local_30 = (undefined *)0x4e661b;
  FUN_004e80d7();
  local_30 = (undefined *)0x4e6622;
  FUN_005a7912();
  local_30 = *(undefined **)(unaff_EBP + 8);
  puStack_38 = (undefined *)(extraout_ECX + 0x28);
  *(int **)(unaff_EBP + -0x14) = &iStack_34;
  FUN_00424dbc();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_38 = (undefined *)0x4e663d;
  FUN_004f14e8();
  puStack_38 = (undefined *)0x4e6644;
  FUN_006dbbe2();
  local_30 = (undefined *)(unaff_EBP + -0xd);
  iStack_34 = 0;
  puStack_38 = (undefined *)0x4e6656;
  FUN_004f1bc6();
  local_30 = (undefined *)0x0;
  iStack_34 = 0;
  *(undefined ***)(unaff_EBP + -0x18) = &puStack_38;
  FUN_00679e4e(&puStack_38,0x5c6);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = unaff_EBP + -0x28;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  puStack_38 = (undefined *)0x4e6692;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  local_30 = (undefined *)0x0;
  *(undefined ***)(unaff_EBP + -0x18) = &local_30;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    iStack_34 = unaff_EBP + -0x14;
    puStack_38 = (undefined *)0x4e66ab;
    iStack_34 = FUN_00404b30();
    if ((iStack_34 < 0) && (iStack_34 != -0x7fffbffe)) {
      puStack_38 = (undefined *)0x4e66bc;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_38 = (undefined *)0x4e66c6;
  FUN_004f14e2();
  puStack_38 = (undefined *)0x4e66cd;
  FUN_00620703();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_30 = (undefined *)(unaff_EBP + -0x28);
  iStack_34 = 0x4e66da;
  local_30 = (undefined *)FUN_00402bc3();
  if ((int)local_30 < 0) {
    iStack_34 = 0x4e66e5;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 8) == 0x10b0eb30) {
    iVar2 = 0;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    do {
      if ((iVar2 != 1) && (iVar2 != 2)) {
        local_30 = &DAT_00864700 + iVar2;
        iStack_34 = 0x4e670c;
        uVar1 = FUN_005d90ec();
        *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
        iVar2 = 0;
        do {
          if ((0xb < iVar2) && (iVar2 < 0x15)) {
            local_30 = (undefined *)(iVar2 + -0xc);
            iStack_34 = 0x4e6728;
            FUN_004e67c9();
          }
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          *(undefined ***)(unaff_EBP + -0x2c) = &PTR_FUN_008e862c;
          local_30 = (undefined *)(unaff_EBP + -0x2c);
          puStack_38 = &DAT_00864700 + *(int *)(unaff_EBP + 8);
          *(undefined4 *)(unaff_EBP + -4) = 4;
          iStack_34 = iVar2;
          FUN_0040a66d();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          *(undefined ***)(unaff_EBP + -0x2c) = &PTR_FUN_008e862c;
          local_30 = (undefined *)0x4e676b;
          FUN_0041389d();
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x1b);
      }
      iVar2 = *(int *)(unaff_EBP + 8) + 1;
      *(int *)(unaff_EBP + 8) = iVar2;
    } while (iVar2 < 0xb);
  }
  if (DAT_00979248 == 1) {
    local_30 = (undefined *)0xc3;
    iStack_34 = unaff_EBP + 8;
    puStack_38 = (undefined *)0x4e679d;
    local_30 = (undefined *)FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -4) = 5;
    iStack_34 = 0x4e67ac;
    FUN_004e8810();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_30 = (undefined *)0x4e67b8;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


