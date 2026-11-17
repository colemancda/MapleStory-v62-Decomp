/* ptr_0072feb4 - 0x0072feb4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0072feb4(int param_1,int param_2)

{
  int *piVar1;
  _CIP<struct_IBinding,&struct__GUID_const_IID_IBinding> *p_Var2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if (param_2 == 2000) {
    p_Var2 = _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                       ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x5e8),
                        (IBinding *)0x0);
    piVar1 = *(int **)(param_1 + 0x5e4);
    if (piVar1 != *(int **)p_Var2) {
      *(int **)(param_1 + 0x5e4) = *(int **)p_Var2;
      FUN_00424ed4();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
    uVar5 = 0x800;
  }
  else if (param_2 == 0x7d1) {
    p_Var2 = _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                       ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x5e8),
                        (IBinding *)0x0);
    piVar1 = *(int **)(param_1 + 0x5e4);
    if (piVar1 != *(int **)p_Var2) {
      *(int **)(param_1 + 0x5e4) = *(int **)p_Var2;
      FUN_00424ed4();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
    uVar5 = 0x2000;
  }
  else if (param_2 == 0x7d2) {
    piVar3 = (int *)FUN_0051548c(0);
    piVar1 = *(int **)(param_1 + 0x5e4);
    if (piVar1 != (int *)*piVar3) {
      *(int **)(param_1 + 0x5e4) = (int *)*piVar3;
      FUN_00424ed4();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
    uVar5 = 0x40;
  }
  else if (param_2 == 0x7d3) {
    puVar4 = (undefined4 *)FUN_0051548c(0);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x5e4),
               (IBinding *)*puVar4);
    uVar5 = 0x80;
  }
  else if (param_2 == 0x7d4) {
    piVar3 = (int *)FUN_0051548c(0);
    piVar1 = *(int **)(param_1 + 0x5e4);
    if (piVar1 != (int *)*piVar3) {
      *(int **)(param_1 + 0x5e4) = (int *)*piVar3;
      FUN_00424ed4();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
    uVar5 = 0x100;
  }
  else {
    if (param_2 != 0x7d5) {
      if (param_2 != 0x7d6) {
        FUN_0078a282(param_2);
        return;
      }
      FUN_0073016d();
      return;
    }
    p_Var2 = _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                       ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x5e8),
                        (IBinding *)0x0);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x5e4),
               *(IBinding **)p_Var2);
    uVar5 = 0x200;
  }
  FUN_00848d84(uVar5);
  return;
}


