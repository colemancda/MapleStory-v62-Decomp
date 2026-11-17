/* FUN_005ea2dd - 0x005ea2dd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005ea2dd(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar9;
  int iStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  
  FUN_00879bb8();
  FUN_005ee767();
  FUN_005ee767();
  FUN_005ee767();
  FUN_005ee767();
  iStack_54 = 0x5ea32c;
  iVar2 = FUN_00455c59();
  uVar7 = *(undefined4 *)(iVar2 + 4);
  FUN_0045e4a2();
  (**(code **)(*DAT_00978358 + 4))();
  uVar3 = FUN_004bf0d4();
  iVar2 = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar2 + 0x3308);
  uVar3 = FUN_0083cbf6();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x14) = DAT_0097926c;
  uVar4 = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  do {
    iVar2 = *(int *)(extraout_ECX + 0xb4);
    if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) <= uVar4)) {
      if ((*(int *)(extraout_ECX + 0xc4) == 0) ||
         (*(int *)(*(int *)(extraout_ECX + 0xc4) + -4) == 0)) {
        if ((*(int *)(extraout_ECX + 0xbc) == 0) ||
           (*(int *)(*(int *)(extraout_ECX + 0xbc) + -4) == 0)) {
          if ((*(int *)(extraout_ECX + 0xc0) == 0) ||
             (*(int *)(*(int *)(extraout_ECX + 0xc0) + -4) == 0)) {
            *(undefined4 *)(extraout_ECX + 200) = 3;
          }
          else {
            *(undefined4 *)(extraout_ECX + 200) = 1;
          }
        }
        else {
          *(undefined4 *)(extraout_ECX + 200) = 0;
        }
      }
      else {
        *(undefined4 *)(extraout_ECX + 200) = 2;
      }
      iVar2 = *(int *)(extraout_ECX + 200);
      if (iVar2 != *(int *)(extraout_ECX + 0xcc)) {
        *(int *)(extraout_ECX + 0xcc) = iVar2;
        if (iVar2 == 3) {
          iStack_54 = 0x5ea4b2;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xdc),
                     (IBinding *)0x0);
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          iStack_54 = unaff_EBP + -0x28;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          iStack_58 = 0x5ea4d0;
          puVar6 = (undefined4 *)FUN_00679d86();
          iStack_54 = *puVar6;
          iStack_58 = unaff_EBP + -0x18;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          uStack_5c = 0x5ea4e6;
          FUN_0041354c();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_00402676();
          iStack_54 = 0xff;
          iStack_58 = 0;
          iStack_60 = extraout_ECX + 0xd4;
          *(undefined4 **)(unaff_EBP + -0x24) = &uStack_5c;
          uStack_64 = 0x5ea510;
          FUN_0041160e();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_60 = 0x5ea51b;
          FUN_00424e27();
          iStack_60 = 0x5ea522;
          iStack_68 = FUN_0042fb34();
          iStack_68 = -0xf - iStack_68;
          uStack_64 = 0x14;
          *(int **)(unaff_EBP + -0x20) = &iStack_68;
          iStack_60 = iStack_68;
          FUN_00433bdf(extraout_ECX + 0x80);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          uVar7 = FUN_00411641(0);
          piVar8 = (int *)FUN_0042e3f0(unaff_EBP + -0x28,uVar7);
          piVar8 = (int *)*piVar8;
          piVar1 = *(int **)(extraout_ECX + 0xdc);
          piVar9 = (int *)(extraout_ECX + 0xdc);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (piVar1 != piVar8) {
            *piVar9 = (int)piVar8;
            FUN_00424ed4();
            if (piVar1 != (int *)0x0) {
              iStack_54 = 0x5ea57e;
              (**(code **)(*piVar1 + 8))();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
            iStack_54 = 0x5ea58f;
            (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
          }
          iStack_54 = 0x5ea59b;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
          iStack_54 = unaff_EBP + -0x4c;
          iStack_58 = 0x5ea5aa;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            iStack_54 = 0x5ea5b6;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iStack_54 = 0x5ea5c0;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
          iStack_54 = unaff_EBP + -0x3c;
          iStack_58 = 0x5ea5ca;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            iStack_54 = 0x5ea5d6;
            FUN_00878dfb();
          }
          iVar2 = *piVar9;
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (iVar2 == 0) {
            iStack_54 = 0x5ea5e9;
            FUN_00878dfb();
          }
          piVar9 = (int *)*piVar9;
          uStack_5c = *(undefined4 *)(unaff_EBP + -0x4c);
          iStack_58 = *(undefined4 *)(unaff_EBP + -0x48);
          iStack_54 = *(undefined4 *)(unaff_EBP + -0x44);
          iStack_68 = *(int *)(unaff_EBP + -0x38);
          uStack_64 = *(undefined4 *)(unaff_EBP + -0x34);
          iStack_60 = *(undefined4 *)(unaff_EBP + -0x30);
          iVar2 = (**(code **)(*piVar9 + 0x110))(piVar9,0x20,*(undefined4 *)(unaff_EBP + -0x3c));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,piVar9,&DAT_00963df8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00402676();
        }
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    uVar3 = CONCAT22((short)(uVar4 >> 0x10),*(undefined2 *)(iVar2 + uVar4 * 2));
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
    iStack_54 = 0x5ea3a2;
    iVar2 = FUN_005ee726();
    if (iVar2 == 0) {
      iStack_54 = unaff_EBP + -0x10;
      iStack_58 = 0x5ea3dd;
      iVar2 = FUN_005ee6cd();
      iStack_54 = *(undefined4 *)(unaff_EBP + -0x20);
      iStack_58 = *(undefined4 *)(unaff_EBP + -0x24);
      iStack_60 = **(undefined4 **)(extraout_ECX + 0x98);
      uStack_64 = *(undefined4 *)(unaff_EBP + -0x10);
      uStack_5c = uVar7;
      if (iVar2 != 0) {
        iStack_68 = 0x5ea3fe;
        FUN_0062d669();
        goto LAB_005ea41d;
      }
      iStack_68 = 0x5ea411;
      iVar2 = FUN_0062d669();
      if (iVar2 != 0) goto LAB_005ea41d;
    }
    else {
      iStack_54 = **(undefined4 **)(extraout_ECX + 0x98);
      iStack_58 = *(undefined4 *)(unaff_EBP + -0x10);
      uStack_5c = 0x5ea3ba;
      FUN_0062dfd9();
LAB_005ea41d:
      iStack_54 = 0x5ea422;
      puVar5 = (undefined2 *)FUN_005ee789();
      *puVar5 = *(undefined2 *)(unaff_EBP + -0x10);
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    uVar4 = *(uint *)(unaff_EBP + -0x18);
  } while( true );
}


