/* FUN_0050c088 - 0x0050c088 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0050c088(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0xc) = 0;
  *(undefined4 *)(extraout_ECX + 0x10) = 0;
  *(undefined4 *)(extraout_ECX + 0x14) = 8;
  FUN_00414f8b();
  *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + -0x51;
  *(undefined4 *)(extraout_ECX + 0x18) = 0;
  (*DAT_0097b504)();
  FUN_00679d86();
  piVar1 = (int *)(extraout_ECX + 0x30);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00437222();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  if (*piVar1 == 0) {
    FUN_00878dfb();
  }
  iVar2 = *(int *)*piVar1;
  *(int **)(unaff_EBP + 0x10) = (int *)*piVar1;
  iStack_38 = (**(code **)(iVar2 + 0x40))();
  if (iStack_38 < 0) {
    uStack_34 = *(undefined4 *)(unaff_EBP + 0x10);
    uStack_3c = 0x50c13d;
    FUN_00878e09();
  }
  uStack_34 = 0xff;
  iStack_38 = 0xc0015f90;
  *(undefined4 **)(unaff_EBP + 0xc) = &uStack_3c;
  uStack_40 = 0;
  uStack_44 = 0x50c154;
  FUN_00424e0a();
  uStack_40 = 0;
  uStack_44 = 0;
  *(undefined1 **)(unaff_EBP + 0xc) = auStack_48;
  FUN_00433bdf(piVar1);
  puVar3 = (undefined4 *)FUN_0042e3f0(unaff_EBP + 8,*(undefined4 *)(unaff_EBP + 0x14),0);
  uStack_34 = 0x50c17c;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x34),
             (IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    uStack_34 = 0x50c189;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


