/* FUN_0078ddc4 - 0x0078ddc4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0078ddc4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x5fd),
             (IBinding *)0x0);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd8;
  uVar5 = FUN_005ee6c0();
  FUN_005ea2cf(uVar5);
  FUN_005ea2b3();
  iVar7 = extraout_ECX[0x14b];
  iVar1 = extraout_ECX[0x600];
  iVar2 = extraout_ECX[0x5ff];
  iVar3 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) =
       *(undefined4 *)(-(uint)(extraout_ECX[0x35d] != 0) & extraout_ECX[0x35d] - 0xcU);
  uVar5 = (**(code **)(iVar3 + 8))(iVar2,iVar1 + -5,0,0,iVar7);
  (**(code **)(*(int *)(unaff_EBP + -0x10) + 4))(uVar5);
  puVar6 = (undefined4 *)FUN_00616184(unaff_EBP + -0x14);
  piVar4 = (int *)*puVar6;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined2 *)(unaff_EBP + -0x24) = 0xd;
  *(int **)(unaff_EBP + -0x1c) = piVar4;
  (**(code **)(*piVar4 + 4))(piVar4);
  iVar7 = extraout_ECX[0x34f];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar7 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)extraout_ECX[0x34f];
  iVar7 = (**(code **)(*piVar4 + 100))
                    (piVar4,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
  if (iVar7 < 0) {
    FUN_00878e09(iVar7,piVar4,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar7 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar7 < 0) {
    FUN_00878dfb(iVar7);
  }
  piVar4 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


