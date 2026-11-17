/* FUN_00457d6c - 0x00457d6c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00457d6c(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  undefined4 uVar5;
  undefined4 extraout_ECX_00;
  int *piVar6;
  int unaff_EBP;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined *puStack_2c;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x40);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if (iVar2 == 0) {
    puStack_2c = (undefined *)0x99;
    iStack_30 = 0x457d92;
    FUN_00464f0d();
    goto LAB_00457f8f;
  }
  uVar1 = *(uint *)(unaff_EBP + 8);
  if (((((int)uVar1 < 0) || (iVar2 = *(int *)(extraout_ECX + 0x488), iVar2 == 0)) ||
      (*(uint *)(iVar2 + -4) <= uVar1)) || (*(int *)(extraout_ECX + 0x18) != 0)) goto LAB_00457f8f;
  iVar2 = uVar1 * 0x37 + iVar2;
  uVar5 = 1000000;
  if (*(int *)(iVar2 + 0x10) / 1000000 == 1) {
    puStack_2c = &DAT_008e8fa0;
    iStack_30 = iVar2 + 0x27;
    uStack_34 = 0x457dec;
    iVar3 = (*DAT_0097b4ac)();
    uVar5 = extraout_ECX_00;
    if (iVar3 < 0) goto LAB_00457f6d;
    iVar3 = *(int *)(DAT_00978368 + 0x3278);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    piVar6 = (int *)(iVar3 + 4);
    iVar7 = extraout_ECX;
    while( true ) {
      if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= *(uint *)(unaff_EBP + -0x10)))
      goto LAB_00457e3f;
      if ((*(int *)(*piVar6 + 0xc) == *(int *)(iVar2 + 0x14)) && (*(int *)(*piVar6 + 0x1c) == 1))
      break;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      iVar7 = *(int *)(unaff_EBP + -0x14);
      piVar6 = piVar6 + 2;
    }
    iVar7 = *(int *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -0x18) =
         *(undefined4 *)(*(int *)(iVar3 + 4 + *(int *)(unaff_EBP + -0x10) * 8) + 100);
LAB_00457e3f:
    iVar3 = ((((100 - *(int *)(iVar2 + 0x33)) * *(int *)(unaff_EBP + -0x18)) / 100) *
            *(int *)(iVar2 + 0x2f)) / 100;
    *(int *)(unaff_EBP + -0x18) = iVar3;
    if (-1 < iVar3) {
      puStack_2c = (undefined *)0x457e76;
      iVar3 = FUN_007ee7a2();
      *(int *)(unaff_EBP + -0x10) = iVar3;
      if (-1 < iVar3) {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x18) < 1) {
          puStack_2c = (undefined *)0x1f5;
          iStack_30 = unaff_EBP + -0x18;
          uStack_34 = 0x457ed3;
          puStack_2c = (undefined *)FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_30 = 0x457ee0;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0;
        }
        else {
          puStack_2c = (undefined *)0x1f4;
          iStack_30 = unaff_EBP + -0x14;
          uStack_34 = 0x457e9f;
          puVar4 = (undefined4 *)FUN_00679d22();
          puStack_2c = *(undefined **)(unaff_EBP + -0x18);
          uStack_34 = *puVar4;
          iStack_30 = *(undefined4 *)(iVar2 + 0x2f);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          iStack_38 = unaff_EBP + 8;
          uStack_3c = 0x457eb5;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0;
        }
        puStack_2c = (undefined *)0x457eeb;
        FUN_00414ebb();
        puStack_2c = (undefined *)0x0;
        iStack_30 = 0;
        uStack_34 = 0;
        iStack_38 = 0;
        *(undefined4 **)(unaff_EBP + -0x14) = &uStack_3c;
        FUN_00450368(unaff_EBP + 8);
        iVar3 = FUN_007db791();
        if (iVar3 == 6) {
          puStack_2c = (undefined *)0x0;
          iStack_30 = 0;
          uStack_34 = 0xc6;
          iStack_38 = 0x457f1a;
          FUN_0060142b();
          puStack_2c = (undefined *)0x18;
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iStack_30 = 0x457f28;
          FUN_00457cda();
          puStack_2c = *(undefined **)(unaff_EBP + -0x10);
          iStack_30 = 0x457f33;
          FUN_00457d37();
          puStack_2c = (undefined *)0x8;
          uStack_34 = 0x457f3e;
          iStack_30 = iVar2;
          FUN_00457fa0();
          puStack_2c = (undefined *)(unaff_EBP + -0x28);
          iStack_30 = 0x457f4d;
          FUN_004751b2();
          *(undefined4 *)(iVar7 + 0x18) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 0;
          puStack_2c = (undefined *)0x457f5f;
          FUN_0045ebca();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        puStack_2c = (undefined *)0x457f6b;
        FUN_00414ebb();
      }
      goto LAB_00457f8f;
    }
    uStack_3c = 100;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_3c;
    uVar8 = 0x23d;
  }
  else {
LAB_00457f6d:
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_3c;
    uVar8 = 0x23c;
    uStack_3c = uVar5;
  }
  puStack_2c = (undefined *)0x0;
  iStack_30 = 0;
  uStack_34 = 0;
  iStack_38 = 0;
  FUN_00679d22(&uStack_3c,uVar8);
  FUN_007db3ad();
LAB_00457f8f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


