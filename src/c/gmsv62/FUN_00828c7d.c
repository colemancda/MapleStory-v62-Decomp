/* FUN_00828c7d - 0x00828c7d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00828c7d(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar7;
  
  FUN_00879bb8();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 4),(IBinding *)0x0);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xc),(IBinding *)0x0
            );
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_00408b49();
  FUN_00402fa6();
  iVar1 = *(int *)(unaff_EBP + -0x14);
  *(int *)(extraout_ECX + 0x10) = iVar1;
  if (iVar1 != 0) {
    FUN_004030b1();
  }
  FUN_008299f2();
  FUN_00829aa1();
  FUN_0043549d();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x6c2);
  pcVar4 = DAT_0097bc30;
  uVar2 = *puVar5;
  bVar7 = DAT_0097bc30 != (code *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar7) {
    (*pcVar4)(uVar2,&DAT_009640c0,unaff_EBP + -0x10,0);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  piVar3 = *(int **)(unaff_EBP + -0x10);
  piVar6 = (int *)0x0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x18))(piVar3);
    piVar6 = *(int **)(unaff_EBP + -0x10);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


