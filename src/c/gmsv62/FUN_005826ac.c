/* FUN_005826ac - 0x005826ac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005826ac(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x8c) < 1) {
    if (*(int *)(extraout_ECX + 0x5b4) == 0) {
      FUN_00583782();
    }
  }
  else {
    FUN_005827ab();
    *(int *)(extraout_ECX + 0x8c) = *(int *)(extraout_ECX + 0x8c) + 1;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x5b8),
               (IBinding *)0x0);
    if (*(int *)(extraout_ECX + 0x8c) % 4 == 2) {
      FUN_004031b7(1,3);
      iVar2 = *(int *)(extraout_ECX + 0x90);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = *(int **)(extraout_ECX + 0x90);
      iVar2 = *piVar1;
      *(int **)(unaff_EBP + -0x10) = piVar1;
      iVar2 = (**(code **)(iVar2 + 0x10c))
                        (piVar1,*(undefined4 *)(unaff_EBP + -0x20),
                         *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                         *(undefined4 *)(unaff_EBP + -0x14));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x20);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
    }
    if (0xf < *(int *)(extraout_ECX + 0x8c)) {
      *(undefined4 *)(extraout_ECX + 0x8c) = 0;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x5b4),
                 (IBinding *)0x0);
    }
    FUN_008161f1(0);
  }
  FUN_008162ff();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


