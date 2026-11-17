/* FUN_007b1ae2 - 0x007b1ae2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x007b1cca) */

void FUN_007b1ae2(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var5;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  
  FUN_00879bb8();
  iVar4 = DAT_00978368;
  *(int *)(unaff_EBP + -0x1c) = DAT_00978368;
  iVar4 = *(int *)(iVar4 + 0x3300);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if (iVar4 == 0) {
    p_Var5 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x2494);
    if ((*(int *)p_Var5 == 0) || (iVar4 = FUN_00432a57(), iVar4 == 0)) {
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      iStack_54 = unaff_EBP + -0x2c;
      iStack_58 = 0;
      uStack_5c = 0xf97;
      *(undefined4 *)(unaff_EBP + -4) = 6;
      FUN_00679d86(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      uStack_5c = 0x7b1d11;
      uVar3 = FUN_00411641();
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_5c;
      uStack_5c = extraout_ECX_00;
      FUN_004033a1(uVar3);
      iVar4 = FUN_0079be1e();
      *(bool *)(unaff_EBP + -0xd) = iVar4 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0xd) == '\0') {
        iStack_54 = 0x7b1d4a;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  (p_Var5,*(IBinding **)(unaff_EBP + -0x24));
        iStack_54 = 0x7b1d54;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
        iStack_54 = unaff_EBP + -0x3c;
        iStack_58 = 0x7b1d63;
        iVar4 = FUN_00402e32();
        if (iVar4 < 0) {
          iStack_54 = 0x7b1d6f;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iStack_54 = 0x7b1d7c;
        FUN_00403191();
        iVar4 = *(int *)p_Var5;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (iVar4 == 0) {
          iStack_54 = 0x7b1d8e;
          FUN_00878dfb();
        }
        piVar1 = *(int **)p_Var5;
        uStack_5c = *(undefined4 *)(unaff_EBP + -0x3c);
        iStack_58 = *(int *)(unaff_EBP + -0x38);
        iVar4 = *piVar1;
        iStack_54 = *(undefined4 *)(unaff_EBP + -0x34);
        *(int **)(unaff_EBP + -0x1c) = piVar1;
        iVar4 = (**(code **)(iVar4 + 0x110))
                          (piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x4c),
                           *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                           *(undefined4 *)(unaff_EBP + -0x40));
        if (iVar4 < 0) {
          iStack_54 = *(undefined4 *)(unaff_EBP + -0x1c);
          uStack_5c = 0x7b1dc8;
          iStack_58 = iVar4;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iStack_54 = 0x7b1dd5;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_54 = 0x7b1de0;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_54 = 0x7b1ded;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_54 = 0x7b1df8;
          FUN_00878dfb();
        }
        *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x2490) = 0;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
        iStack_54 = 0x7b1e12;
        (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
      }
    }
  }
  else {
    iStack_54 = unaff_EBP + -0x18;
    iStack_58 = 0x7b1b24;
    iStack_54 = FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_58 = 0x7b1b2f;
    FUN_00471102();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      iStack_54 = 0x7b1b45;
      FUN_00434e38();
    }
    iStack_54 = unaff_EBP + -0x18;
    iStack_58 = 0x7b1b56;
    puVar2 = (undefined4 *)FUN_00679d86();
    iStack_54 = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iStack_58 = 0x7b1b67;
    FUN_007d4073();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      iStack_54 = 0x7b1b7d;
      FUN_00403384();
    }
    if (*(int *)(extraout_ECX + 0x2490) == 0) {
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      iStack_54 = unaff_EBP + -0x2c;
      iStack_58 = 0;
      uStack_5c = 0xf96;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_00679d86(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_5c = 0x7b1bb5;
      uVar3 = FUN_00411641();
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_5c;
      FUN_004033a1(uVar3);
      iVar4 = FUN_0079be1e();
      *(bool *)(unaff_EBP + -0xd) = iVar4 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        iStack_54 = 0x7b1be2;
        FUN_00403384();
      }
      if (*(char *)(unaff_EBP + -0xd) != '\0') {
        FUN_00412600();
        goto LAB_007b1e12;
      }
      p_Var5 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x2494);
      iStack_54 = 0x7b1c05;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                (p_Var5,*(IBinding **)(unaff_EBP + -0x24));
      iStack_54 = 0x7b1c13;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_54 = 0x7b1c20;
      FUN_00403191();
      iVar4 = *(int *)p_Var5;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (iVar4 == 0) {
        iStack_54 = 0x7b1c32;
        FUN_00878dfb();
      }
      piVar1 = *(int **)p_Var5;
      uStack_5c = *(undefined4 *)(unaff_EBP + -0x4c);
      iStack_58 = *(undefined4 *)(unaff_EBP + -0x48);
      iVar4 = *piVar1;
      iStack_54 = *(undefined4 *)(unaff_EBP + -0x44);
      *(int **)(unaff_EBP + -0x18) = piVar1;
      iVar4 = (**(code **)(iVar4 + 0x110))
                        (piVar1,0,*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x3c);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x4c);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x2490) = 1;
      FUN_00412600();
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x3300) = 0;
  }
LAB_007b1e12:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


