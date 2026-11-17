/* FUN_0068d088 - 0x0068d088 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0068d088(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  cVar3 = FUN_0042452b();
  cVar4 = FUN_0042452b();
  FUN_004b57d7(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 8));
  iVar1 = *(int *)(extraout_ECX + 0x1b4 + cVar3 * 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar5 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x18))();
  *(undefined4 *)(iVar1 + cVar4 * 0x10 + -4) = uVar5;
  FUN_004653ef(unaff_EBP + -0x18);
  uVar8 = 0;
  uVar7 = 1;
  uVar5 = FUN_0045e2eb(1,0);
  puVar6 = (undefined4 *)FUN_005536ce(unaff_EBP + 8,uVar5,uVar7,uVar8);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
             (*(int *)(extraout_ECX + 0x1b4 + cVar3 * 4) + -8 + cVar4 * 0x10),(IBinding *)*puVar6);
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  FUN_008161f1(0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00449913(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


