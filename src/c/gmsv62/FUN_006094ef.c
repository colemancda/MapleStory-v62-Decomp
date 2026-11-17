/* FUN_006094ef - 0x006094ef in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006094ef(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 *puStack_34;
  
  FUN_00879bb8();
  iVar3 = *(int *)(unaff_EBP + 8);
  uVar5 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_34 = (undefined4 *)0x60950e;
  uVar2 = FUN_0042452b();
  uVar2 = uVar2 & 0xff;
  *(uint *)(unaff_EBP + 8) = uVar2;
  if (uVar2 == 8) {
    if (DAT_00979178 != 0) {
      *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
      *(undefined4 *)(unaff_EBP + -0x28) = 0x21000003;
      puStack_34 = (undefined4 *)&DAT_00903698;
      iStack_38 = unaff_EBP + -0x28;
      *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
      iStack_3c = 0x60990c;
      __CxxThrowException_8();
    }
    puStack_34 = (undefined4 *)0x609913;
    cVar1 = FUN_0042452b();
    puStack_34 = (undefined4 *)0x114;
    iStack_38 = 0x60992a;
    iVar4 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar4;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    if (iVar4 != 0) {
      puStack_34 = (undefined4 *)(-(uint)(cVar1 != '\0') & 2);
      iStack_38 = 0x609947;
      FUN_00607ce2();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_38 = 0x609957;
    puStack_34 = (undefined4 *)iVar3;
    FUN_00609027();
    goto LAB_00609957;
  }
  if (uVar2 != 0x17) {
    if (uVar2 == 0x18) {
      if (DAT_00979178 != 0) {
        puStack_34 = &DAT_009794f0;
        iStack_38 = 0x609764;
        iVar4 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))();
        if ((-(uint)(iVar4 != 0) & DAT_00979178) != 0) {
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
          iStack_38 = 0x609783;
          FUN_00609c3e();
          *(undefined4 *)(unaff_EBP + -4) = 7;
          iStack_3c = 0x609793;
          iStack_38 = iVar3;
          FUN_004b649a();
          iStack_38 = *(int *)(unaff_EBP + -0x2c);
          *(int **)(unaff_EBP + 8) = &iStack_3c;
          puStack_40 = (undefined1 *)0x6097a5;
          FUN_00609c71();
          puStack_40 = (undefined1 *)0x6097ac;
          FUN_00609981();
          iStack_38 = 0;
          iStack_3c = 0;
          puStack_40 = (undefined1 *)0x0;
          uStack_44 = 0;
          *(undefined4 **)(unaff_EBP + 8) = &uStack_48;
          FUN_00679d22(&uStack_48,0xef8);
          FUN_007db3ad();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x2c) != 0) {
            iStack_38 = 0;
            iStack_3c = 0x6097e4;
            FUN_00609cba();
          }
        }
      }
      goto LAB_00609957;
    }
    if (uVar2 != 0x19) {
      if (uVar2 == 0x1a) {
        if (DAT_00979178 != 0) {
          *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
          *(undefined4 *)(unaff_EBP + -0x18) = 0x21000003;
          puStack_34 = (undefined4 *)&DAT_00903698;
          iStack_38 = unaff_EBP + -0x18;
          *(undefined4 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
          iStack_3c = 0x609677;
          __CxxThrowException_8();
        }
        puStack_34 = (undefined4 *)0x114;
        iStack_38 = 0x609686;
        iVar3 = FUN_004029b9();
        *(int *)(unaff_EBP + 8) = iVar3;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (iVar3 != 0) {
          puStack_34 = (undefined4 *)0x1;
          iStack_38 = 0x60969f;
          FUN_00607ce2();
        }
        goto LAB_00609957;
      }
      if (uVar2 == 0x1b) {
        if (DAT_00979178 != 0) {
          puStack_34 = &DAT_009794f0;
          iStack_38 = 0x6095df;
          iVar3 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))();
          if ((-(uint)(iVar3 != 0) & DAT_00979178) != 0) {
            puStack_34 = (undefined4 *)0x0;
            iStack_38 = 0x6095f5;
            FUN_008161f1();
            goto LAB_00609957;
          }
        }
        puStack_34 = (undefined4 *)0x110;
        iStack_38 = 0x609609;
        iVar3 = FUN_004029b9();
        *(int *)(unaff_EBP + 8) = iVar3;
        *(undefined4 *)(unaff_EBP + -4) = 10;
        if (iVar3 == 0) {
          uVar5 = 0;
          iStack_38 = 0;
        }
        else {
          puStack_34 = (undefined4 *)0x60961e;
          uVar5 = FUN_004defeb();
          iStack_38 = extraout_ECX;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        puStack_34 = (undefined4 *)0x0;
        *(int **)(unaff_EBP + -0x10) = &iStack_38;
        iStack_3c = -1;
        puStack_40 = &DAT_00978474;
        uStack_44 = 0x60963b;
        FUN_0045f0f3();
        iStack_3c = 0x609642;
        FUN_004e1ece();
        iStack_38 = 0x60964e;
        puStack_34 = (undefined4 *)uVar5;
        FUN_008497ad();
        goto LAB_00609957;
      }
      if (DAT_00979178 == 0) {
LAB_00609566:
        uVar2 = 0;
      }
      else {
        puStack_34 = &DAT_009794f0;
        iStack_38 = 0x60955a;
        iVar3 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))();
        uVar2 = DAT_00979178;
        if (iVar3 == 0) goto LAB_00609566;
      }
      if (uVar2 == 0) {
        *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
        *(undefined4 *)(unaff_EBP + -0x14) = 0x21000003;
        puStack_34 = (undefined4 *)&DAT_00903698;
        iStack_38 = unaff_EBP + -0x14;
        *(undefined4 *)(unaff_EBP + -4) = 0xb;
                    /* WARNING: Subroutine does not return */
        iStack_3c = 0x60958c;
        __CxxThrowException_8();
      }
      puStack_34 = *(undefined4 **)(unaff_EBP + 8);
      iStack_38 = 0x609594;
      FUN_006099d3();
      puStack_34 = (undefined4 *)0x1;
      iStack_38 = 0x60959e;
      FUN_00609358();
      if (*(int *)(unaff_EBP + 8) == 0x12) {
        if (*(int *)(uVar2 + 0x78) == 0) {
          puStack_34 = (undefined4 *)0x6095c9;
          FUN_00609966();
        }
        else if (*(int *)(uVar2 + 0x78) == 1) {
          puStack_34 = (undefined4 *)0x6095bd;
          FUN_00609492();
        }
      }
      goto LAB_00609957;
    }
    puStack_34 = (undefined4 *)(unaff_EBP + 8);
    iStack_38 = 0x6096af;
    FUN_0045cdbc();
    *(undefined4 *)(unaff_EBP + -4) = 8;
    puStack_34 = (undefined4 *)0x6096b9;
    cVar1 = FUN_0042452b();
    if (DAT_00979178 == 0) {
LAB_006096ef:
      puStack_34 = (undefined4 *)0x110;
      iStack_38 = 0x6096fe;
      iVar4 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x10) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iVar3 = 0;
      if (iVar4 != 0) {
        puStack_34 = (undefined4 *)0x609710;
        uVar5 = FUN_004defeb();
        iVar3 = extraout_ECX_00;
      }
      iStack_3c = unaff_EBP + 8;
      *(int **)(unaff_EBP + -0x10) = &iStack_38;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_40 = (undefined1 *)0x609726;
      iStack_38 = iVar3;
      puStack_34 = (undefined4 *)(uint)(cVar1 != '\0');
      FUN_00450368();
      iStack_3c = 0x60972d;
      FUN_004e1ece();
      iStack_38 = 0x609739;
      puStack_34 = (undefined4 *)uVar5;
      FUN_008497ad();
    }
    else {
      puStack_34 = &DAT_009794f0;
      iStack_38 = 0x6096d7;
      iVar3 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))();
      if ((-(uint)(iVar3 != 0) & DAT_00979178) == 0) goto LAB_006096ef;
      puStack_34 = (undefined4 *)0x0;
      iStack_38 = 0x6096ed;
      FUN_008161f1();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_34 = (undefined4 *)0x609745;
    FUN_00414ebb();
    goto LAB_00609957;
  }
  puStack_34 = (undefined4 *)0x6097f0;
  uVar5 = FUN_0042459a();
  puStack_34 = (undefined4 *)0x6097f9;
  cVar1 = FUN_0042452b();
  if (DAT_00979178 == 0) {
LAB_00609821:
    *(undefined4 *)(unaff_EBP + 8) = 0;
  }
  else {
    puStack_34 = &DAT_009794f0;
    iStack_38 = 0x609813;
    iVar3 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))();
    if (iVar3 == 0) goto LAB_00609821;
    *(uint *)(unaff_EBP + 8) = DAT_00979178;
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0x21000003;
    puStack_34 = (undefined4 *)&DAT_00903698;
    iStack_38 = unaff_EBP + -0x1c;
    *(undefined4 *)(unaff_EBP + -4) = 4;
                    /* WARNING: Subroutine does not return */
    iStack_3c = 0x60984b;
    __CxxThrowException_8();
  }
  iStack_38 = 0x609851;
  puStack_34 = (undefined4 *)uVar5;
  FUN_00609039();
  if (cVar1 == '\x03') {
    puStack_34 = (undefined4 *)0xef5;
    iStack_38 = unaff_EBP + -0x24;
    iStack_3c = 0x60986c;
    uStack_48 = FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 5;
  }
  else {
    puStack_34 = (undefined4 *)0xef6;
    iStack_38 = unaff_EBP + -0x20;
    iStack_3c = 0x60988b;
    uStack_48 = FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 6;
  }
  puStack_34 = (undefined4 *)0x0;
  iStack_38 = 0;
  iStack_3c = 0;
  puStack_40 = (undefined1 *)0x0;
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_44;
  FUN_00450368();
  uStack_48 = 0x6098ae;
  FUN_007db3ad();
  *(undefined4 *)(unaff_EBP + -4) = 5;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    puStack_34 = (undefined4 *)0x6098c6;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    puStack_34 = (undefined4 *)0x6098d8;
    FUN_00414ebb();
  }
  puStack_34 = (undefined4 *)0x1;
  iStack_38 = 0x6098e2;
  FUN_00609358();
LAB_00609957:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


