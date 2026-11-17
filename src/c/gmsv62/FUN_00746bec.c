/* FUN_00746bec - 0x00746bec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00746bec(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  int *piStack_a8;
  int *piStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined1 *puStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  
  FUN_00879bb8();
  iStack_84 = 0x746c0c;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_84 = 0x746c1a;
  FUN_00403191();
  iStack_84 = 0;
  iStack_88 = unaff_EBP + -0x6c;
  iStack_8c = unaff_EBP + -0x5c;
  puStack_98 = (undefined1 *)&local_90;
  *(int **)(unaff_EBP + -0x24) = &local_90;
  iStack_94 = 0xb21;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_9c = 0x746c3e;
  FUN_00679e4e();
  iStack_94 = unaff_EBP + -0x7c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_98 = (undefined1 *)0x746c4b;
  FUN_00405a1d();
  puStack_98 = (undefined1 *)0x746c52;
  FUN_00402660();
  puStack_98 = (undefined1 *)0x746c59;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_88 = 0x746c64;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 != 0) {
    iStack_84 = 0x746c7a;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_84 = 0x746c8b;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_84 = 0x746c98;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_84 = 0x746ca3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_84 = 0x746cb0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_84 = 0x746cbb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_84 = 0x746cc8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_84 = 0x746cd3;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_84 = 0x746ce9;
  puVar3 = (undefined4 *)FUN_00485656();
  uVar1 = *puVar3;
  iStack_84 = 0xff;
  iStack_88 = 0;
  local_90 = extraout_ECX + 0xb3c;
  *(int **)(unaff_EBP + -0x28) = &iStack_8c;
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  iStack_94 = 0x746d07;
  FUN_0041160e();
  local_90 = 0x244;
  iStack_94 = 0x146;
  iStack_9c = unaff_EBP + -0x1c;
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_98;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_a0 = 0x746d24;
  FUN_00523572();
  iStack_9c = 0;
  piStack_a4 = (int *)(unaff_EBP + -0x14);
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_a0;
  piStack_a8 = (int *)0x746d34;
  FUN_00424dbc();
  piStack_a4 = (int *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_a8 = (int *)0x746d41;
  puVar3 = (undefined4 *)FUN_0042e5bf();
  iStack_84 = 0x746d4e;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
             (IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    iStack_84 = 0x746d5b;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_84 = 0x746d6c;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  iStack_84 = 0x746d78;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iStack_84 = unaff_EBP + -0x4c;
  iStack_88 = 0x746d82;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_84 = 0x746d8e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_84 = 0x746d98;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_84 = unaff_EBP + -0x3c;
  iStack_88 = 0x746da2;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_84 = 0x746dae;
    FUN_00878dfb();
  }
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piVar4 == (int *)0x0) {
    iStack_84 = 0x746dc3;
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + -0x10);
  }
  iStack_8c = *(int *)(unaff_EBP + -0x4c);
  iStack_88 = *(undefined4 *)(unaff_EBP + -0x48);
  iVar2 = *piVar4;
  iStack_84 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_9c = *(undefined4 *)(unaff_EBP + -0x3c);
  puStack_98 = *(undefined1 **)(unaff_EBP + -0x38);
  iStack_94 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_a0 = 0;
  *(int **)(unaff_EBP + -0x24) = piVar4;
  local_90 = *(int *)(unaff_EBP + -0x30);
  piStack_a8 = (int *)0x746deb;
  piStack_a4 = piVar4;
  iVar2 = (**(code **)(iVar2 + 0x110))();
  if (iVar2 < 0) {
    piStack_a8 = (int *)&DAT_00963df8;
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x24));
  }
  piStack_a8 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_a8 = (int *)FUN_00402bc3();
  if ((int)piStack_a8 < 0) {
    FUN_00878dfb();
  }
  piStack_a8 = (int *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_a8 = (int *)FUN_00402bc3();
  if ((int)piStack_a8 < 0) {
    FUN_00878dfb();
  }
  piStack_a8 = *(int **)(unaff_EBP + -0x10);
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(int ***)(unaff_EBP + -0x2c) = &piStack_a8;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00424e82();
  FUN_00427af9();
  piStack_a8 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piStack_a8 != (int *)0x0) {
    (**(code **)(*piStack_a8 + 8))();
  }
  piStack_a8 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_a8 != (int *)0x0) {
    (**(code **)(*piStack_a8 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


