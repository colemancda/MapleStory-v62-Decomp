/* FUN_005fa1ba - 0x005fa1ba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005fa1ba(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  _CIP<struct_IBinding,&struct__GUID_const_IID_IBinding> *p_Var4;
  int *extraout_ECX;
  int unaff_EBP;
  float10 fVar5;
  undefined4 uVar6;
  
  FUN_00879bb8();
  iVar2 = FUN_007d1e08();
  if ((extraout_ECX[0x33] != 0) && (iVar1 = extraout_ECX[0x2ac], iVar1 != 0)) {
    if ((iVar1 == 1) && (iVar2 != extraout_ECX[0x2b3] && -1 < iVar2 - extraout_ECX[0x2b3])) {
      uVar6 = 0;
    }
    else {
      if ((iVar1 != 2) || (iVar2 == extraout_ECX[0x2b3] || iVar2 - extraout_ECX[0x2b3] < 0)) {
        if ((iVar1 == 3) && (iVar2 != extraout_ECX[0x2b3] && -1 < iVar2 - extraout_ECX[0x2b3])) {
          (**(code **)(*extraout_ECX + 0x34))(8);
          goto LAB_005fa464;
        }
        goto LAB_005fa207;
      }
      uVar6 = 1;
    }
    FUN_005fe31f(uVar6);
  }
LAB_005fa207:
  if (extraout_ECX[0x2a8] == 1) {
    extraout_ECX[0x2ae] = extraout_ECX[0x2ae] + -0x1e;
    iVar2 = extraout_ECX[0x2ae];
    *(double *)(unaff_EBP + -0x18) = (double)extraout_ECX[0x2af];
    *(int *)(unaff_EBP + -0x10) = (iVar2 + 999) / 1000;
    fVar5 = (float10)FUN_0087c217((double)*(int *)(unaff_EBP + -0x10));
    if (fVar5 != (float10)*(double *)(unaff_EBP + -0x18)) {
      if (((extraout_ECX[0x2a7] != 0) && (extraout_ECX[0x2af] < 10)) && (0 < extraout_ECX[0x2af])) {
        puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x620);
        uVar6 = *puVar3;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_007d40d5(uVar6,100);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00402676();
      }
      *(int *)(unaff_EBP + -0x10) = (extraout_ECX[0x2ae] + 999) / 1000;
      FUN_0087c217((double)*(int *)(unaff_EBP + -0x10));
      iVar2 = __ftol();
      extraout_ECX[0x2af] = iVar2;
      if (iVar2 < 1) {
        FUN_0060142b(0x6f,0,0);
        *(undefined4 *)(unaff_EBP + -4) = 1;
        FUN_00457cda();
        FUN_004751b2();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        extraout_ECX[0x2af] = 0;
        FUN_0045ebca();
      }
      FUN_008161f1();
    }
    if (extraout_ECX[0x30] == 0) {
      (**(code **)(*(int *)(extraout_ECX[0x6b] + 4) + 0x1c))();
      iVar2 = extraout_ECX[0x65];
    }
    else {
      iVar2 = extraout_ECX[0x67];
    }
    (**(code **)(*(int *)(iVar2 + 4) + 0x1c))();
    (**(code **)(*(int *)(extraout_ECX[99] + 4) + 0x1c))(1);
    (**(code **)(*(int *)(extraout_ECX[0x6d] + 4) + 0x1c))(1);
    iVar2 = *(int *)(extraout_ECX[0x61] + 4);
    uVar6 = 1;
  }
  else {
    if (extraout_ECX[0x30] == 0) {
      (**(code **)(*(int *)(extraout_ECX[0x6b] + 4) + 0x1c))();
      iVar2 = *(int *)(extraout_ECX[0x65] + 4);
    }
    else {
      iVar2 = *(int *)(extraout_ECX[0x67] + 4);
    }
    (**(code **)(iVar2 + 0x1c))();
    (**(code **)(*(int *)(extraout_ECX[99] + 4) + 0x1c))(0);
    (**(code **)(*(int *)(extraout_ECX[0x6d] + 4) + 0x1c))(0);
    iVar2 = *(int *)(extraout_ECX[0x61] + 4);
    uVar6 = 0;
  }
  (**(code **)(iVar2 + 0x1c))(uVar6);
  if (extraout_ECX[0x2a8] == 0) {
    p_Var4 = _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                       ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x7b),
                        (IBinding *)0x0);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x7a),
               *(IBinding **)p_Var4);
  }
  if (extraout_ECX[0x32] < 2) {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x79),
               (IBinding *)0x0);
  }
  FUN_005fcb28();
  FUN_008162ff();
LAB_005fa464:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


