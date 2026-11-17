/* FUN_00815de9 - 0x00815de9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00815de9(void)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  uint uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (extraout_ECX[5] != 0) {
    (**(code **)(*extraout_ECX + 0x10))();
    FUN_0081664f(extraout_ECX + 0x12);
    uVar3 = *(uint *)(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    while (uVar3 != 0) {
      iVar2 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
      (**(code **)(**(int **)(uVar3 + 4) + 0xc))();
      uVar3 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    }
    FUN_008167ec();
    FUN_008167ec();
    extraout_ECX[0x17] = 0;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 6),(IBinding *)0x0
              );
    extraout_ECX[5] = 0;
    FUN_008190e4(extraout_ECX);
    FUN_00819106(extraout_ECX);
    FUN_0081914f(extraout_ECX);
    FUN_00818133(-(uint)(extraout_ECX != (int *)0x0) & (uint)(extraout_ECX + 1));
    FUN_00817e25(unaff_EBP + -0x14,0);
    piVar1 = (int *)FUN_00818edc(*(undefined4 *)(unaff_EBP + -0x14),
                                 *(undefined4 *)(unaff_EBP + -0x10));
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x20))();
      if (iVar2 != 0) {
        (**(code **)(*piVar1 + 0x14))(1);
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined ***)(unaff_EBP + -0x28) = &PTR_FUN_008f2d8c;
    FUN_008167ec();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


