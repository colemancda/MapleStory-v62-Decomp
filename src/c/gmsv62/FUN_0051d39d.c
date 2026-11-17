/* FUN_0051d39d - 0x0051d39d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0051d39d(void)

{
  IBinding *pIVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  wchar_t *pwStack_84;
  undefined1 *puStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  
  FUN_00879bb8();
  iStack_74 = 0x51d3bd;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_74 = 0x51d3cb;
  FUN_00403191();
  iStack_74 = 0;
  iStack_78 = unaff_EBP + -0x5c;
  iStack_7c = unaff_EBP + -0x4c;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_80;
  pwStack_84 = u_Skill_520_img_skill_5201002_ball_00965398;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_88 = 0x51d3e9;
  FUN_004033a1();
  pwStack_84 = (wchar_t *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_88 = 0x51d3f6;
  FUN_00405a1d();
  uStack_88 = 0x51d3fd;
  FUN_00402660();
  uStack_88 = 0x51d404;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_78 = 0x51d40f;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar3 != 0) {
    iStack_74 = 0x51d425;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_74 = 0x51d436;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_74 = 0x51d443;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_74 = 0x51d44e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_74 = 0x51d45b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_74 = 0x51d466;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_74 = 0x51d473;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_74 = 0x51d47e;
    FUN_00878dfb();
    iVar3 = extraout_ECX_00;
  }
  iStack_74 = 0xff;
  iStack_78 = 0;
  puStack_80 = (undefined1 *)&iStack_7c;
  *(int **)(unaff_EBP + -0x1c) = &iStack_7c;
  pwStack_84 = (wchar_t *)0x51d497;
  iStack_7c = iVar3;
  FUN_0043f93c();
  puStack_80 = (undefined1 *)0x0;
  pwStack_84 = (wchar_t *)0x0;
  iStack_8c = extraout_ECX + 0x14;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_88;
  uStack_90 = 0x51d4a8;
  FUN_00433bdf();
  iStack_8c = 0;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_90;
  FUN_00424dbc(unaff_EBP + -0x10);
  puVar5 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x18);
  pIVar1 = (IBinding *)*puVar5;
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x1c) =
       (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x18);
  iStack_74 = 0x51d4d1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x18),pIVar1);
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_74 = 0x51d4de;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  iStack_74 = 0x51d4ea;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_74 = unaff_EBP + -0x3c;
  iStack_78 = 0x51d4f4;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_74 = 0x51d500;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_74 = 0x51d50a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_74 = unaff_EBP + -0x2c;
  iStack_78 = 0x51d514;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_74 = 0x51d520;
    FUN_00878dfb();
  }
  piVar2 = *(int **)(unaff_EBP + -0x1c);
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar3 == 0) {
    iStack_74 = 0x51d535;
    FUN_00878dfb();
  }
  piVar2 = (int *)*piVar2;
  iStack_7c = *(int *)(unaff_EBP + -0x3c);
  iStack_78 = *(undefined4 *)(unaff_EBP + -0x38);
  iVar3 = *piVar2;
  iStack_74 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_8c = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_88 = *(undefined4 *)(unaff_EBP + -0x28);
  pwStack_84 = *(wchar_t **)(unaff_EBP + -0x24);
  uStack_90 = 0x20;
  *(int **)(unaff_EBP + -0x1c) = piVar2;
  puStack_80 = *(undefined1 **)(unaff_EBP + -0x20);
  iVar3 = (**(code **)(iVar3 + 0x110))(piVar2);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


