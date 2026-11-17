/* FUN_006a4ff5 - 0x006a4ff5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a4ff5(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int iVar5;
  int unaff_EBP;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  
  FUN_00879bb8();
  piVar1 = (int *)(extraout_ECX + 0x94);
  iStack_40 = 10;
  uStack_44 = 0x6a5018;
  FUN_00450550();
  iVar5 = 0;
  do {
    iStack_40 = unaff_EBP + -0x14;
    uStack_44 = 0x6a502f;
    puVar4 = (undefined4 *)FUN_00679d86();
    uStack_44 = *puVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_40 = iVar5 + *piVar1;
    uStack_48 = 0x6a5042;
    FUN_004506a3();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      iStack_40 = 0x6a5059;
      FUN_00403384();
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x28);
  iStack_40 = 0x6a506f;
  FUN_00403191();
  iStack_40 = 0xff000000;
  uStack_44 = 10;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_48;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&uStack_48,10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450708(0);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_40 = 0x6a50ba;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_40 = 0x6a50c5;
    FUN_00878dfb();
  }
  iStack_40 = unaff_EBP + -0x18;
  uStack_44 = 0x6a50d5;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 3;
  iStack_40 = 0x6a50e5;
  FUN_0044f5f6();
  iStack_40 = 0xff000000;
  uStack_44 = 0xb;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_48;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00679e4e(&uStack_48,10);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450708(1);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_40 = 0x6a5128;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_40 = 0x6a5133;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402fa6();
  iStack_40 = 0x6a514b;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((undefined4 *)*piVar1 + 2),
             *(IBinding **)*piVar1);
  iStack_40 = 0x6a5158;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*piVar1 + 0xc),
             *(IBinding **)(*piVar1 + 4));
  iStack_40 = 0x6a5164;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((undefined4 *)*piVar1 + 4),
             *(IBinding **)*piVar1);
  iStack_40 = 0x6a5171;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*piVar1 + 0x14),
             *(IBinding **)(*piVar1 + 4));
  piVar2 = (int *)*piVar1;
  piVar3 = (int *)piVar2[6];
  if (piVar3 != (int *)*piVar2) {
    piVar2[6] = *piVar2;
    FUN_0045e787();
    if (piVar3 != (int *)0x0) {
      iStack_40 = 0x6a5190;
      (**(code **)(*piVar3 + 8))();
    }
  }
  iVar5 = *piVar1;
  piVar2 = *(int **)(iVar5 + 0x1c);
  if (piVar2 != *(int **)(iVar5 + 4)) {
    *(int **)(iVar5 + 0x1c) = *(int **)(iVar5 + 4);
    FUN_0045e787();
    if (piVar2 != (int *)0x0) {
      iStack_40 = 0x6a51b0;
      (**(code **)(*piVar2 + 8))();
    }
  }
  iStack_40 = 0x6a51bc;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((undefined4 *)*piVar1 + 8),
             *(IBinding **)*piVar1);
  iStack_40 = 0x6a51c9;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*piVar1 + 0x24),
             *(IBinding **)(*piVar1 + 4));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


