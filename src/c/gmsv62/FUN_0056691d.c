/* FUN_0056691d - 0x0056691d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0056691d(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((((*(int *)(extraout_ECX + 0x144) == 0) &&
       (iVar1 = *(int *)(extraout_ECX + 0x160), -1 < iVar1)) && (iVar1 < 6)) &&
     (*(int *)(iVar1 * 0x280 + *(int *)(extraout_ECX + 0x164)) != 0)) {
    iVar1 = FUN_0057a639(extraout_ECX + 0x1ac);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    if (-1 < iVar1) {
      iVar1 = FUN_00579f8f(0xd,extraout_ECX + 0x1ac);
      if (iVar1 != 0) {
        FUN_0060142b(0x17,0,0);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_00457d37(*(undefined4 *)(unaff_EBP + -0x10));
        FUN_00457d37(*(undefined4 *)
                      (*(int *)(extraout_ECX + 0x160) * 0x280 + *(int *)(extraout_ECX + 0x164)));
        FUN_00565a2e(unaff_EBP + -0x20);
        if (DAT_0097941c != 0) {
          *(undefined4 *)(extraout_ECX + 0x160) = 0xffffffff;
          FUN_005719f2(0xffffffff);
        }
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x184),
                   (IBinding *)0x0);
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x188),
                   (IBinding *)0x0);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_0045ebca();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


