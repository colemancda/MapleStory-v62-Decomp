/* FUN_004ae221 - 0x004ae221 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ae221(void)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Stack_34;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x54) = *(undefined4 *)(unaff_EBP + 8);
  p_Stack_34 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x4ae245;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x60),
             (IBinding *)0x0);
  p_Stack_34 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8);
  uStack_38 = 0x4ae25a;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_38 = *puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_3c = (undefined4 *)0x4ae269;
  p_Stack_34 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x60);
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  p_Stack_34 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x4ae284;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
  p_Stack_34 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x1c);
  puVar1 = &DAT_00980690;
  uStack_38 = 0x4ae292;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    p_Stack_34 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x4ae29e;
    FUN_00878dfb();
    puVar1 = extraout_ECX_00;
  }
  p_Stack_34 = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_3c;
  puStack_3c = puVar1;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0044974c();
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  p_Stack_34 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x4ae2de;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    p_Stack_34 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x4ae2e9;
    FUN_00878dfb();
  }
  p_Stack_34 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x4ae2f5;
  FUN_004aee48();
  p_Stack_34 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8);
  uStack_38 = 0x4ae305;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_38 = *puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  puStack_3c = (undefined4 *)0x4ae317;
  p_Stack_34 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 100);
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  p_Stack_34 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x4ae32c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  p_Stack_34 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x2c);
  puVar1 = &DAT_00980690;
  uStack_38 = 0x4ae33a;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    p_Stack_34 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x4ae346;
    FUN_00878dfb();
    puVar1 = extraout_ECX_01;
  }
  p_Stack_34 = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_3c;
  puStack_3c = puVar1;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0044974c();
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  p_Stack_34 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x4ae385;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    p_Stack_34 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x4ae390;
    FUN_00878dfb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


