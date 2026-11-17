/* FUN_004f64fd - 0x004f64fd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004f64fd(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int unaff_EBP;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  
  FUN_00879bb8();
  iStack_48 = 0xff;
  uStack_4c = 0xc00614a4;
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_50;
  uStack_54 = 0;
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  uStack_58 = 0x4f652b;
  FUN_00424e0a();
  uStack_54 = 100;
  uStack_58 = 400;
  puVar3 = &uStack_5c;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_5c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004f14fa(&uStack_5c);
  FUN_00485656(puVar3);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679d86(unaff_EBP + -0x14,0x10cf);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar2 = FUN_00411641(0);
  puVar3 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x10,uVar2);
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x730);
  iStack_48 = 0x4f6587;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_48 = 0x4f6594;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  iStack_48 = 0x4f65ac;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_48 = unaff_EBP + -0x40;
  uStack_4c = 0x4f65bb;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_48 = 0x4f65c7;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 4;
  iStack_48 = 0x4f65d4;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_48 = unaff_EBP + -0x30;
  uStack_4c = 0x4f65de;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_48 = 0x4f65ea;
    FUN_00878dfb();
  }
  iVar4 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar4 == 0) {
    iStack_48 = 0x4f65fd;
    FUN_00878dfb();
  }
  piVar1 = *(int **)this;
  uStack_50 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_4c = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_48 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_5c = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_58 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_54 = *(undefined4 *)(unaff_EBP + -0x24);
  iVar4 = (**(code **)(*piVar1 + 0x110))(piVar1,0,*(undefined4 *)(unaff_EBP + -0x30));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x10d0);
  uVar2 = *puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_007d3cdd(uVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
             (*(int *)(unaff_EBP + -0x1c) + 0x72c),(IBinding *)0x0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


