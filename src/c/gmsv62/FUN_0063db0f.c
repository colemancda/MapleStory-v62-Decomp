/* FUN_0063db0f - 0x0063db0f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0063db0f(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uStack_30;
  undefined *puStack_2c;
  undefined4 *puStack_28;
  
  FUN_00879bb8();
  puStack_28 = (undefined4 *)0x63db26;
  uVar1 = FUN_0042452b();
  uVar1 = uVar1 & 0xff;
  if (uVar1 < 6) goto LAB_0063dd59;
  if (7 < uVar1) {
    if (uVar1 == 8) {
      if (DAT_00979178 != 0) {
        *(undefined4 *)(unaff_EBP + -0x20) = 0x21000003;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        *(undefined4 *)(unaff_EBP + -0x14) = 0x21000003;
        puStack_28 = (undefined4 *)&DAT_00903698;
        puStack_2c = (undefined *)(unaff_EBP + -0x14);
                    /* WARNING: Subroutine does not return */
        uStack_30 = 0x63dc02;
        __CxxThrowException_8();
      }
      puStack_28 = (undefined4 *)0x63dc0a;
      uVar2 = FUN_0042459a();
      puStack_28 = (undefined4 *)0xe0f;
      puStack_2c = (undefined *)(unaff_EBP + 8);
      uStack_30 = 0x63dc1f;
      FUN_00679d22();
      puStack_28 = (undefined4 *)0x69c;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      puStack_2c = (undefined *)0x63dc37;
      iVar3 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x20) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        puStack_28 = (undefined4 *)0x63dc49;
        iVar3 = FUN_007e62e9();
      }
      uVar1 = -(uint)(iVar3 != 0) & iVar3 + 8U;
      *(uint *)(unaff_EBP + -0x24) = -(uint)(uVar1 != 0) & uVar1 - 8;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      puStack_28 = (undefined4 *)0x63dc70;
      FUN_004c26c4();
      puStack_28 = (undefined4 *)0x0;
      puStack_2c = (undefined *)0x0;
      *(uint **)(unaff_EBP + -0x20) = &uStack_30;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00450368(unaff_EBP + 8);
      uVar4 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uVar5 = uVar2;
      FUN_004c2677(0,uVar2);
      FUN_007eddac(uVar4,uVar5);
      puStack_28 = (undefined4 *)0x0;
      puStack_2c = (undefined *)0x0;
      uStack_30 = 0x63dca9;
      FUN_007edf11();
      puStack_28 = (undefined4 *)0x63dcb1;
      FUN_007e6e3c();
      puStack_28 = (undefined4 *)0x63dcb9;
      FUN_004bc6a2();
      puStack_28 = (undefined4 *)0x120;
      puStack_2c = (undefined *)0x63dcc5;
      iVar3 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x20) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (iVar3 != 0) {
        puStack_2c = (undefined *)0x63dcd8;
        puStack_28 = (undefined4 *)uVar2;
        FUN_0063abaf();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      puStack_28 = (undefined4 *)0x63dce4;
      FUN_004c26e1();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puStack_28 = (undefined4 *)0x63dcf0;
      FUN_00414ebb();
      goto LAB_0063dd59;
    }
    if (uVar1 < 9) goto LAB_0063dd59;
    if (0xc < uVar1) {
      if (uVar1 == 0xd) {
        if (DAT_00979178 != 0) {
          puStack_28 = &DAT_009795a8;
          puStack_2c = (undefined *)0x63db84;
          iVar3 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))();
          if ((-(uint)(iVar3 != 0) & DAT_00979178) == 0) {
            *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
            *(undefined4 *)(unaff_EBP + -0x10) = 0x21000003;
            puStack_2c = &DAT_00903698;
            uStack_30 = unaff_EBP - 0x10;
            *(undefined4 *)(unaff_EBP + -4) = 6;
                    /* WARNING: Subroutine does not return */
            __CxxThrowException_8();
          }
          if (DAT_00979178 != 0) {
            puStack_2c = (undefined *)0x63dbc1;
            FUN_00815de9();
            if (DAT_00979178 != 0) {
              puStack_2c = (undefined *)0x1;
              uStack_30 = 0x63dbd7;
              (*(code *)**(undefined4 **)(DAT_00979178 + 8))();
            }
          }
        }
        goto LAB_0063dd59;
      }
      if (uVar1 != 0xe) goto LAB_0063dd59;
    }
  }
  if (DAT_00979178 == 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
    *(undefined4 *)(unaff_EBP + -0x18) = 0x21000003;
    puStack_28 = (undefined4 *)&DAT_00903698;
    puStack_2c = (undefined *)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 7;
                    /* WARNING: Subroutine does not return */
    uStack_30 = 0x63dd17;
    __CxxThrowException_8();
  }
  puStack_28 = &DAT_009795a8;
  puStack_2c = (undefined *)0x63dd24;
  iVar3 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))();
  if ((-(uint)(iVar3 != 0) & DAT_00979178) == 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0x21000003;
    puStack_2c = &DAT_00903698;
    uStack_30 = unaff_EBP - 0x1c;
    *(undefined4 *)(unaff_EBP + -4) = 8;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8();
  }
  puStack_2c = *(undefined **)(unaff_EBP + 8);
  uStack_30 = uVar1;
  FUN_0063dd67();
LAB_0063dd59:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


