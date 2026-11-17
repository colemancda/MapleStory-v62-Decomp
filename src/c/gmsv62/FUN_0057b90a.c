/* FUN_0057b90a - 0x0057b90a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0057bada) */

void FUN_0057b90a(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xd4) == 7) {
    if (*(int *)(extraout_ECX + 0xf8) == 0) {
      iStack_44 = 0xff;
      uStack_48 = 0xffffffff;
      puStack_50 = (undefined1 *)&uStack_4c;
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_4c;
      uStack_54 = 0x57b955;
      FUN_004489f5();
      puStack_50 = (undefined1 *)0x0;
      uStack_54 = 0;
      iStack_58 = unaff_EBP + -0x14;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uVar2 = FUN_004489f5();
      *(int **)(unaff_EBP + -0x18) = &iStack_58;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0048bccf(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uVar2 = FUN_00411641(0);
      puVar3 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x10,uVar2);
      iStack_44 = 0x57b99f;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xfc),
                 (IBinding *)*puVar3);
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        iStack_44 = 0x57b9ac;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        iStack_44 = 0x57b9bd;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      iStack_44 = 0x57b9c9;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      iStack_44 = unaff_EBP + -0x3c;
      uStack_48 = 0x57b9d7;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        iStack_44 = 0x57b9e3;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 4;
      iStack_44 = 0x57b9f0;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
      iStack_44 = unaff_EBP + -0x2c;
      uStack_48 = 0x57b9fe;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        iStack_44 = 0x57ba0a;
        FUN_00878dfb();
      }
      iVar4 = *(int *)(extraout_ECX + 0xfc);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (iVar4 == 0) {
        iStack_44 = 0x57ba26;
        FUN_00878dfb();
      }
      piVar1 = *(int **)(extraout_ECX + 0xfc);
      uStack_4c = *(undefined4 *)(unaff_EBP + -0x3c);
      uStack_48 = *(undefined4 *)(unaff_EBP + -0x38);
      iVar4 = *piVar1;
      iStack_44 = *(undefined4 *)(unaff_EBP + -0x34);
      iStack_58 = *(int *)(unaff_EBP + -0x28);
      uStack_54 = *(undefined4 *)(unaff_EBP + -0x24);
      *(int **)(unaff_EBP + -0x14) = piVar1;
      puStack_50 = *(undefined1 **)(unaff_EBP + -0x20);
      iVar4 = (**(code **)(iVar4 + 0x110))(piVar1,0,*(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x2c);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x3c);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined4 *)(extraout_ECX + 0xf8) = 1;
      puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x4db);
      uVar2 = *puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 6;
      FUN_007d3cdd(uVar2);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
    }
    else if ((*(int *)(extraout_ECX + 0xfc) != 0) && (iVar4 = FUN_00432a57(), iVar4 == 0)) {
      iStack_44 = 0x57baf7;
      FUN_004de8d8();
      *(undefined4 *)(extraout_ECX + 0xf8) = 0;
    }
  }
  else {
    iStack_44 = 0x57b92c;
    FUN_004de8d8();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


