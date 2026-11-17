/* FUN_00500526 - 0x00500526 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00500526(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar3;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int *piStack_28;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_00679d86();
  piVar3 = (int *)(extraout_ECX + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00437222();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  if (*piVar3 == 0) {
    FUN_00878dfb();
  }
  piVar1 = (int *)*piVar3;
  iStack_2c = (**(code **)(*piVar1 + 0x40))();
  if (iStack_2c < 0) {
    uStack_30 = 0x50059a;
    piStack_28 = piVar1;
    FUN_00878e09();
  }
  piStack_28 = (int *)0xff;
  iStack_2c = 0xc0015f90;
  *(undefined4 **)(unaff_EBP + 0xc) = &uStack_30;
  uStack_34 = 0;
  uStack_38 = 0x5005b1;
  FUN_00424e0a();
  uStack_34 = 0;
  uStack_38 = 0;
  *(undefined1 **)(unaff_EBP + 8) = auStack_3c;
  FUN_00433bdf(piVar3);
  puVar2 = (undefined4 *)FUN_0042e3f0(unaff_EBP + 0xc,*(undefined4 *)(unaff_EBP + 0x10),0);
  piStack_28 = (int *)0x5005dc;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x14) + 0x10)
             ,(IBinding *)*puVar2);
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    piStack_28 = (int *)0x5005e9;
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


